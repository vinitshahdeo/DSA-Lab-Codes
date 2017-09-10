#include<stdio.h>
main()
{
	int A[3][3],i,j,T[3][3],s,r;
	printf("Enter a 3x3 matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter %drow %dcolumn element: ",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(A[i][i]==1)
				s=1;
			else
				s=0;
		}
	}
	if(A[1][0]==0 && A[0][1]==0 && A[0][2]==0 && A[1][2]==0 && A[2][0]==0 && A[2][1]==0)
		r=1;
	else 
		r=0;
	if(s==1&&r==1)
		printf(" You entered Identity matrix.");
	else
 		printf("it is not");

}
