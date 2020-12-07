#include <pthread.h>
#include <stdio.h>
#include <time.h>

void *hello_thread(void *arg)
{
	int i = 0;
	for(i=0; i<3; i++){
		sleep(1);
		printf("%d \n",i);
	}
	printf("Thread : Hello, World!\n");
	return arg;
}

void main()
{
	pthread_t tid;
	int status;
	
	status = pthread_create(&tid, NULL, hello_thread, NULL);
	if(status != 0)
		perror("thread  create");
	status = pthread_join(tid,NULL);
	printf("End");
	pthread_exit(NULL);
}

