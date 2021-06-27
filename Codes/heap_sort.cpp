#include <iostream> 
using namespace std;
 
// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void build_max_heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) 
	{
        swap(arr[i], arr[largest]);
	    // Recursively heapify the affected sub-tree
	    build_max_heapify(arr, n, largest);
    }
    
}
 
// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        build_max_heapify(arr, n, i);
 
    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        build_max_heapify(arr, i, 0);
    }
    cout<<"Array Sorted"<<endl;
}
 
/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
 
// Driver code
int main()
{
   int arr[10];
   int n;
   int choice;
   cout<<"Enter Length Of Array"<<endl;
   cin>>n;
   cout<<endl<<"Enter "<<n<<" Elements"<<endl;
   for(int i=0;i<n;i++)
   {
   	cin>>arr[i];
   }
   	do{
		cout<<endl;
		cout<<"1) Heapify "<<endl;
		cout<<"2) Print Array"<<endl;
		cout<<"3) Heap Sort"<<endl;
		cout<<"4) Exit"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice){
			case 1: build_max_heapify(arr,n,0);
					cout<<"Heapify Done"<<endl;
				break;	
			case 2: printArray(arr,n);
				break;
			case 3: heapSort(arr,n);
				break;
			case 4: break;
		}
	}while(choice != 4);
 	return 0;
}
