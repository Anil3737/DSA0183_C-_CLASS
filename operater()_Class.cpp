#include <iostream>
class FunctionCaller
 {
     public:

    void operator()(int a, int b) 
	{
        std::cout << "Sum: " << a + b << std::endl;
    }
};

int main() 
{
    FunctionCaller functionCaller;
    functionCaller(5, 7);

    return 0;
}

