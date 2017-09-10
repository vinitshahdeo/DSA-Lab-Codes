#include<stdio.h>
int size;
int topb=-1,topf=100,stack[100];
void pushb(int k)
{
	stack[topb+1]=k;
	topb+=1;
}
void pushf(int k)
{
	stack[topf-1]=k;
	topf-=1;
}
void popb()
{
	topb-=1;
}
void popf()
{
	topf+=1;
}
int main()
{
	int f=1;
	int a,b,loop=1;
	printf("enter no of pages\n");
	scanf("%d",&b);
	
	while(loop)
	{
		printf("current page is %d\n",f); 
		printf("1:moving forward\n");
		printf("2:moving backward\n");
		printf("3:printing forward stack\n");
		printf("4:printing backward stack\n");
		printf("5:end\n");
		printf("enter a choice\n");
		scanf("%d",&a);
		if(a==1)
		{
			if(f==b)
				printf("no more forward pages\n");
			else
			{
				pushb(f);
				if(stack[topf]==f+1)
				{
					popf();
				}
				f+=1;
			}
		}
		else if(a==2)
		{
			if(f==1)
				printf("no backward pages\n");
			else
			{
				pushf(f);
				popb();
				f-=1;
			}
		}
		else if(a==3)
		{
			int i;
			if(topf==100)
			{
				printf("forward array is empty\n");
			}
			else
			{
				printf("forward array is\n\n");
				for(i=topf;i<100;i++)
				{
					printf("%d\n",stack[i]);
				}
				printf("\n\n");
			}
		}
		else if(a==4)
		{
			if (topb==-1)
			{
				printf("backward array is empty\n");
			}
			else
			{
				int i;
				printf("backward array is\n\n");
				for(i=topb;i>=0;i--)
				{
					printf("%d\n",stack[i]);
				}
				printf("\n\n");
			}
		}
		else if(a==5)
		{
			loop=0;
		}
	}
}
