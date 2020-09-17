#include <iostream>

int main(int argc, char** argv)
{
   std::cout << "Hello" << std::endl;
   sizeof(char*);
#ifdef TESTCODE
    std::cout << "Test" << std::endl;
    for(int i = 1; i < argc; ++i)
    std::cout << argv[i] << std::endl;
#endif

#ifdef _HELLO
	std::cout << "_HELLO defined.";
#endif

    return 0;
}