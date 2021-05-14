#include <iostream>
using namespace std;

void function(); //declaration at first, before the main function, make it readable for the programm.
                //reuse the function later

int main()
{
    cout << "Hello from main()\n";
    function();
}
void function() //definition
{
    cout << "Hello from function()\n";
}