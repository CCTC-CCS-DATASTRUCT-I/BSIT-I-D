#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter Choice of Coffee: ";
    cin >> num;

    switch(num) {
        case 1:
            cout << "Espresso" << endl;
            break;
        case 2:
            cout << "Americano" << endl;
            break;
        case 3:
            cout << "Cappuccino" << endl;
            break;
        case 4:
            cout << "Latte" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}