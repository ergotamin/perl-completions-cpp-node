#include <string>
#include <vector>
#include <iostream>

#include "nbind/api.h"

#if defined(BUILDING_NODE_EXTENSION)

#include "perl_keywords.hh"

class Perl {
public:

    static std::vector<std::string> functions(void)
    {
        return perl_functions;
    }

    static std::vector<std::string> constants(void)
    {
        return perl_filehandles;
    }

    static std::vector<std::string> variables(void)
    {
        return perl_variables;
    }

    static std::vector<std::string> syntax(void)
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
