#include<iostream>
using namespace std;

template <typename T>
void selectionsort(T arr[], int s) {
	int small;
	for (int i = 0; i < s - 1; i++) {
		small = i;
		for (int j = i + 1; j < s; j++) {
			if (arr[j] < arr[small]) {
				small = j;
			}
		}
		swap(arr[i], arr[small]);
	}
}

template <typename T>
void printarray(T arr[], int s) {
	for (int i = 0; i < s; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int arr[] = {2,4,1,5,8,6};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Original array: " << endl;
	printarray(arr, size);

	selectionsort(arr, size);
	cout << "Sorted array: " << endl;
	printarray(arr, size);




	system("pause");
	return 0;
}