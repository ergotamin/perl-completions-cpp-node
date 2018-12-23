#include <string>
#include <vector>
#include <array>
#include <iostream>

#include "nbind/api.h"

#if defined(BUILDING_NODE_EXTENSION)

#include "functions.hh"
#include "variables.hh"

class Perl {
public:

    static std::vector<std::array<std::string, 3> > functions(void)
    {
        return functions;
    }

    static std::vector<std::array<std::string, 3> > variables(void)
    {
        return variables;
    }
};

/* !JavaScript */

#include "nbind/nbind.h"

NBIND_CLASS(Perl) {
    method(functions);
    method(variables);
}

#endif
