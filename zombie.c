#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Proceso hijo
        printf("Hijo: PID = %d, PPID = %d\n", getpid(), getppid());
        printf("Hijo terminando...\n");
    } else if (pid > 0) {
        // Proceso padre
        printf("Padre: PID = %d, Hijo PID = %d\n", getpid(), pid);
        printf("Padre en sleep(30)...\n");
        sleep(30);
        wait(NULL); // Esperar al hijo
    } else {
        perror("Error en fork()");
        return 1;
    }
    return 0;
}
