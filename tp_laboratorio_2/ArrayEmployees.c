#include <stdio.h>
#include <string.h>
#include "ArrayEmployees.h"


int initEmployees(eEmployee list[], int len)
{
 return 0;
}

int addEmployee(eEmployee list[], int len, int id, char name[],char lastName[],float salary)
{
 return -1;
}

int findEmployeeById(eEmployee list[], int len,int id)
{
 return NULL;
}

int removeEmployee(eEmployee list[], int len, int id)
{
 return -1;
}

int idAutomatico(eEmployee list[],int len)
{
    int aux;
    aux=len+1;
    list[len].id = aux;

    return aux;
}

void cargarEmpleados(eEmployee list[],int len)
{
    int i;
    int id;
    int empleado;
    i= buscarLibre(list,len);
    if(i!= -1)
    {

    id = idAutomatico(list,len);

    printf("ingrese nombre: ");
    fflush(stdin);
    gets(list[len].name);

    printf("ingrese apellido: ");
    fflush(stdin);
    gets(list[len].lastName);

    printf("ingrese el salario: ");
    scanf("%f", &list[len].salary);

    empleado = addEmployee(list,len,id,name[],lastName[],salary);

}

int buscarLibre(eEmployee list[],int len)
{

    int i;
    int index = initEmployees(list,len);

    for(i=0; i<len; i++)
    {
        if(list[i].isEmply == 0)
        {
            index= i;
            break;
        }
    }
    return index;
}

void hardcodearDatosEmpleados(eEmpleado lista[], int tam)
{
    int i;
    char name[][50]= {"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char lastName[]= {"Ramires","Gonzalez","Flores","Catunta","Barrios","Ham"};
    float salary[]= {22000,22000,15000,4000,21000,6000};
    int sector[]={1,2,3,4,2,1};

    eFecha unaFecha = {22,04,2019};

    for(i=0; i<tam; i++)
    {
        strcpy(lista[i].name, name[i]);
        strcpy(lista[i].lastName, lastName[i]);
        lista[i].salary = salary[i];
        lista[i].isEmpty = 0;
        lista[i].idSector = sector[i];
    }







/*void cargarEmpleados(eEmployee empleado[],int tam)
{
    int i;
    i= buscarLibre(empleado,tam);
    if(i!= -1)
    {
        cargarId(empleado,i);

        pedrirNombre(empleado,i);

        pedrirApellido(empleado,i);

        pedirSalario(empleado,i);

        pedirSector(empleado,i);

        empleado[i].isEmply= INGRESADO;
    }
    else
    {
        printf("no hay espacio\n");
    }
}*/

/*
void iniciarEstados(eEmployee empleado[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        empleado[i].isEmply = VACIO;
    }
}

int buscarLibre(eEmployee empleado[],int tam)
{
    int i;
    int index = -1;

    for(i=0; i<tam; i++)
    {
        if(empleado[i].isEmply == VACIO)
        {
            index= i;
            break;
        }
    }
    return index;
}

void cargarId(eEmployee empleado[],int tam)
{
    printf("ingrese ID: ");
    scanf("%d", &empleado[tam].id );

}





void pedirSector(eEmployee empleado[],int tam)
{
    printf("ingrese nuevo sector: ");
    fflush(stdin);
    gets(empleado[tam].sector);

}


void modificarNombre(eEmployee empleado[],int tam, int nombre)
{
    int i;
    int loEncontro= 0;
    printf("ingrese el nombre a cambiar: ");
    scanf("%d",&nombre);

    for(i=0; i<tam; i++)
    {
        if(nombre == empleado[i].name)
        {
            printf("ingrese nuevo nombre: ");
            fflush(stdin);
            gets(empleado[tam].name);
            loEncontro=1;
            break;
        }
    }
    if(loEncontro==0)
    {
        printf("el nombre no existe.\n");
    }
}

void modificarApellido(eEmployee empleado[],int tam, int apellido)
{
    int i;
    int loEncontro= 0;
    printf("ingrese el apellido a cambiar: ");
    scanf("%d",&apellido);

    for(i=0; i<tam; i++)
    {
        if(apellido == empleado[i].lastName)
        {
            printf("ingrese nuevo apellido: ");
            fflush(stdin);
            gets(empleado[tam].lastName);
            loEncontro=1;
            break;
        }
    }
    if(loEncontro==0)
    {
        printf("el apellido no existe.\n");
    }
}

void modificarSalario(eEmployee empleado[],int tam, float salario)
{
    int i;
    int loEncontro= 0;
    printf("ingrese el salario a cambiar: ");
    scanf("%f",&salario);

    for(i=0; i<tam; i++)
    {
        if(salario == empleado[i].salary)
        {
            printf("ingrese nuevo salario: ");
            scanf("%f",&empleado[i].salary);
            loEncontro=1;
            break;
        }
    }
    if(loEncontro==0)
    {
        printf("el salario no existe.\n");
    }
}

void modificarSector(eEmployee empleado[],int tam, int sector)
{
    int i;
    int loEncontro= 0;
    printf("ingrese el sector a cambiar: ");
    scanf("%f",&sector);

    for(i=0; i<tam; i++)
    {
        if(sector == empleado[i].sector)
        {
            printf("ingrese nuevo sector: ");
            fflush(stdin);
            gets(empleado[tam].sector);
            loEncontro=1;
            break;
        }
    }
    if(loEncontro==0)
    {
        printf("el sector no existe.\n");
    }
}

void modificar(eEmployee empleado[],int tam, int modificable)
{

    int opcion;
    char seguir='s';

    do
    {
        printf("ingrese que va a modificar:\n1.Nombre\n2.Apellido\n3.Salario\n4.sector");;
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            modificarNombre(empleado,tam,modificable);
            seguir='n';
            break;
        case 2:
            modificarApellido(empleado,tam,modificable);
            seguir='n';
            break;
        case 3:
            modificarSalario(empleado,tam,modificable);
            seguir='n';
            break;
        case 4:
            modificarSector(empleado,tam,modificable);
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
}


void mostrarEmpleados(eEmployee empleado[],int tam)
{
    printf("%d - %s - %s - %f - %s - %\n ",empleado[tam].id,empleado[tam].name,empleado[tam].lastName,empleado[tam].salary,empleado[tam].sector,empleado[tam].isEmply);

}
*/
