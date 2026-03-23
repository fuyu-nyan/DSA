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

void QuickSort(int* a, int l, int r, int n) {
    if (l >= r) return;
    int x = a[(l + r) / 2];
    int i = l, j = r;

    cout << "Truoc: ";
    Output(a, n);
    cout << "Left=" << i << " - Right=" << j << " - Pivot=" << x << endl;

    while (i < j) {
        while (a[i] > x) i++;
        while (a[j] < x) j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    cout << "Sau: ";
    Output(a, n);
    cout << endl;
    QuickSort(a, l, j, n);
    QuickSort(a, i, r, n);
}

int main() {
    int n;
    cin >> n;
    int* A = new int[n];
    Input(A, n);

    cout << "Mang truoc khi sap xep:\n";
    Output(A, n);
    cout << "\nSap xep: \n";

    QuickSort(A, 0, n - 1, n);

    cout << "Mang sau khi sap xep:\n";
    Output(A, n);

    return 0;
}