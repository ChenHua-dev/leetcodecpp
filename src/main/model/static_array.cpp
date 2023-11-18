//
// Created by Chen Hua on 2023-11-17.
//
#include <iostream>
using namespace std;

class StaticArray {
private:
    void swapArraysHelper(int **arr_ptr1, int **arr_ptr2) {
        int* temp = *arr_ptr1;
        *arr_ptr1 = *arr_ptr2;
        *arr_ptr2 = temp;
    }

    void swapArraySizes(int *size_ptr1, int *size_ptr2) {
        *size_ptr1 = *size_ptr1 + *size_ptr2;
        *size_ptr2 = *size_ptr1 - *size_ptr2;
        *size_ptr1 = *size_ptr1 - *size_ptr2;
    }

public:

    void printAllElements(int* arr, int sizeOfArray) {
        int i = 0;
        cout << "[";
        if (sizeOfArray > 0) {
            while (i < sizeOfArray - 1) cout << arr[i++] << ", ";
            cout << arr[i];
        }
        cout << "]" << endl;
    }

    void swapArrays(int **arr_ptr1, int **arr_ptr2, int *size_ptr1, int *size_ptr2) {
        swapArraysHelper(arr_ptr1, arr_ptr2);
        swapArraySizes(size_ptr1, size_ptr2);
    }

};

int main() {
    cout << "Hello, static array" << endl;
    StaticArray staticArray;
    int arr1[] = {1, 2, 3};
    int arr2[] = {5, 6};

    int size1 = sizeof(arr1) / sizeof(int);
    staticArray.printAllElements(arr1, size1);

    int size2 = sizeof(arr2) / sizeof(int);
    staticArray.printAllElements(arr2, size2);

    int *p1 = arr1;
    int *p2 = arr2;
//    staticArray.swapArraysHelper(&p1, &p2);
//    staticArray.swapArraySizes(s1, s2);
    staticArray.swapArrays(&p1, &p2, &size1, &size2);

    staticArray.printAllElements(p1, size1);
    staticArray.printAllElements(p2, size2);
}

