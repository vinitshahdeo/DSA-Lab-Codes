#include<iostream>
#include<string.h>
#include<ctype.h>
#include<conio.h>
using namespace std;
struct parenthesis
{
	int top;
	char con[100];
}s;
void initialize()
{
	s.top=-1;
}
void push(char x)
{
	s.top++;
	s.con[s.top]=x;
}
int main()
{
	void initialize();
	char str[100];
	int i=0,j,len,a,b,c;
	cin.getline(str,100,'#');
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]=='{' || str[i]=='[' || str[i]=='(')
		{
				push(str[i]);
				if(str[i]=='{')
				a+=1;
				else if(str[i]=='[')
				b+=1;
				else
				c+=1;
		}
	
	}
	for(j=0;j<len;j++)
	{
		if(str[j]=='}' || str[j]==']' || str[j]==')')
		{
			if(str[j]=='}')
			a-=1;
			else if(str[j]==']')
			b-=1;
			else
			c-=1;
		}
	}
	if(a!=0)
	cout<<endl<<"flower braces are not balanced";
	if(b!=0)
	cout<<endl<<"square braces are not balanced";
	if(c!=0)
	cout<<endl<<"curly braces are not balanced";
	getch();
}
