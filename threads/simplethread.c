#include<stdio.h>
#include<pthread.h>
void * mythread(void *ptr);
void * mythread2(void *ptr);

int main(){
	pthread_t ti,ti2;
	int loop=1000;
	int loop2=100;
	int ret=pthread_create(&ti,0,mythread,&loop);
	pthread_t self_ti=pthread_self();
	printf("------------%d-----------\n",self_ti);
	printf("This will not be printed\n");
	ret=pthread_create(&ti2,0,mythread2,&loop2);

	sleep(5);
}

void * mythread(void *ptr){
	int i;
	printf("My thread is invoked\n");
	for(i=0;i<*(int *)ptr;i++){
		printf("%d\n",i);

	}
}
void * mythread2(void *ptr){
	int i;
	printf("My thread2 is invoked\n");
	for(i=0;i<=*(int *)ptr;i++){
		printf("%d\n",i);

	}
}
