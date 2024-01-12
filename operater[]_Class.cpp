#include <iostream>

class MyArray {
private:
    int* array;
    int size;

public:
    MyArray(int s) : size(s)
	 {
        array = new int[size];
    }
    ~MyArray() {
        delete[] array;
    }
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            std::cerr << "Index out of bounds!" << std::endl;
            exit(1); 
        }
        return array[index];
    }
};

int main() {
    // Creating an instance of MyArray with size 5
    MyArray myArray(5);

    // Initializing array elements
    for (int i = 0; i < 5; ++i) {
        myArray[i] = i * 2;
    }

    // Accessing and printing array elements using the [] operator
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element at index " << i << ": " << myArray[i] << std::endl;
    }

    return 0;
}

