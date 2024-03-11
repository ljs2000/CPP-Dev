#include <iostream>

using namespace std;

int main()
{

int input;

int x;

int y;

int sum;

cout << "Simple Calculator" << endl;

cout << "Enter a number:" << endl;

cin >> x;

cout << "Enter another number:" << endl;

cin >> y;

cout << "Do you want to add, subtract, multiply or divide these two numbers?" << endl;

cout << "Enter 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division:" << endl;

cin >> input;

if(input == 1)
{
sum = x + y;
cout << sum << endl;
}
else if(input == 2)
{
sum = x - y;
}
else if(input == 3)
{
sum = x * y;
}
else if(input == 4)
{
    sum = x / y;
}
else if(input >= 4)
{
cout << "Please enter a number between 1-4.\n";
}
else if(input <=1)
{
cout << "Please enter a number between 1-4.\n";
}
return 0;
}
