#include <iostream>
#include <algorithm>

class ArraySorter {
public:
    // Function to sort integer array
    void sortArray(int arr[], int size) {
        std::cout << "Sorting integer array:" << std::endl;
        std::sort(arr, arr + size);
    }

    // Function to sort double array
    void sortArray(double arr[], int size) {
        std::cout << "Sorting double array:" << std::endl;
        std::sort(arr, arr + size);
    }
};

int main() {
    ArraySorter sorter;

    int intArray[] = {5, 2, 8, 1, 7};
    double doubleArray[] = {3.3, 1.1, 4.4, 2.2, 5.5};

    int intSize = sizeof(intArray) / sizeof(int);
    int doubleSize = sizeof(doubleArray) / sizeof(double);

    // Sort integer array
    sorter.sortArray(intArray, intSize);
    std::cout << "Sorted integer array: ";
    for (int i = 0; i < intSize; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Sort double array
    sorter.sortArray(doubleArray, doubleSize);
    std::cout << "Sorted double array: ";
    for (int i = 0; i < doubleSize; ++i) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

