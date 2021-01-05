#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

int arr[] = {};
int sum[10] = {0};
int part = 0;


void* sumArray(void* arg){
    int thread_part = part++;
    for(int i=0;i<=9;i++){
        sum[thread_part] += arr[i];
    }
    printf("sum = %d\n",sum[part]);
}


int main(){
    pthread_t thread[10];
    for(int i=0;i<100;i++)
        arr[i] = rand()%100;

    for(int i=0;i<10;i++)
        pthread_create(&thread[i],NULL,sumArray,(void*)NULL);
    for(int i=0;i<10;i++)
        pthread_join(thread[i],NULL);

    int total_sum=0;
    for(int i=0;i<10;i++)
        total_sum += sum[i];
    
    printf("Total sum = %d\n",total_sum);
    return 0;
    
}   
