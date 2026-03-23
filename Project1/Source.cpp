#include <iostream>
#include <algorithm>
using namespace std;

void Xuat(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i];
		if (i < n - 1) cout << " ";
	}
	cout << endl;
}

void SelectionSort(int* arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		cout << "i = " << i << endl;
		cout << "Mang truoc khi swap: ";
		Xuat(arr, n);

		int max = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[max]) {
				max = j;
			}
		}

		cout << "Phan tu lon nhat trong doan [" << i + 1 << ", " << n - 1 << "]: " << arr[max] << "\n";
		cout << "Swap " << arr[i] << " va " << arr[max] << "\n";

		swap(arr[max], arr[i]);

		cout << "Mang sau khi swap: ";
		Xuat(arr, n);
		cout << endl;
	}
}

int main() {
	int n;
	cin >> n;
	int arr[1000];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cout << "Mang truoc khi sap xep:\n";
	Xuat(arr, n);

	cout << "\nSap xep:\n";
	SelectionSort(arr, n);

	cout << "Mang sau khi sap xep:\n";
	Xuat(arr, n);

	return 0;
}