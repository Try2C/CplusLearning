#include <iostream>
using namespace std;
int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main()
{
    cout << sum(4, 3) << endl;
    cout << sum(4.3, 3.4) << endl;
    cout << sum(4.3, 3.4, 2.2) << endl;
}

int sum(int a, int b)
{

    return a + b;
    /* int result = a + b;
    return result; */
}
double sum(double a, double b)
{
    return a + b;
}

float sum(float a, float b, float c)
{
    return a + b + c;
}