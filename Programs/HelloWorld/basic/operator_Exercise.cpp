#include <iostream>
using namespace std;
int main()
{

    //binary operators +,-,/,*,%

    cout << 5 + 2 << endl;
    cout << 5.00 / 2 << endl; //float ->2.5
    cout << 5 / 2 << endl;    //whole number ->2
    cout << 5 % 2 << endl;

    //++，--
    int counter = 7;
    int counter2 = 7;
    int counter3 = 7;
    counter++;
    cout << counter << endl;
    cout << counter2++ << endl;
    cout << ++counter3 << endl;

    system("cls"); //clear console

    //relation operator: <,<,<=,>0,==,!=
    int a = 5, b = 8;
    cout << (a <= b);

    system("cls");

    //logical operators &&(and),||(or),!(not)
    cout << !(a == 5 || b == 5) << endl;
    cout << (a == 5 && b == 5 + 3); //prio of the operators!

    system("cls");
    //assigment operator: =, +=,-=,*=,/=,%=
    int x = 5;
    //x += 7; //x=x+7
    
    x -= 7; //x=x-7
    cout << x << endl;
}