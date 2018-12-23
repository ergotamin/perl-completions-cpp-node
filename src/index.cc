#include <string>
#include <vector>
#include <array>
#include <iostream>

#include "nbind/api.h"

#if defined(BUILDING_NODE_EXTENSION)

#include "perlfunc.hh"
#include "perlvar.hh"

class Perl {
public:

    static std::vector<std::array<std::string, 2> > functions(void)
    {
        return perlfunc;
    }

    static std::vector<std::array<std::string, 2> > variables(void)
    {
        return perlvar;
    }
};

/* !JavaScript */

#include "nbind/nbind.h"

NBIND_CLASS(Perl) {
    method(functions);
    method(variables);
}

#endif
