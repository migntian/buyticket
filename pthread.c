#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>

void *rout(void *arg)
{
    int i;
    for(;;)
    {
        printf("i am thread 1\n");
        sleep(1);
    }
}
int main()
{
    pthread_t tid;
    int ret;
    if((ret = pthread_create(&tid,NULL,rout,NULL)) !=0)
    {
        fprintf(stderr,"prhread_create :%s\n",strerror(ret));
        exit(1);
    }
    int i;
    for(;;)
    {
        printf("i am main thread\n");
        sleep(1);
    }
}
