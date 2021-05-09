#include <iostream>
using namespace std;

int main()
{

    int number;
    
    cout << "please enter whole number: ";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "you have entered even number." << endl;
    }
    else
    {
        cout << "you have entered odd number." << endl;
    }

    cout << "Thanks. Bye.";

    //return 0;
    system("pause>0");
}
