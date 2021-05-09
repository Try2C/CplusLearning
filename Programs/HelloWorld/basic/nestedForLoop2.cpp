#include <iostream>
using namespace std;

int main()
{ //multiplication table
    for (int i = 1; i < 100; i++)
    {
        for (int n = 1; n < 100; n++)
        {
            cout << i << "x" << n << "=" << i * n << endl;
        }
        cout << endl;
    }

    system("pause>0");
}