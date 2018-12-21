#include <string>
#include <array>
#include <iostream>

#include "nbind/api.h"

#include "builtin_functions.hh"

class Data {
public:

    static std::array<std::string, 236> loadFunctions()
    {
#       if defined(BUILDING_NODE_EXTENSION)
        return builtin_functions;
#       endif
    }
};

#include "nbind/nbind.h"

#ifdef NBIND_CLASS

NBIND_CLASS(Data) {
    method(loadFunctions);
}

#endif
