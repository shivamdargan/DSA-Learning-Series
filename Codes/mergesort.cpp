#include<iostream>
using namespace std;
int t[50];
int a[10];
void merge(int a[],int p,int q,int r)
{
	// t temporary array
	int ac=p;
	int bc=q;
	int tc=0;
	int l=q-1;
	while(ac<=1 && bc<=r)
	{
		if(a[ac]<=a[bc])
		{
			t[tc]=a[ac];
			tc++;
			ac++;
		}
		else
		{
			tc++;
			bc++;
		}
	}
	while(ac<=l)
	{
		t[tc]=a[ac];
		tc=tc+1;
		ac++;
	}
	while(bc<=r)
	{
		t[tc]=a[bc];
		tc++;
		bc++;
	}
	for(int i=p;i<r;i++)
	{
		a[i]=t[i-p];
	}
	for(int i=0;i<6;i++)
	{
		cout<<a[i];
	}
}
void mergesort(int a[],int left_index,int right_index)
{
	if(left_index<right_index)
	{
		int middle_index=(left_index+right_index)/2;
		mergesort(a,left_index,middle_index);
		mergesort(a,middle_index+1,right_index);
		merge(a,left_index,middle_index+1,right_index);
	}
}
int main()
{
	int arr[6];
	cout<<"Enter Array"<<endl;
	for(int i=0;i<6;i++)
	{
		cin>>arr[i];		
	}		
	mergesort(arr,0,3);
}
