#include <iostream>
using namespace std;
int main()
{

    //BMI calculator
    //weight(kg)/height*height(m)
    //underweight <18.5
    //normal weight18.5-24.9
    //over weight >25

    float weight, height, bmi;
    cout << "please enter weight(kg), height(m): ";
    cin >> weight >> height;
    bmi = weight / height / height;

    if (bmi < 18.5)
        cout << "Underweight" << endl;
    else if (bmi > 25)
        cout << "Overweight" << endl;
    else
        cout << "normal weight" << endl;

    cout << "your BMI is " << bmi << endl;

    //return 0;
}