
#include "regini.h"

int main(int argc, char *argv[])
{
    std::cout << Regini("test").ReadString("1", "2") << argc << '\n';
    return 0;
}