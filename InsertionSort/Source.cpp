#include <iostream>
using namespace std;

void Output(int* a, int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

void InsertionSort(int a[], int n) {
    int k, x;
    for (int i = 1; i < n; i++) {
        k = i - 1;
        x = a[i];

        for (; k >= 0 && a[k] > a[i]; k--);

        k++;

        for (int j = i; j > k; j--)
            a[j] = a[j - 1];
        a[k] = x;
    }
}

int main() {
    int A[] = { 3, 0, 8, 2, 1, 4, 7 };
    int n = 7;

    cout << "Mang truoc khi sap xep:\n";
    Output(A, n);

    InsertionSort(A, n);

    cout << "Mang sau khi sap xep:\n";
    Output(A, n);

    return 0;
}