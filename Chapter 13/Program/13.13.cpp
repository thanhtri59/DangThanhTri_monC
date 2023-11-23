#include <iostream>
#include <iomanip>
#include "InventoryItem.h"
using namespace std;

int main()
{
    InventoryItem item1;
    item1.setDescription("Hammer");
    item1.setCost(6.95);
    item1.setUnits(12);

    InventoryItem item2("Pliers");

    InventoryItem item3("Wrench", 8.75, 20);

    cout << "The following items are in inventory:\n";
    cout << setprecision(2) << fixed << showpoint;

    cout << "Description: " << item1.getDescription() << endl;
    cout << "Cost: $" << item1.getCost() << endl;
    cout << "Units on Hand: " << item1.getUnits() << endl << endl;

    cout << "Description: " << item2.getDescription() << endl;
    cout << "Cost: $" << item2.getCost() << endl;
    cout << "Units on Hand: " << item2.getUnits() << endl << endl;

    cout << "Description: " << item3.getDescription() << endl;
    cout << "Cost: $" << item3.getCost() << endl;
    cout << "Units on Hand: " << item3.getUnits() << endl;

    return 0;
}