#include <iostream>
#include <iomanip>
#include "Sale.h"
using namespace std;

int main()
{
    const double TAX_RATE = 0.06;
    double cost;

    cout << "Enter the cost of the item: ";
    cin >> cost;

    Sale itemSale(cost, TAX_RATE);

    cout << fixed << showpoint << setprecision(2);
    cout << "The amount of sales tax is $" << itemSale.getTax() << endl;
    cout << "The total of the sale is $" << itemSale.getTotal() << endl;

    return 0;
}