#include <string>
#include <array>
#include <iostream>

#include "nbind/api.h"

#if defined(BUILDING_NODE_EXTENSION)

#include "perl_keywords.hh"

class Perl {
public:

    static std::array<std::string, 235> functions(void)
    {
        return perl_functions;
    }

    static std::array<std::string, 5> constants(void)
    {
        return perl_filehandles;
    }

    static std::array<std::string, 130> variables(void)
    {
        return perl_variables;
    }

    static std::array<std::string, 40> syntax(void)
    {
        return perl_syntax;
    }
};

/* !JavaScript */

#include "nbind/nbind.h"

NBIND_CLASS(Perl) {
    method(functions);
    method(constants);
    method(variables);
    method(syntax);
}

#endif
