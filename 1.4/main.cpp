#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a = 0, b = 0, c = 0, x1 = 0, x2 = 0, D = 0;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    D = pow(b, 2) - (4*a*c);

    cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
    cout << "D = " << D << endl;

    if(D > 0){
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        cout << "x1 = " << x1 << endl << "x2 = " << x2;
    }
    else if(D < 0){
            D = D*(-1);
            cout << "x1 = " << (-b) / (2*a) << " + " << sqrt(D) / (2*a) << "i" << endl;
            cout << "x2 = " << (-b) / (2*a) << " - " << sqrt(D) / (2*a) << "i";
         }
         else{
            x1 = (-b) / (2*a);
            cout << "x = " << x1;
         }

    return 0;
}
