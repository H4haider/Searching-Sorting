#include <iostream>
using namespace std;

template <typename T>
int binarysearch(T arr[], T key, int size) {
	int low = 0, high = size - 1;
	while (low <= high) {
		int mid = low + high / 2;
		if (arr[mid] == key)
			return mid;
		else if (arr[mid] < key) {
			low = mid + 1;
		}
		else
			low = mid - 1;
	}
	return -1;
}

int main() {
	int arr[] = {1,5,6,9,2,3}, key=6;
	int size = sizeof(arr) / sizeof(arr[0]);
	int index=binarysearch(arr, key, size);

	if (index != -1)
		cout << "Found at index: " << index << endl;
	else
		cout << "Not Found" << endl;

	system("pause");
	return 0;
}