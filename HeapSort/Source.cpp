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

void Output2(int* a, int size, int k) {
    for (int i = 0; i < size; i++) {
        if (i == k && k != size) {
            cout << "| ";
        }
        cout << a[i] << " ";
    }
    cout << "\n";
}

void heapify(int* A, int i, int n) {
    int j = 2 * i + 1;
    while (j < n) {
        if (j + 1 < n && A[j] > A[j + 1])
            j++;
        if (A[j] > A[i])
            return;
        swap(A[i], A[j]);
        i = j;
        j = 2 * i + 1;
    }
}

void buildHeap(int* A, int n) {
    int i = (n - 1) / 2;
    while (i >= 0) {
        heapify(A, i, n);
        i--;
    }
}


void HeapSort(int* A, int n) {

    int N = n;
    buildHeap(A, n);
    cout << "Mang sau khi BuildHeap: ";
    Output(A, n);

    while (n > 1) {
        cout << "Swap " << A[0] << " va " << A[n - 1] << "\n\n";
        swap(A[0], A[n - 1]);
        n--;
        heapify(A, 0, n);
        cout << "Mang sau khi heapify voi n = " << n << ": ";
        Output2(A, N, n);
    }
}

int main() {

    int n;
    cin >> n;
    int* A = new int[n];
    Input(A, n);

    cout << "Mang truoc khi sap xep:\n";
    Output(A, n);

    cout << "\nSap xep: \n";

    HeapSort(A, n);

    cout << "Mang sau khi sap xep:\n";
    Output(A, n);

    return 0;
}