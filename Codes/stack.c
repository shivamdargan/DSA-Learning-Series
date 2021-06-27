#include<stdio.h>
int top=0,l,a[1000];
char b;
int push()
{ 
	int n;
	if(top==l)
	{
		printf("stack overflow");
    }
	 else
	 {
	  printf("enter an element to be inserted \n");
	  scanf("%d",&n);
	  a[top]=n;
      top++;
    }
}
int pop()
{
	if(top<0)
	{
		printf("stack underflow");
	}
	else
	{
		top--;
	}
}
int print()
{
	int i;
	for(i=top-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
int main()
{

	int ch;
	printf("Enter the length of array \n");
	scanf("%d",&l);
	do
	{
		printf("enter your choice \n Enter 1 for push \n enter 2 for pop \n enter 3 for print \n");
		scanf("%d",&ch);
			switch(ch)
			{
				case 1:	push ();
						break;
				case 2: pop();
						break;
				case 3:	print();
						break;
				default:
						return 0;
			}
		printf("Do you want to Continue?(Y or N)");
		scanf("%c",&b);
	}while(b=='y'||b=='Y');
		return 0;
}
