
#pragma once

#include "regini_interface.h"

class Regini : // public IRegini
{
public:

    Regini(std::string);
    std::string ReadString(std::string, std::string);
};
