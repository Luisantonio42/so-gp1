#include <stdio.h>
#include <pthread.h>
#define NUM_THREAD 5

void * printHello(void *td){
	printf("Hello world desde el hilo! \n");
}

int main(){
	pthread_t threads[NUM_THREAD];
	long t;
	for(t=0; t<NUM_THREAD; t++){
		pthread_create(&threads[t],NULL,printHello,(void *)t);
	}
	pthread_exit(NULL);
}