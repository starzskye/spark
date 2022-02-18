#include "spark.hpp"

#define LINUX

int main()
{
    #ifdef WIN
        spark::print("This is windows");
    #endif

    #ifdef LINUX
        spark::print("This is windows");
    #endif
}