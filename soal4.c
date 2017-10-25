#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdlib.h>

int fac(int n)

{

	int m;

	if (n >= 1)

        return n*fac(n-1);

    else

        return 1;

}



int main()

{

	int n;

	

	scanf("%d",&n);

	printf("%d",fac(n));

	

	return 0;

}
