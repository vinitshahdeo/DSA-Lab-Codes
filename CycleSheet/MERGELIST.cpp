#include<iostream>
using namespace std;
#define null '\0' 
struct node
{
	int data;
	node *next;
};
struct node1
{
	int data;
	node1 *next;
};
struct node2
{
	int data;
	node2 *next;
};
node2 *top2=null;
node1 *top1=null;
node *top=null;
int flag;
void push(int item)
{
	node *newnode=new node;
	newnode->data=item;
	newnode->next=null;
	if(top==null)
	 top=newnode;
	else
	{
		newnode->next=top;
		top=newnode;
		node *temp;
        node *prev;
		temp=top;
        prev=top->next;
        if(temp->data<prev->data)
        {
        int tem;
    	tem=temp->data;
    	temp->data=prev->data;
    	prev->data=tem;
	    }
	    if(top->next->next!=null)
	    {
	    while(prev->data<prev->next->data)
		{
		  int t;
	      t=prev->data;
	      prev->data=prev->next->data;
	      prev->next->data=t;
		  prev=prev->next;
		  if(prev->next==null)
		   break;		}
		}
	}
	flag=1;
}
void push1(int item)
{
	node1 *newnode=new node1;
	newnode->data=item;
	newnode->next=null;
	if(top1==null)
	 top1=newnode;
	else
	{
		newnode->next=top1;
		top1=newnode;
		node1 *temp;
        node1 *prev;
		temp=top1;
        prev=top1->next;
        if(temp->data<prev->data)
        {
        int tem;
    	tem=temp->data;
    	temp->data=prev->data;
    	prev->data=tem;
	    }
	    if(top1->next->next!=null)
	    {
	    while(prev->data<prev->next->data)
		{
		  int t;
	      t=prev->data;
	      prev->data=prev->next->data;
	      prev->next->data=t;
		  prev=prev->next;
		  if(prev->next==null)
		   break;		}
		}
	}
	flag=2;
}
void display()
{
	cout<<"        display of list 1 elements        "<<"\n";
	node *temp=top;
	while(temp!=null)
	{
		cout<<"        shown element of list 1 is        "<<temp->data<<"\n";
		temp=temp->next;
	}
    cout<<"        display of list 2 elements        "<<"\n";
    node1 *temp1=top1;
	while(temp1!=null)
	{
		cout<<"        shown element of list no. 2 is        "<<temp1->data<<"\n";
		temp1=temp1->next;
	}
}

void push2(int item)
{
	node2 *newnode=new node2;
	newnode->data=item;
	newnode->next=null;
	if(top2==null)
	 top2=newnode;
	else
	{
		newnode->next=top2;
		top2=newnode;
	}
}
void display2()
{
	node2 *temp=top2;
	while(temp!=null)
	{
		cout<<"        shown element of list 3 is        "<<temp->data<<"\n";
		temp=temp->next;
	}
}
int pop()
{
    node *temp=top;
    node1 *temp1=top1;
    node *prev=top;
    node1 *prev1=top1;
	while(temp->next!=null)
	{
		prev=temp;
		temp=temp->next;
	}
	while(temp1->next!=null)
	{
		prev1=temp1;
		temp1=temp1->next;
	}
	if(temp->data<temp1->data)
	{
		int x;
		x=temp->data;
		if(prev->next==temp->next)
		   top=top->next;
		else
		   prev->next=temp->next;
		return(x);
	}
	else
	{
		int x;
		x=temp1->data;
		if(prev1->next==temp1->next)
		{
			top1=top1->next;
		}
		else
		   prev1->next=temp1->next;
		return(x);
	}
}
main()
{
	int choice,item;
	do
	{
		cout<<"                                           enter the choice                                       "<<"\n";
		cout<<"                                          1.push                                          "<<"\n"<<"                                          2.push1                                          "<<"\n"<<"                                          3.display                                          "<<"\n"<<"                                          4.push2                                          "<<"\n"<<"                                          5.display2                                          "<<"\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				    cin>>item;
				    push(item);
				    break;	
			case 2:
				    cin>>item;
				    push1(item);
				    break;
			case 3:
		    	    display();
		    	    break;
        	case 4:
        		    while(top!=null&&top1!=null)
        		    {	
        		    	push2(pop());
					}
					while(top!=null)
					{
						node *temp=top;
						node *prev=top;
						while(temp->next!=null)
						{
							prev=temp;
							temp=temp->next;
						}
						push2(temp->data);
						prev->next=null;
							if(top->data==prev->data)
						{
						 push2(prev->data);
						 break;
					    }
		
					}
					while(top1!=null)
					{
						node1 *prev1=top1;
						node1 *temp1=top1;
						while(temp1->next!=null)
						{
							prev1=temp1;
							temp1=temp1->next;
						}
						push2(temp1->data);
						prev1->next=null;
						if(top1->data==prev1->data)
						{
							push2(top1->data);
							
							break;
						}
					}
			    	break;
			    	
			case 5:
				    display2();
		   
	}
}while(choice<=5);
}
