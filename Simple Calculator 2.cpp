//Simple calculator program.
#include <iostream>
using namespace std;
int main()
{
    double a;
    double b;
    double sum;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    sum = a + b;
    cout << "These two numbers added together equals: " << sum << endl;
    sum = a - b;
    cout << "These two numbers subtracted equals: " << sum << endl;
    sum = a * b;
    cout << "These two numbers mutliplied equals " << sum << endl;
    sum = a / b;
    cout << "These two numbers divided equals " << sum << endl;
    return 0;
}
