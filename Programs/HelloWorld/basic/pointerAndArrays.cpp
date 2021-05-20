#include <iostream>
using namespace std;

int main()
{

/*     int luckyNumbers[5] = {2, 3, 5, 7, 9};
    cout << luckyNumbers << endl;//the adress of a array
    cout << &luckyNumbers[0] << endl; //the adress of a array is the adress of the first array element
    cout << luckyNumbers[2] << endl;
    cout << *(luckyNumbers+2) << endl;//the same adresse as luckyNumbers[2] */

    int luckyNumbers[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Number " << i + 1 << " :" << endl;
        cin >> luckyNumbers[i];
    }
  for (int i = 0; i < 5; i++)
    {
         cout << luckyNumbers[i] << endl;
        cout <<*(luckyNumbers+i)<<"  ";
    }

}
