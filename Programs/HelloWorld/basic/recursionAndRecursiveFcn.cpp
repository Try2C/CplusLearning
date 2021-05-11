#include <iostream>
using namespace std;
//Sum number between m-n
int recursive_sum(int m, int n)
{
    if (m == n)
        return m;
    return m + recursive_sum(m + 1, n);
}
//factorial of a number a
int recursive_factorial(int a)
{
    if (a == 1)
        return a;
    return a * recursive_factorial(a - 1);
}
int main()
{
    int m = 1, n = 5;
    /*  int sum = 0;
    for (int i = m; i <= n; i++)
    {
        sum += i;
    } */

    cout << "Sum= " << recursive_sum(m, n) << endl;
    int a = 4;
    cout << "Factorial of " << a << " is " << recursive_factorial(a);
}
