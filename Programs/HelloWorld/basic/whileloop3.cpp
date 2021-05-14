#include <iostream>
using namespace std;

int main()
{
    // reversing number
    int number, reversedNumber = 0;
    cout << "Number: ";
    cin >> number;//123
    while (number != 0)
    {
        reversedNumber *= 10; //0,30,320
        /* int lastDigit = number % 10;//3,2,1
        reversedNumber += lastDigit;//3,32,321 */
        reversedNumber += number % 10;//3,32,321
        number /= 10;//12,1,0
    }

    cout << "reversed number is " << reversedNumber;
    system("pause>0");
    
}