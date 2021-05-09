#include<iostream>
#include<iomanip>//Set field width
using namespace std;

int main()
{
    int length;
    cout << "length= ";
    cin >> length;
    char symbol;
    cout << "Symbol: ";
    cin >> symbol;
    cout << "1234567890" <<endl;
    

    for (int i = 0; i < length; i++)
    {
        for (int w = length; w >i; w--)
        {
            cout << setw(2)<<symbol;//Set field width
        }
        cout << endl;
    }
    

    system("pause>0");
}