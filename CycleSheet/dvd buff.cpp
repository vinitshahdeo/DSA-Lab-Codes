
#include<iostream>
#define m 5
using namespace std;
int f=-1,r=-1;
int queue[m];
bool isempty()
{
    if(f==-1)
        return true;
    else
        return false;
}
bool isfull()
{
    if((r+1)%m==f)
        return true;
    else
        return false;
}
void enqueue(int x)
{
    if(isfull())
    {
        cout<<"Queue is full\n";
    }
    else{
        if(f==-1){f=0;r=0;}
        else{r=(r+1)%m;
        queue[r]=x;}
    }
}
void dequeue()
{
    if(isempty())
    {
        cout<<"Queue is empty\n";
    }
    else{
        if(f==r){f=-1;r=-1;}
        else{f=(f+1)%m;}
    }
}
/*void display()
{
    if(isempty())
    {
        cout<<"Queue is empyt\n";
    }
    else{
        int i;
    for(i=f;i!=r;(i++)%m)
    {
        cout<<queue[i]<<"\n";
    }
    cout<<queue[r]<<"\n";
    }
}*/
void highlevel()
{
    int i;
    cout<<"Newly inserted:\n";
    for(i=0;i!=f;(i++)%m)
    {
        cout<<queue[i]<<"\n";
    }
    cout<<"Not yet burnt:\n";
    for(i=f;i<m;i++)
    {
        cout<<queue[i]<<"\n";
    }
}
int main()
{
    int ch,x;
    while(ch!=5)
    {
        cout<<"\n1-Write DVD\n2-Burn DVD\n3-Display rear and front indices\n4-Individually display the data which has been inserted newly and the old data that has not yet been burnt\n5-Exit\n\nEnter your choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:cout<<"Enter data : ";
                    cin>>x;
                    enqueue(x);
                    break;
            case 2:dequeue();
                    break;
            case 3:cout<<"value of front= "<<f<<"\nvalue of rear= "<<r;
                    break;
            case 4:highlevel();
                    break;
            /*case 5:display();
                    break;*/
            case 5:break;
        }
    }
    return 0;
}
