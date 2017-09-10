#include<iostream>
using namespace std;
#define MAX 40

int rear=-1;
int front=-1;
char q[MAX];
char b[30];
char at[]={"VIT UNIVERSITY"};
int i=0,j=0;

int isempty()
{
if(front==-1)
{
return 1;
}
else
{
	return 0;
}
}

int isfull()
{
if((rear+1)%10==front)
{
return 1;
}
else
{
	return 0;
}
}

void write()
{
if (isfull())
{
	cout<<"Full";
}
else
{
	if(front==-1)
	{
		front=0;
	}
rear=(rear+1)%10;
q[rear]=at[i++];
}
}
void dispd()
{
	int j;
	cout<<"Output\n";
	for(j=0;j<20;j++)
	{
		cout<<b[j];
	}
	cout<<"\n";
};
void read()
{
	if(rear==front)
	{
		cout<<"Disk Empty";
	}

else
{ char d[54];
	d[j]=q[front];
	dispd();
	front=(front+1)%10;
	j++;
}
}

void display()
{
	int i;
cout<<"In Buffer\n";
for(i=0;i<MAX;i++)
{
	cout<<q[i];
}
cout<<"\n";
}

int main()
{
	while(isfull()!=1)
	{
		write();
	}
int n;
display();
while(n!=2)
{
cout<<"1 to read\n";
cout<<"2 to exit\n";
cin>>n;

switch(n)
{
case 1:read();
write();
display();
}
}
}
