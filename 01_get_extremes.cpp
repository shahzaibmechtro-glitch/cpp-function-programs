#include <iostream>
using namespace std;

void getExtremes(float &min, float &max, float a[], int n) {
    min = max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }
}

int main() {
    float arr[] = {5.2, 1.1, 9.8, 3.4, 7.0};
    int n = 5;

    float min, max;
    getExtremes(min, max, arr, n);

    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;

    return 0;
}
