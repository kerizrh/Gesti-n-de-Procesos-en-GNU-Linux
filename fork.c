#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        printf("Hijo: PID = %d, PPID = %d\n", getpid(), getppid());
    } else if (pid > 0) {
        printf("Padre: PID = %d, Hijo PID = %d\n", getpid(), pid);
        wait(NULL);
        printf("Hijo terminó.\n");
    } else {
        perror("Error en fork()");
        return 1;
    }
    return 0;
}
