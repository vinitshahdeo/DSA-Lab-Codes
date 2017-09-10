#include<iostream>
#include<string.h>
#include<cstdlib>
#define MAX 30
using namespace std;

struct front
{
    int a[MAX];
    int top;
}f;

struct back
{
    int b[MAX];
    int top;
}bc;

void pushfr(int item)
{
if(f.top==MAX-1)
    cout<<"\n Cannot move any further\n";
else
    {
        f.top++;
        f.a[f.top]=item;
    }
}

void pushbc(int item)
{
if(bc.top==MAX-1)
    cout<<"\n Cannot move any further\n";
else
    {
        bc.top++;
        bc.b[bc.top]=item;
    }
}

int popfr()
{
   if(f.top==-1)
   {
       cout<<"\nCannot go back\n";
   }
   int k=f.a[f.top];
   f.top--;
   return k;
}

int popbc()
{
   if(bc.top==-1)
   {
       cout<<"\nCannot go back\n";
   }
   int k=bc.b[bc.top];
   bc.top--;
   return k;
}

void displayfr()
{
    int i;
    for(i=0;i<f.top;i++)
        cout<<f.a[i]<<"\t";
}

void displaybc()
{
    int i;
    for(i=0;i<bc.top;i++)
        cout<<bc.b[i]<<"\t";
}

void initialise()
{
    f.top=-1;
    bc.top=-1;
}

bool (isempty())
{
    if(bc.top==-1)
        return 1;
    else
        return 0;
}

int main()
{
 initialise();
 int c=1,choice,z,p;
 pushfr(c++);
 cout<<"You are recently on first page."<<endl;
 do
 {
     cout<<"\n\nEnter your choice:\n1.To go to next page.\n2.To go to previous page.\n3.Exit."<<endl;
     cin>>choice;
     switch(choice)
     {
        case 1:
        cout<<"\nYou were on page\t"<<f.a[f.top];
        if(isempty())
        {
            pushfr(c++);
            cout<<endl<<"\nNow you are on page\t"<<f.a[f.top];
        }
        else
        {
            p=popbc();
            pushfr(p);
            cout<<endl<<"\nNow you are on page on\t"<<f.a[f.top];
        }
        break;
        case 2:
        z=popfr();
        pushbc(z);
        cout<<"\nYou were on page\t"<<z<<endl;
        cout<<endl<<"Now you are on page\t"<<f.a[f.top];
        break;
        case 3:
        exit(0);
   }
  }while(choice!=4);
}
