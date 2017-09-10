#include<iostream>
using namespace std;
struct data
{
int empid;
int salary;
int yearoep;
}e[10];
int main()
{
int i;
int k;
int p,d;
int BIG;
float SENIOR;
for(i=0;i<=9;i++)
{
cout<<"enter emplye id";
cin>>e[i].empid;
cout<<"enter salary";
cin>>e[i].salary;
cout<<"enter year of exp";
cin>> e[i].yearoep;
}
for(i=0;i<=9;i++)
{
cout<<e[i].empid<<e[i].salary<<e[i].yearoep;
}
BIG=e[0].salary;
SENIOR=e[0].yearoep;
for(k=0;k<=9;k++)
{
if(BIG<e[k].salary)
	{BIG=e[k].salary;
	k=d;
	}
if(SENIOR<e[k].yearoep)
	{BIG=e[k].yearoep;
	k=p;
	}
}
cout<<"THE SENIOR MOST EMPLOYEE IS"<<e[k].yearoep<<e[p].empid;
cout<<"HIGHEST SALARY IS"<<e[k].salary<<e[p].empid;
return 0;
}

	

