#include <iostream>
using namespace std;

void Input(int* a, int n) {
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void Output(int* a, int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

void InsertionSort(int a[], int n) {
    int k, x;
    for (int i = 1; i < n; i++) {
        x = a[i];
        cout << "i = " << i << endl;
        cout << "Mang truoc khi xu ly: ";
        Output(a, n);

        cout << "Phan tu dang xet A[" << i << "] = " << x << endl;
        k = i - 1;

        while (k >= 0 && a[k] < x) {
            k--;
        }

        k++;
        cout << "Chen " << x << " vao vi tri k = " << k << endl;

        for (int j = i; j > k; j--)
            a[j] = a[j - 1];
        a[k] = x;
        cout << "Mang sau khi xu ly: ";
        Output(a, n);
        cout << "\n";
    }
}

int main() {
    int n;
    cin >> n;
    int* A = new int[n];
    Input(A, n);

    cout << "Mang truoc khi sap xep:\n";
    Output(A, n);

    cout << "\nSap xep:\n";
    InsertionSort(A, n);

    cout << "Mang sau khi sap xep:\n";
    Output(A, n);

    delete[] A;
    return 0;
}