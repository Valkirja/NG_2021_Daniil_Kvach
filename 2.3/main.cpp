#include <iostream>

using namespace std;

int main()
{
    int square_size;

    cout << "Enter size: ";
    cin >> square_size;

    for (int y = 1; y <= square_size; y++){
        for (int x = 1; x <= square_size; x++){
            if (y == 1 || y == square_size || x == 1 || x == square_size){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
