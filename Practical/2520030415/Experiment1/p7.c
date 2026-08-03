#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid = fork();

    if(pid == 0)
    {
        printf("Child executing ls...\n");
        execl("/bin/ls", "ls", "-l", NULL);
    }
    else
    {
        printf("Parent Waiting...\n");
        wait(NULL);
    }

    return 0;
}
