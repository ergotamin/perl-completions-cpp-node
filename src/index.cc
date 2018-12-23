#include <string>
#include <vector>
#include <array>
#include <iostream>

#include "nbind/api.h"

#if defined(BUILDING_NODE_EXTENSION)

#include "perl_keywords.hh"

class Perl {
public:

    static std::vector<std::array<std::string, 2> > functions(void)
    {
        return perlfunc;
    }

    static std::vector<std::string> variables(void)
    {
        return perl_variables;
    }
};

/* !JavaScript */

#include "nbind/nbind.h"

NBIND_CLASS(Perl) {
    method(functions);
    method(variables);
}

#endif
