#include <iostream>
using namespace std;
int main()
{
    int hostUserNum, guestUserNum;
    cout << "Host: ";
    cin >> hostUserNum;
    system("cls");
    cout << "Guest:";
    cin >> guestUserNum;
    (guestUserNum == hostUserNum) ? cout << "Correct!" : cout << "failed:(";

    /* if (guestUserNum == hostUserNum)
        cout << "Correct!";
    else
        cout << "failed:("; */

    system("pause>0");
}