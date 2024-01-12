#include <iostream>

class ArrayPrinter {
public:
    
    void printArray(const int arr[], int size) {
        std::cout << "Printing integer array:" << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
void printArray(const double arr[], int size) {
        std::cout << "Printing double array:" << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
	 void printArray(const char arr[], int size) {
        std::cout << "Printing character array:" << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main()
 {
    ArrayPrinter printer;

    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    printer.printArray(intArray, sizeof(intArray) / sizeof(int));
	printer.printArray(doubleArray, sizeof(doubleArray) / sizeof(double));
    printer.printArray(charArray, sizeof(charArray) / sizeof(char));    
}
