#include <iostream>
using namespace std;

int main() //why void main() shows error:"error: '::main' must return 'int'""
{
    // The factorial of a number
    // 6!=1*2*3*4*5*6=720
    int number;
    cout << "Number: ";
    cin >> number;
    int factorial = 1;
    // for (int i = 1; i <= number; i++)
    // {
    //     factorial *= i;
    // }
    for (int i = number; i > 0; i--)
    {
        factorial *= i;
    }

    cout << number << "!= " << factorial;

    system("pause>0");
    return 0;
}
