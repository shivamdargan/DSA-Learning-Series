#include<iostream>
using namespace std;
int rear=-1;
int front=-1;
int insertQ(int q[],int n)
{
	if(rear==-1)
		{
			rear=0;
			cout<<"Enter the element"<<endl;
			cin>>q[rear];
			front=0;
		}
		else if(rear==n)
		{
			cout<<"Overflow";
		}
		else
		{  
		    cout<<"Enter Element:"<<endl;
			rear++;
			cin>>q[rear];
		}
}
int deleteQ(int q[],int n)
{
		if(front==-1||rear==-1)
		{
			cout<<"Queue is empty"<<endl;
		}
		else if(front==rear)
		{
			front =-1;
			rear=-1;
		}
		else
		{
			front++;
		}
}
int printQ(int q[],int front,int rear)
{
		cout<<"The Queue is"<<endl;
		for(int i=front;i<=rear;i++)
		{
			cout<<q[i]<<endl;
		}
}
int main()
{
	int i,n,ch;
	char ch1;
	int q[200];
	cout<<"Enter No of elements"<<endl;
	cin>>n;
	do
	{
		cout<<"Enter Choice"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:insertQ(q,n);
				printQ(q,front,rear);
				break;
		case 2:deleteQ(q,n);
			   printQ(q,front,rear);
		  	    break;
		 
		default: return 0;
		}
		cout<<"Do You want to continue(Y/N)"<<endl;
		cin>>ch1;
	}while(ch1=='Y'||ch1=='y');
	return 0;
}
