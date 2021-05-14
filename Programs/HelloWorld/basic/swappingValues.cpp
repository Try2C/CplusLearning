#include <iostream>
using namespace std;
int main()
{

    //program for swapping values of two variables
    int a = 20;
    int b = 10;
    //without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    system("cls");
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}