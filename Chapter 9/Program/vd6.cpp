#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int SIZE = 5;
    int numbers[SIZE];
    int count;
    cout << "Enter " << SIZE << "numbers: ";
    for (count = 0; count < SIZE; count++)
        cin >> *(numbers + count);
    cout << "Here are the numbers you entered:\n ";
    for (count = 0; count < SIZE; count++)
        cout << *(numbers + count) << setw(3);
        cout << endl;
    return 0;
}