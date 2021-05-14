#include <iostream>
using namespace std;

int main()
{
    int grade, summeGrade;

    for (int i = 1; i <= 3; i++)
    {
        do
        {
            cout << "Enter grade" << i << "= " << endl;
            cin >> grade;
            summeGrade += grade;
        } while (grade < 1 || grade > 5);
    }
    float averageGrade = (float)summeGrade / 3;//float averageGrade = float(summeGrade) / 3;
    cout << "sum of the gradas is= " << summeGrade<<endl;
    cout << "average of the gradas is= " << averageGrade << endl;
    

    system("pause>0");
}
