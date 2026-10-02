#include <iostream>
using namespace std;
int main()
{
	const int size = 9;
    int arr[size] = { 10,-5,4,9,0,100,6,-7,9 };
	int search;
	cin >> search;
	int index = -1;
	for (int i = 0;i < size;++i) {
		for (int j = size - 1;j > i;--j) {
			if (arr[j - 1] > arr[j]) {
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
	for (int i = 0;i < 9;++i) {
		cout << arr[i] << ' ';
	}

	int left = 0;
	int right = size - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (arr[mid] == search) {
			index = mid;
			break;

		}
		else if (arr[mid] < search) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	/*
	

	for (int i = 0;i < size;++i) {
		if (arr[i] == search) {
			index = i;
			break;
		}

	}
	*/
	if (index != -1) {
		cout << "Index of " << search << " is " << index << '\n';
	}
	else {
		cout<<search<<" is not in the array."<<'\n';

	}
	//for (int i = 1;i < size;++i) {
	//	int temp = arr[i];
	//	int j = i - 1;

	//	while (j >= 0 && arr[j] > temp) {
	//		arr[j + i] = arr[j];
	//		--j;
	//	}

	//	arr[j + 1] = temp;
	//}

	/*Bubble sort
	for (int i = 0;i < size;++i) {
		for (int j = size - 1;j > i;--j) {
			if (arr[j - 1] > arr[j]) {
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
	*/
	/*Selection sort
    int currentIndex = 0;
    while (currentIndex != 9){
		int minIndex = currentIndex;
		for (int i = currentIndex;i < 9; i++) {
			if (arr[i] < arr[minIndex]) {
				minIndex = i;
			}
		}
		if (minIndex != currentIndex) {
			int temp = arr[currentIndex];
			arr[currentIndex] = arr[minIndex];
			arr[minIndex] = temp;
		}
		++currentIndex;
    }
	*/
}