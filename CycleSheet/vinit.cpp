#include<iostream>
using namespace std;
int arr[20];int k=0,a=0,ser=0;
struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;
bool isempty()
{
    if(top==NULL)
        return true;
    else
        return false;
}
void push()
{
    struct node *temp;int id;
    temp=new node;
    cout<<"Input id of truck to be moved into garage : ";
    cin>>id;
    if(arr[a]==id)
    {
		temp->data=id;ser++;
		if(top==NULL)
		{
			temp->next=NULL;
			top=temp;
		}
		else
		{
			temp->next=top;
			top=temp;
		}a++;
	}
	else
	{
		cout<<"Truck "<<id<<" cannot be moved\n";
	}
}
void pop()
{
    int x;struct node *temp;
    if(isempty())
    {
        cout<<"Stack is empty\n";
    }
    else
    {
        x=top->data;
        temp=top;
        top=top->next;
        delete(temp);
        cout<<"Poped out yruck id "<<x;
    }
}
void display()
{
    struct node *temp;
    temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
}
void truck(int id)
{
	arr[k++]=id;
}
int main()
{
    int ch,id;
    while(ch!=6)
    {
        cout<<"\n\n1-Input Truck on road\n2-Push in garage\n3-Pop out of garage\n4-Display garage stack\n5-No. of services done so far\n6-Exit\nenter your choice : ";
        cin>>ch;
        switch(ch)
        {
			case 1:cout<<"Enter truck id on road: ";
					cin>>id;
					truck(id);
					break;
            case 2:push();break;
            case 3:pop();break;
            case 4:display();break;
            case 5:cout<<"no. of services done so far : "<<ser<<"\n";
					if(ser>10){cout<<"service charges applicable\n";}
					else{cout<<"service charges not applicable\n";}
			case 6:break;
        }
    }
    return 0;
}
