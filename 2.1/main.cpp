#include <iostream>

using namespace std;

int main()
{
    int number = 0, sum = 0;

    cout << "Enter the number: ";
    cin >> number;

    while(number != 0){
        sum = sum + number%10;
        number = number/10;
    }
    cout << "Sum of digits in the number: " << sum;

    return 0;
}
