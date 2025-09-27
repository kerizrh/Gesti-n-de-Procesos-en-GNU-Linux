# Guía Práctica 2: Gestión de Procesos en GNU/Linux

##  Descripción
Esta guía práctica contiene ejercicios para comprender la gestión de procesos en sistemas GNU/Linux, incluyendo creación de procesos, estados (zombie/huérfano), comunicación entre procesos y uso de hilos.

##  Objetivos
- Reforzar conceptos teóricos de gestión de procesos
- Familiarizarse con comandos y herramientas de Linux
- Comprender el comportamiento de procesos e hilos

##  Estructura de Archivos

### Códigos Fuente:
- `zombie.c` - Procesos huérfanos y zombies
- `ejercicio2.sh` - Creación masiva de procesos
- `fork.c` - Creación de procesos con fork()
- `pthread.c` - Creación de hilos con pthreads

### Archivos de Salida:
- `processos.txt` - Resultado del pipeline (Ejercicio 3)

##  Ejercicios

### Ejercicio 1: Procesos Huérfanos y Zombies
**Objetivo:** Observar los estados de procesos zombie y huérfanos
- **Comando clave:** `ps aux | grep zombie`
- **Conceptos:** Estados de procesos, gestión de hijos con wait()

### Ejercicio 2: Creación Masiva de Procesos
**Objetivo:** Crear múltiples procesos y observar la jerarquía
- **Comando clave:** `ps -o pid,ppid,stat,cmd --forest`
- **Conceptos:** Planificación del kernel, procesos en background

### Ejercicio 3: Comunicación entre Procesos
**Objetivo:** Usar pipes para conectar procesos
- **Comando clave:** `ps aux | grep bash | sort -R | tee processos.txt`
- **Conceptos:** Pipelines, redirección, eficiencia de comunicación

### Ejercicio 4: Creación con fork()
**Objetivo:** Crear procesos hijos usando fork()
- **Función clave:** `fork()`, `wait()`
- **Conceptos:** Creación de procesos, relación padre-hijo

### Ejercicio 5: Creación de Hilos con pthreads
**Objetivo:** Trabajar con hilos usando POSIX threads
- **Función clave:** `pthread_create()`, `pthread_join()`
- **Conceptos:** Concurrencia, hilos vs procesos

## 🚀 Compilación y Ejecución

### Compilar programas en C:
```bash
gcc -o zombie zombie.c
```

## Comandos Útiles para Monitoreo


### Ver procesos en árbol
```  
ps -o pid,ppid,stat,cmd --forest
```  
### Buscar procesos específicos
```  
ps aux | grep [nombre_proceso]
```  
### Ver estados de procesos
```  
ps aux | grep -E "(zombie|defunct)"
```  
### Monitoreo en tiempo real
```  
top
htop
```  
## Conceptos Clave Aprendidos  

### Estados de Procesos:
   +Running (R): En ejecución

   +Sleeping (S): Esperando evento

   +Zombie (Z): Terminado pero no recolectado

   +Orphan: Proceso cuyo padre ha terminado
  
### Comunicación entre Procesos:

    +Pipes: Comunicación unidireccional en memoria

    +Redirecciones: Conexión entrada/salida

    +Eficiencia: Pipelines vs archivos en disco

### Concurrencia:

    +Procesos: Espacios de memoria independientes

    +Hilos: Comparten memoria dentro del proceso

    +Sincronización: wait(), pthread_join()

### Requisitos del Entorno

    +Sistema GNU/Linux

    +Compilador gcc

    +Bibliotecas: pthreads

    +Terminal bash

Autor: Kevin Rivera
