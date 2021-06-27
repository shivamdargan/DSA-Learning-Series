#include<iostream>
using namespace std;
struct linked_list{
		int item;
		struct linked_list *next;
		struct linked_list *prev;
};
typedef struct linked_list node;
node *head= NULL;
int create(){
     if (head==NULL)
	 {
	 	head=new node;
	 	cin>>head->item;
	 	head->next=NULL;
	 	head->prev=NULL;
		 }	
		 else {
		 	cout<<"Head node already created"<<endl;
		 }
}
int count_element()
{
	node *p;
	p=head;
	int count=0;
	if(head==NULL)
	{
		cout<<count<<endl;
	}
	else
	{
		while(p->next!=NULL)
		{
			p=p->next;
			count++;
		}
			cout<<count+1<<endl;
	}
}
int insert_end(){
	if(head==NULL){
	 create();
	 return 0;
     }
    else
    {
    node*p,*q;
	p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	q=new node;
	cin>>q->item;
	q->next= NULL;
	q->prev=p;
	p->next=q;	
	}
	
}

int insert_beg(){
	
	if(head==NULL)
 	{
 		create();
 		return 0;
	 } 	
	 else 
	 {
		node*s,*p;
		p=head;
		s= new node;
		cin>>s->item;
		s->next=p;
		s->prev=NULL;
		p->prev=s;
		head=s;
	}
}
 int insert_mid(){
 	int val;
 	cout<<"Enter the value after which you want to enter the node "<<endl;
 	cin>>val; 
 	if(head==NULL)
 	{
 		create();
 		return 0; 
	 } 		
	 else
	 {
	 node*p,*q;
 	 p=head;
 	while(p->item !=val)
	 {
 		p=p->next;
	 }
 	q= new node;
 	cin>>q->item;
 	(p->next)->prev=q;
 	q->next=p->next;
 	p->next=q;
 	q->prev=p;
 }
}
 
 int delete_end(){
 	
	node*p;
	p=head;
	while((p->next)->next!= NULL)
	{
		p=p->next;
    }
	delete(p->next);
	p->next= NULL;
 } 
 
 int delete_beg(){
 	
 	node*p;
	p=head;
	head=p->next;
	delete(p);
	head->prev=NULL;
 }

 
 int delete_mid(){
 	int val;
 	node *temp;
 	cout<<"Enter the value you want to delete "<<endl;
 	cin>>val; 
 	node*p;
 	p=head;
 	while((p->next)->item!=val)
	 {
		p=p->next;
     } 
    temp=p->next;
 	p->next=(p->next)->next;
 	(p->next)->prev=p;
 	delete(temp);
 	
 }
 
 
int print(){
	node*p;
	p=head;
	while(p!=NULL){
		cout<<p->item <<endl;
		p=p->next;
	}
}
	
	int main()
	{
		int choice;
		char t;
		cout<<"Press 1 to create"<<endl<<"Press 2 to insert at end"<<endl<<"Press 3 to insert at begining"<<endl<<"Press 4 to insert in mid"<<endl<<"Press 5 to delete from end"<<endl<<"Press 6 to delete at beginning"<<endl<<"Press 7 to delete from mid"<<endl<<"Press 8 to print"<<endl<<"Press 9 For Counting Elements"<<endl;
		do{	
		    cout<<"Enter your choice"<<endl;
			cin>>choice;	
			switch(choice){
				
				case 1: create();
				break;
				case 2: insert_end();
				break;
				case 3: insert_beg();
				break;
				case 4: insert_mid();
				break;
				case 5: delete_end();
				break;
				case 6: delete_beg();
				break;
				case 7: delete_mid();
				break;
				case 8: print();
			    break;
			    case 9:count_element();
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
