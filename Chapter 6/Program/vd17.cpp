#include <iostream>
using namespace std;
void anotherFunction();
int num = 2;
int main() {
    cout << "In main, num is " << num << endl;
    anotherFunction();
    cout << "Back in main, num is " << num << endl;
    return 0;
}
void anotherFunction() {
    cout << "In another function, num is " << num << endl;
    num = 50;
    cout << "But, it is now changed to " << num << endl;
}