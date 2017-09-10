#include<iostream>
#include<conio.h>
using namespace std;
struct registration
{
	int top,e;
	int id[100];	
}s;	
void initialize()
{
	s.top=-1;
	s.e=0;
}
void push(int item)
{
	s.top++;
	s.id[s.top]=item;
	if(s.top==9)
	{
		s.e=item;
	}
}
int pop()
{
	while(s.id[s.top]!=s.e)	
	s.top--;
	int j=0;
	int ab[10];
	for(j=0;j<10;j++)
	{	
		ab[j]=s.id[s.top];
		s.top--;
	}
cout<<"the id numbers of students are:";
for(j=9;j>=0;j--)
{
	cout<<endl<<ab[j];
	}	
}
int main()
{
	initialize();
	int n,a,i;
	cout<<"enter the number of students who submitted";
	cin>>n;
	cout<<"enter the id numbers of students who submitted the assignments";
	for(i=0;i<n;i++)
	{
		cin>>s.id[i];	
		push(s.id[i]);
	}
	cout<<"Press 1 to know the 10 students who submitted the assignments first";
	cin>>a;
	if(a==1)
	{
		pop();
	}
	getch();
}
