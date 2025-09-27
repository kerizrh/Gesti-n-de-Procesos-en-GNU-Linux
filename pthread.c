#include <stdio.h>
#include <pthread.h>

void* hilo_func(void* arg) {
    int id = *(int*)arg;
    printf("Hilo %d ejecutándose\n", id);
    return NULL;
}

int main() {
    pthread_t h1, h2;
    int id1 = 1, id2 = 2;

    pthread_create(&h1, NULL, hilo_func, &id1);
    pthread_create(&h2, NULL, hilo_func, &id2);

    pthread_join(h1, NULL);
    pthread_join(h2, NULL);

    printf("Todos los hilos han terminado.\n");
    return 0;
}
