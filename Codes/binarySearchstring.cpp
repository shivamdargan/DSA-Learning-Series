#include<bits/stdc++.h>
using namespace std;
int binarySearch(string arr[], string x,int n)
{
    int beg = 0 ;
    int end = n - 1;
    while (beg <= end) 
    {
        int mid = beg+(end-beg) / 2;	          
	    // Check if x is present at mid
	    if (x == arr[mid])
	        return mid;
	    // If x greater, ignore left half
	    if (x > (arr[mid]))
	        beg = mid + 1;
	    // If x is smaller, ignore right half
	     else
	        end = mid - 1;
    }
    return -1;
}

// Driver code
int main()
{
    string arr[] = { "thapar", "patiala", "semester", "dsa","lab","cpp","programming","language"};
    string x = "language";
    int n = 8;
    int result = binarySearch(arr, x,n);

    if (result == -1)
        cout << ("Element not present");
    else
        cout << ("Element found at index ") << result+1;
}
