#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
void* threadfunc(void* arg);
int main()
{
pthread_t t1;

pthread_create(&t1,NULL,threadfunc,(void*)5);
pthread_join(t1,NULL);
}

void* threadfunc(void* arg)
{
int i,n;
n=(int) arg;
n=n+n;
for(i=0;i<n;i++)
printf("%d",n);
return NULL;
}
