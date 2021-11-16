#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float mass = 0, fuel = 0;

    cout << "Enter the mass of ship: ";
    cin >> mass;

    fuel = round(mass/3) - 2;
    cout << "Fuel quantity: " << fuel;

    return 0;
}
