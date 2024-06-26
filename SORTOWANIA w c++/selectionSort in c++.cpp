#include<iostream>

using namespace std;

void selectionSort(int arr[], int n){
	for(int i = 0; i < n - 1; i++){
		int min_index = i;
		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[min_index]){
				min_index = j;
			}
		}
		
		int temp = arr[min_index];
		arr[min_index] = arr[i];
		arr[i] = temp;
	}
}

int main(){
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr) / sizeof(arr[0]);
	selectionSort(arr, n);
	cout<<"Sorted array in selectionSort: \n";
	for(int i = 0; i < n; i++){
		cout<< arr[i] << " ";
		cout<<endl;
	}
	return 0;
}
