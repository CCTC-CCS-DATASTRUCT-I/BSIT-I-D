#include <iostream>
using namespace std;

int main() {
    int scores[5][5];

    cout << "Enter the scores: ";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> scores[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            sum += scores[i][j];
        }
    }

    double average = static_cast<double>(sum) / (5 * 5);

   cout << "Average: " << average << endl;

    return 0;
}