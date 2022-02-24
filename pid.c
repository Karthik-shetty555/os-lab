#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
pid_t processid;
processid=getpid();
pid_t parentid;
parentid=getppid();
printf("process id: %d\n",processid);
printf("parent id: %d\n",parentid);
}
