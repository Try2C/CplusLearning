#include <iostream>
using namespace std;
//creat/change arrays at runtime

int main()
{
    int size;
    cout << "Size: ";
    cin >> size;
    //int myArray[size];
    int *myArray = new int[size]; //new element

    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] ";
        cin << myArray[i];
    }
    for (int i = 0; i < size; i++)
    {
        //cout << myArray[i] << " ";
        cout << *(myArray + i) << " ";
    }

    delete[] myArray;
    myArray = NULL;
}