#include <iostream>
#include <algorithm>
using namespace std;

void SelectionSort(int* arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min])
				min = j;
		}
		swap(arr[min], arr[i]);
	}
}

int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	SelectionSort(arr, n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}