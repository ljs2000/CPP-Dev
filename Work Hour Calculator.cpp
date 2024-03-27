
#include <iostream>
using namespace std;

int main()
{
int credits;
int sum;
int choice;
int days;
int sum2;
    cout << "Enter number of credits:\n";
    cin >> credits;
    cout << "Do you want to study 2 or 3 hours per credit? Enter 2 or 3: \n";
    cout << "The general recommendation is 2-3 hours per credit.\n";
    cin >> choice;
    if (choice == 2)
    {
        sum = credits * 2;
        cout << "You should be studying " << sum << " hours per week\n";
    }
    else if (choice == 3)
    {
    sum = credits * 3;
    cout << "You should be studying " << sum << " hours per week\n";
    }
    cout << "How many days do you want to study per week?\n";
    cin >> days;
    sum2 = sum / days;
    cout << "Then you should be studying " << sum2 << " hours a day.\n";
    return 0;
}
