#include <iostream>
using namespace std;

int main()
{

    float a, b, c;

    cout << "plase enter the langthes of a triangle:a,b,c ";
    cin >> a >> b >> c;
    if (a == b && a == c)
    {
        cout << "Triangle is equilateral triangle" << endl;
    }
    else
    {
        if (a != b && a != c && b != c)
        {
            cout << "Triangle is scalene triangle" << endl;
        }
        else{
            cout << "Triangle is isosceles triangle" << endl;
        }
    }

    cout << "Thanks. Bye.";

    return 0;
    //system("pause>0");
}
