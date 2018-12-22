#include <string>
#include <array>
#include <iostream>

#include "nbind/api.h"

#if defined(BUILDING_NODE_EXTENSION)

#include "perl_keywords.hh"

static std::array<std::string, 235> getPerlFunctions(void)
{
    return perl_functions;
}

static std::array<std::string, 5> getPerlFileHandles(void)
{
    return perl_filehandles;
}

static std::array<std::string, 130> getPerlVariables(void)
{
    return perl_variables;
}

static std::array<std::string, 40> getPerlSyntax(void)
{
    return perl_syntax;
}


/* !JavaScript */

#include "nbind/nbind.h"

NBIND_GLOBAL() {
    function(getPerlFunctions);
}

NBIND_GLOBAL() {
    function(getPerlFileHandles);
}

NBIND_GLOBAL() {
    function(getPerlVariables);
}

NBIND_GLOBAL() {
    function(getPerlSyntax);
}

#endif
