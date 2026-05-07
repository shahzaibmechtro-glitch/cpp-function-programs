#include <iostream>
#include <algorithm>
using namespace std;

double mean(int a[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum / n;
}

double median(int a[], int n) {
    sort(a, a + n);

    if (n % 2 == 0)
        return (a[n/2 - 1] + a[n/2]) / 2.0;
    else
        return a[n/2];
}

int mode(int a[], int n) {
    int mode = a[0], maxCount = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }

        if (count > maxCount) {
            maxCount = count;
            mode = a[i];
        }
    }

    return mode;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int n = 8;

    cout << "Mean = " << mean(arr, n) << endl;
    cout << "Median = " << median(arr, n) << endl;
    cout << "Mode = " << mode(arr, n) << endl;

    return 0;
}
