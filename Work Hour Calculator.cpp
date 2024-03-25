
#include <iostream>
using namespace std;

int main()
{
int credits;
int sum;
int choice;
    cout << "Enter number of credits:\n";
    cin >> credits;
    cout << "The general recommendation is 2-3 hours per credit.\n";
    cout << "Do you want to study 2 or 3 hours per credit? Enter 2 or 3: \n";
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
    return 0;
}
