#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char operation;
    cin >> operation;

    double M[12][12];

    // Read the array elements
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }

    double sum = 0.0;
    int count = 0;

    // Calculate the sum or average
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < i; j++) {
            sum += M[i][j];
            count++;
        }
    }

    double result;
    if (operation == 'S') {
        result = sum;
    } else if (operation == 'M') {
        result = sum / count;
    }

    cout << fixed << setprecision(1) << result << endl;

    return 0;
}