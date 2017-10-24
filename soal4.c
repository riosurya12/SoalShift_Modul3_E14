#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdlib.h>


int main()
{
	int n,a,i;
	
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		a=i-1;
		if(a!=0)		
		n=n*a;
				
	}
	printf("%d\n",n);
	return 0;
}
