#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#define T 4

int main()
{
    eEmployee empleado[T];

    iniciarEstados(empleado,T);

    int opcion;
    char seguir='s';

    do
    {
        printf("1.Alta\n2.Modificar\n3.Baja\n4.Informar\n5.Salir\nElija una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            cargarEmpleados(empleado,T);
            break;
        case 2:
            //modificar(empleado,T,modificable);
            break;
        case 3:

            break;
        case 4:

            break;
        case 5:
            seguir='n';

            break;
        default:
            printf("ERROR. Ingrese una opcion valida.\n");
            //system("pause");
            break;
        }
        system("pause");
        system("cls");

    }
    while(seguir=='s');


    return 0;
}
