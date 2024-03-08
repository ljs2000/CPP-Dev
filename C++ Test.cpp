#include <iostream>
using namespace std;

int main()
{
    int age;
    string name;
    string gender;
    cout << "Please enter your first name(followed by 'enter')\n";
    cin >> name;
    cout << "Hello " << name << "! How old are you?\n";
    cin >> age;
    cout << "Ok so you are " << age << " years old. Are you a man or a woman?\n";
    cin >> gender;
    cout << "Ok so you are a " << gender << " named " << name << " who is "<< age << " years old.\n";
    return 0;
}

