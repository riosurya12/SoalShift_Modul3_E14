#include <stdio.h>
#include <stdlib.h>
#include <pthread.h> //library thread





int main()
{
   char command[50];
   int pil;
   

	pthread_create(&(thread(0)), NULL, &lohan_kurang, NULL)
	pthread_create(&(thread(1)), NULL, &kepiting_kurang, NULL)


     while (1)
     {
        printf("1. Makan Lohan\n 2. Makan Kepiting\n");
        scanf("%d", &pil);
	switch (pil)
	{
	  case 1 :
		pthread_create(&(thread(2)), NULL, &makan_lohan);
                break;
	  case 2 : 
		pthread_create(&(thread(3)), NULL, &makan_kepiting);
		break;
	}
     }

     exit(EXIT_SUCCESS);
}

