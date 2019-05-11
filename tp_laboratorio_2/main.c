#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#define T 6
#define S 4

int main()
{
    eEmployee empleado[T];
    eSector sectores[S]

    initEmployees(empleado,T);


    int opcion;
    char seguir='s';

    do
    {
        printf("1.Alta\n2.Modificar\n3.Baja\n4.Informar\n5.Salir\nElija una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:

            break;
        case 2:

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

/*

int mostrar;
    int i;
    for(i=0;i<T;i++)
    {
       mostrar = initEmployees(empleado,T);
       printf("%d",mostrar);

    }
*/
