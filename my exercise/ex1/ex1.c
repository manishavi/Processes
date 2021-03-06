// Write a program that calls `fork()`. Before calling `fork()`, have the main process access a variable
// (e.g., x) and set its value to something (e.g., 100). What value is the variable in the child process?
// What happens to the variable when both the child and parent change the value of x?

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    // Your code here
    int x = 5000;
    printf("hello lambda (pid: %d)\n", (int) getpid());
    //child process steps
    int rc = fork();
    if (rc < 0) {
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) { // child satisfies condition
        printf("hello lambda, child satisfies condition (pid: %d)\n", (int) getpid());
    } else {
        printf("hello lambda (pid: %d) of child %d \n", (int) getpid(), rc);
    }
    return 0;
}
