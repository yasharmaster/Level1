#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdio>
using namespace std;

//sorts using insertion sort

void sort(int *arr, int n)
{
	int i, j, temp, min;
	for (i=0; i<n; i++) {
		for (j = i+1; j<n ; j++) {
			if (arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	 
	}
}

void getdata(int *arr, int n)
{
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
}

void printdata(int *arr,int n) {
	for (int i=0;i<n;i++) {
		cout << arr[i] << " " ;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin>>n;
		int arr[n];
		getdata(arr, n);
		sort(arr, n);
		printdata(arr, n);
	}
	return 0;
}
