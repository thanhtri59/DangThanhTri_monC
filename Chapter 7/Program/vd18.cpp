#include <iostream>
using namespace std;

void showValues(int [], int);
int main() 
{
    const int SIZE1 = 8;
    const int SIZE2 = 5;
    int set1[SIZE1] = {5,10,15,20,25,30,35,40};
    int set2[SIZE2] = {2,4,6,8,10};

    showValues(set1, SIZE1);
    showValues(set2, SIZE2);
    return 0;

}
void showValues(int nums[], int size) 
{
    for (int index = 0; index < size; index++)
        cout << nums[index] << " ";
        cout << endl;
}