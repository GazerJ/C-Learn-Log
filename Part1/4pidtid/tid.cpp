#include <pthread.h>
#include <unistd.h>
#include<stdio.h>
#include<iostream>

using namespace std;
int a=1;


void * change(void *){
	cout<<"this is tid"<<endl;
	a=2;
	cout<< a<<endl;
	a=3;
}

int main(){
	pthread_t tid;
	pthread_create(&tid,NULL,change,NULL);
	sleep(1);
	cout<<a<<endl;
	return 1;

}
