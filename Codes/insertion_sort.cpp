#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n);
void print_arr(int arr[], int n);

int main(){
	int n;
	cout<<"Enter the Length of array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" elements:"<<endl;
	for(int i =0; i<n; i++){
		cin>>arr[i];
	}
	insertion_sort(arr,n);
	print_arr(arr,n);	
	return 0;
}

void insertion_sort(int arr[],int n)
{
	for(int i = 1; i<n; i++){
		int key = arr[i];
		int j = i-1;
		while(j>=0 && arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}

void print_arr(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
