#include<iostream>
using namespace std;
int main()
{
	int flag=0;
	int num[100];
	int n;
	cout<<"Enter The Length Of The Array"<<endl;
	cin>>n;	
	int beg=0,end=n-1;
	cout<<"Enter the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	cout<<"Enter the No To Be Searched"<<endl;
	int sno,mid;
	cin>>sno;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(sno>num[mid])
		{
			beg=mid+1;
		}
		if(sno<num[mid])
		{
			end=mid-1;
		}
		if(sno==num[mid])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"The Element is at the position:"<<mid+1<<endl;
	}
	else
	{
		cout<<"The Element is not present in the Array"<<endl;
	}
	return 0;
}
