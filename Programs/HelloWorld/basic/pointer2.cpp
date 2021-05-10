#include <iostream>
using namespace std;
void printNumber(int *numberPtr)
{
    cout << *numberPtr << endl;
}
void printLetter(char *charPtr)
{
    cout << *charPtr << endl;
}
void print(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout << *((int *)ptr) << endl; //handle int*
        break;
    case 'c':
        cout << *((char *)ptr) << endl; // handle char*
        break;
    case 'd':
        cout << *((double *)ptr) << endl; //handle double*
        break;

    default:
        break;
    }
}
int main()
{
    int number = 5;
    char letter = 'a';
    /*  printNumber(&number);
    printLetter(&letter); */
    print(&number, 'i');
    print(&letter, 'c');
}
