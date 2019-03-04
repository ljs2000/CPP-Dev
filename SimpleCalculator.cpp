#include <iostream>

using namespace std;

int main() 
{

int input;

int x;

int y;

int sum;

cout << "Simple Calculator" << endl;

cout << "Enter a number" << endl;

cin >> x;

cout << "Enter another number" << endl;

cin >> y;

cout << "Do you want to add, subtract, multiply or divide these numbers?" << endl;

cout << "Enter 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division:" << endl;

cin >> input;

if(input == 1)
{
sum = x + y;
cout << sum << endl;
}



}
