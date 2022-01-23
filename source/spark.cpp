import <iostream>;

#define LINUX

int main()
{
    #ifdef WIN
        std::cout << "This is windows" << std::endl;
    #endif

    #ifdef LINUX
        std::cout << "This is linux" << std::endl;
    #endif
}