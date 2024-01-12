#include <iostream>
using namespace std;
int absoluteValue(int num)
 {
    return (num < 0) ? -num : num;
}
float absoluteValue(float num) 
{
    return (num < 0.0f) ? -num : num;
}

int main() 
{
    int intValue = -10;
    int absIntValue = absoluteValue(intValue);
    std::cout << "Absolute value of " << intValue << " is: " << absIntValue << std::endl;
    float floatValue = -15.75;
    float absFloatValue = absoluteValue(floatValue);
    std::cout << "Absolute value of " << floatValue << " is: " << absFloatValue << std::endl;

    return 0;
}

