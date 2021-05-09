#include <iostream>
using namespace std;

int main()
{
    //count digits of a number
    int number;
    cout << "Number: ";
    cin >> number;

    if (number == 0)
        cout << "you have enterd 0.\n";
    else
    {
        if(number<0)
            number *= -1;
        int counter = 0;
        while (number>0)
        {
            counter++;
            number /= 10; //number = number / 10;
        }
        cout << "Number contains " << counter << " digits.\n";
    }

    system("pause>0");
}