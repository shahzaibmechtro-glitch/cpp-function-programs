#include <iostream>
#include <cmath>
using namespace std;

double stdev(double x[], int n) {
    double sum = 0;

    for (int i = 0; i < n; i++)
        sum += x[i];

    double mean = sum / n;

    double variance = 0;
    for (int i = 0; i < n; i++)
        variance += pow(x[i] - mean, 2);

    variance /= n;

    return sqrt(variance);
}

int main() {
    double arr[] = {2, 4, 4, 4, 5, 5, 7, 9};
    int n = 8;

    cout << "Standard Deviation = " << stdev(arr, n) << endl;

    return 0;
}
