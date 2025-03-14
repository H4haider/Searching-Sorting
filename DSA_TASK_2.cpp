#include <iostream>
using namespace std;

template <typename T>
int linearsearch(T arr[], T key, int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			return i;
		}
	}
	return -1;
}

int main() {
	int arr[] = {1,5,6,9,2,3}, key=6;
	int size = sizeof(arr) / sizeof(arr[0]);
	int index=linearsearch(arr, key, size);

	if (index != -1)
		cout << "Found at index: " << index << endl;
	else
		cout << "Not Found" << endl;

	system("pause");
	return 0;
}