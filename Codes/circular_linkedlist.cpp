#include<iostream>

using namespace std;

struct link{
	int item;
	struct link *next;
};
typedef struct link node;
node *head = NULL;

void create();
void insert_end();
void print();
void insert_beg();
void insert_mid();
void delete_end();
void delete_beg();
void delete_mid();
void count();

int counter = 0;
 
int main(){
	int choice;
	do{
		cout<<endl;
		cout<<"1) Create Head Node"<<endl;
		cout<<"2) Insert at End"<<endl;
		cout<<"3) Insert at Begining"<<endl;
		cout<<"4) Insert in Mid"<<endl;
		cout<<"5) Print the Linked List"<<endl;
		cout<<"6) Delete Last Node"<<endl;
		cout<<"7) Delete First Node"<<endl;
		cout<<"8) Delete Mid Node"<<endl;
		cout<<"9) Count the length of Linked List"<<endl;
		cout<<"10) Exit"<<endl;
		cout<< "Enter your choice: ";
		cin >> choice;
		switch(choice){
			case 1: create();
				break;
			case 2: insert_end();
				break;
			case 3: insert_beg();
				break;
			case 4: insert_mid();
				break;
			case 5: print();
				break;
			case 6: delete_end();
				break;
			case 7: delete_beg();
				break;
			case 8: delete_mid();
				break;
			case 9: count();
				break;
			case 10: break;
		}
	}while(choice != 10);
	return 0;
}
void create(){
	if(head == NULL){
		head = new node;
		cin>> head->item;
		head->next = head;
		counter++;
	}else
		cout<<"head node already created"<<endl;
}
void print(){
	node *p;
	p = head;
	if(head == NULL){
		cout<<"List is Empty"<<endl;
	}
	else{
		while(p->next != head){
			cout<<p->item<<" ";
			p = p->next;
		}
		cout<<p->item<<endl;
	}
}
void insert_end(){
	if(head==NULL){
		create();
	}
	else{
		node *p, *q;
		p = head;
		while(p->next != head){
			p = p->next;
		}
		q = new node;
		cin >> q->item;
		q->next = head;
		p->next = q;
		counter++;
	}
}

void insert_beg(){
	if(head == NULL){
		create();
	}
	else{
		node *p, *q;
		p = head;
		while(p->next != head){
			 p = p->next;
		}
		q=new node;
		cin >> q->item;
		q->next = head;
		p->next = q;
		head = q;
		counter++;
	}
}

void insert_mid(){
	if(head==NULL){
		create();
	}
	else{
		node *p,*q;
		p = head;
		int num;
		cout<<"Enter the number after which you want to insert: ";
		cin>>num;
		while(p->item != num)
		{
			p = p->next;
		}
		q = new node;
		cin >> q->item;
		q->next = p->next;
		p->next = q;
		counter++;
	}
}

void delete_end(){
	node *p;
	p = head;
	if(head == NULL){
		cout<<"List is Empty"<<endl; 
  	}
    else if(p->next == head) { 
        delete p;
		counter--; 
		head = NULL; 
    }
    else{
    	
		while(p->next->next != head){
			p = p->next;
		}
		delete (p->next);
		p->next = head;
		counter--;
	}
}

void delete_beg()
{
	if(head == NULL){
		cout<<"List is already Empty"<<endl;
	}
	else if(head->next == head) { 
        delete head;
		counter--; 
		head = NULL; 
    }
    else{
		node *p, *q;
		p = head;
		q = head;
		while(q->next != head){
			q = q->next;
		}
		head = head->next;
		delete p;
		q->next = head;
		counter--;
	}
}

void delete_mid(){
	int num;
	cout<<"Enter the element which you want to delete: ";
	cin>>num;
	if(head == NULL){
		cout<<"List is already Empty"<<endl;
	}
	else if(head->item == num){
    	delete_beg();
	}
	else if(head->next == head){
		if(head->item == num){
        	delete head;
			counter--; 
			head = NULL;
		}
    }
    else{
		node *p, *temp;
		p = head;
		while(p->next->item != num){
			p = p->next;
		}
		temp = p->next;
		p->next = p->next->next;
		delete temp;
		counter--;
	}
}

void count(){
	cout<<"The Length of the linked list is "<<counter<<endl;
}
