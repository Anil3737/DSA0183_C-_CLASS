#include <iostream>
using namespace std;
template <typename T, size_t N>
void sumArrays(const T (&arr1)[N], const T (&arr2)[N], T (&result)[N])
 {
    for (size_t i = 0; i < N; ++i) {
        result[i] = arr1[i] + arr2[i];
    }
}
template <typename T, size_t Rows, size_t Cols>
void sumMatrices(const T (&matrix1)[Rows][Cols], const T (&matrix2)[Rows][Cols], T (&result)[Rows][Cols])
 {
    for (size_t i = 0; i < Rows; ++i) {
        for (size_t j = 0; j < Cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
int main() 
{
    const int array1[] = {1, 2, 3, 4, 5};
    const int array2[] = {5, 4, 3, 2, 1};
    int resultArray[5];
    sumArrays(array1, array2, resultArray);
    cout << "Sum of arrays: ";
    cout <<endl;
    const int matrix1[2][2] = {{1, 2}, {3, 4}};
    const int matrix2[2][2] = {{5, 6}, {7, 8}};
    int resultMatrix[2][2];
    sumMatrices(matrix1, matrix2, resultMatrix);
    cout << "Sum of matrices:" <<endl;
    for (size_t i = 0; i < 2; ++i) 
	{
        for (size_t j = 0; j < 2; ++j) 
		{
            cout << resultMatrix[i][j] << " ";
        }
         cout <<endl;
    }

    return 0;
}

