#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
struct node
{
	int truck_id,time,nos;
	struct node*next;
};
node*head=NULL;
void push(int a, int b, int c)
{
	if(c<=3 && head==NULL)
	{
		struct node*newnode=new node;
		head=newnode;
		newnode->truck_id=a;
		newnode->time=b;
		newnode->nos=c;
		newnode->next=NULL;
		}
	else if(c<=3)
	{
		node*newnode = new node;
		newnode->truck_id=a;
		newnode->time=b;
		newnode->nos=c;
		if(b<(head->time))
		{
			newnode->next=NULL;
			node*temp;
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
				}
				temp->next=newnode;	
		}
		else if(b>(head->time))
		{
			newnode->next=head;
			head=newnode;
		}
	}
	else
		cout<<"The number of servicing is more than 3 times therefore the charge is Rs.5000";	
}

int pop()
{
	if(head==NULL)
	{
		cout<<"Garage Empty";
		return 0;
	}
	else
	{
	node*temp;
	temp=head;
	head=head->next;
	return(temp->truck_id);	
}
}

void display()
{
	node*temp;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->truck_id;
		temp=temp->next;
	}
}
int main()
{
	int choice,tid,time,number,x;
	do
	{
	cout<<endl<<"1. Move truck in garage"<<endl<<"2.Remove truck from garage"<<endl<<"3.Display"<<endl<<"4.Exit";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<endl<<"Enter truck id";
			cin>>tid;
			cout<<"Enter the time";
			cin>>time;
			cout<<"Enter the number of times of service";
			cin>>number;
			push(tid,time,number);
			break;
		case 2:
			x=pop();
			cout<<"The removed truck id is"<<x;
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);		
	}
}while(choice>=1 && choice<=4);
getch();
}
