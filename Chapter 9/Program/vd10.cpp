#include <iostream>
using namespace std;

void getNumber(int *);
void doubleValue(int *);

int main()
{
    int number;
    getNumber(&number);
    doubleValue(&number);
    cout << "That value double is " << number << endl;
    return 0;
}
void getNumber(int *input)
{
    cout << "Enter an integer number:";
    cin >> *input;
}
void doubleValue(int *val)
{
    *val *= 2;
}