#include<iostream>
using namespace std;
struct linked_list{
	int item;
	struct linked_list *next;
};
typedef struct linked_list node;
node *head= NULL;
int create(){
     if (head==NULL)
	 {
	 	head=new node;
	 	cin>>head->item;
	 	head->next=NULL;
		 }	
		 else {
		 	cout<<"Head node already created"<<endl;
		 }
}
int push_ll(){
	node *p,*q;
	p=head;
	while((p->next)!=NULL)
	{
		p=p->next;
	}
	q=new node;
	cout<<"Enter Item"<<endl;
	cin>>q->item;
	p->next=q;
	q->next=NULL;
}
int pop_ll()
{
	node *p;
	p=head;
	/*
	if(p->next=NULL)
	{
		head=NULL;
	}
	
	if(p==NULL)
	{
		cout<<"Stack UnderFlow"<<endl;
		return 0;
	}
	*/
	while((p->next)->next!=NULL)
	{
		p=p->next;
	}
	delete(p->next);
	p->next=NULL;
}
int display()
{
	/*
	node *p,*q;
	p=head;
	q=head;
	int ctr=0;
	while(p!=NULL)
	{
		if(ctr!=0)
		{
			p=p->next;
			q=p;
		}
		while(q->next!=NULL)
		{
			q=q->next;
			ctr+=1;
		}
		cout<<q->item<<endl;
	}
	*/
	node *p,*q;
	p=head;
	while(p!=NULL)
	{
		cout<<p->item<<endl;
		p=p->next;
	}
}
int main()
{
	int choice;
		char t;
		cout<<"Press 1 to create"<<endl<<"Press 2 to Push"<<endl<<"Press 3 To Pop"<<"Press 4 To Print"<<endl;
		do{	
		    cout<<"Enter your choice"<<endl;
			cin>>choice;	
			switch(choice){
				case 1: create();
				break;
				case 2: push_ll();
				break;
				case 3: pop_ll();
				break;
				case 4: display();
				break;
				default :
					cout<<"Sorry,wrong input";
					break;
			}
			cout<<"Do you want to continue?"<<endl;
			cin>>t;
			if(t=='n' || t=='N')
			cout<<"Goodbye,code terminating !"<<endl;
		}while(t=='y' || t=='Y');

}
