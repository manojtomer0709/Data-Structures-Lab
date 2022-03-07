// @name: Manoj Singh Tomer
// @email: manoj20ucse094@mahindrauniversity.edu.in
// @date: 17/12/2021
// @index : Lab10-problem1

#include<stdio.h>

void bubbleSort(int* arr, int size, int order){
	for (int i = 0; i < size-1; i++){
		for (int j = 0; j < size-1-i; j++){
			if (arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	if (order == 1){
		int left = 0;
		int right = size-1;
		while (left < right){
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;

			left++;
			right--;
		}
	}

	for (int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
}

int main(){
	int order;
	scanf("%d", &order);
	int N;
	scanf("%d", &N);
	int arr[N];
	for (int i = 0; i < N; i++){
		scanf("%d", &arr[i]);
	}

	bubbleSort(arr, N, order);
}