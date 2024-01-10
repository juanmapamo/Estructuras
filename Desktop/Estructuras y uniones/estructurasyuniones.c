#include <stdio.h>
int main(int argc, char const *argv[])
{
    struct alumno
    {
        int matricula;
        char nombre[50];
        char direccion[50];
        char carrera[50];
        float promedio;
    };
    struct alumno alumno1 = {100, "Juan Perez", "Quito", "Software", 5.0};
    struct alumno alumno2 = {200, "Ana Perez", "Gye", "Software", 7.1};
    
    printf("Datos de alumnos 2: \n");
    printf("Matricula: %d\n", alumno2.matricula);
    printf("Nombre: %s\n", alumno2.nombre);
    printf("Direccion: %s\n", alumno2.direccion);
    printf("Carrera: %s\n", alumno2.carrera);
    printf("Nota Promedio: %.2f\n", alumno2.promedio);

    return 0;
}
