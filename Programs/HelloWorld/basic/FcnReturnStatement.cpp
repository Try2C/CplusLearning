#include <iostream>
using namespace std;
// bool isPrimeFlag = true;
bool isPrimeNumber(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return false;
    }

    /* isPrimeFlag = false;
        break;
    return isPrimeFlag; */
    return true;
}

int main()
{
    int counter = 0;
    for (int i = 1; i < 100; i++)
    {
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
        {
            cout << i << " is a prime number\n";
            counter++;
        }
    }
    cout << "There are " << counter << " prime numbers till 1000.";
}

/* int main()
{
    int number;
    cout << "Number: ";
    cin >> number;
    bool isPrimeFlag = isPrimeNumber(number);
    if (isPrimeFlag)
        cout << number << " is a prime number." << endl;
    else
    {
        cout << number << " is not a prime number." << endl;
    }
} */

//only one return value of a function
