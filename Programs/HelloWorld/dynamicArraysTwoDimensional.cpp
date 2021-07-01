#include <iostream>
using namespace std;

int main()
{

    int rows, cols;
    cout << "rows, cols: ";
    cin >> rows >> cols;

    int **table = new int *[rows]; //Pointer of pointer
    for (int i = 0; i < rows; i++)
    {
        table[i] = new int[cols];
    }
    table[1][2] = 88;
    for (int i = 0; i < rows; i++) //delete the arrays
    {
        delete[] table[i];
       
    }
    delete[] table; //delete the pointer of the arrays
    table = NULL; //Null to the table adress
}
