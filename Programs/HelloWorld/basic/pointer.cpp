#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    cout <<"&n is " << &n << endl; //get reference
    int *ptr = &n;      //pointer to the type must be the same
    cout << "ptr is "<<ptr << endl;
    cout << "*ptr is "<<*ptr << endl;
    *ptr = 10; //the value in this adress has been changed
    cout << *ptr << endl;
    cout << n << endl;

    int *ptr2; //pointer
    *ptr2 = 7;
    cout << " *ptr2  is "<<*ptr2 << endl;
    cout << "ptr2 is "<<ptr2 << endl;

    int v;
    int *ptr3 = &v;
    *ptr3 = 8;
    cout << "v= " << v << endl;
}
