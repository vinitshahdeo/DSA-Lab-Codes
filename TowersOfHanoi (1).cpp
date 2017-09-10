#include <iostream>
#include<conio.h>
using namespace std;
void hanoi(int n,char s,char d,char i)
{
    if(n==1)
    {cout<<endl<<"move"<<n<<"from"<<s<<"to"<<d;return;}
    hanoi(n-1,s,i,d);
    cout<<endl<<"move"<<n<<"from"<<s<<"to"<<d;
    hanoi(n-1,i,d,s);
}

int main()
{
	int n;
	char source='A',dest='C',inter='B';
	cout<<"enter number of disks:";
	cin>>n;
	hanoi(n,source,dest,inter);
	return 0;
	getch();
	}
