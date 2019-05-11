typedef struct
{
    int idSector;
    char descripcion[51];

}eSector;

typedef struct
{
 int id;
 char name[51];
 char lastName[51];
 float salary;
 int isEmpty;
 int idSector;
}eEmployee;

int initEmployees(eEmployee[],int);
int addEmployee(eEmployee[],int,int,char[],char[],float);
int findEmployeeById(eEmployee[],int,int);
int removeEmployee(eEmployee[],int,int);

int idAutomatico(eEmployee[],int);
void cargarEmpleados(eEmployee[],int);
int buscarLibre(eEmployee[],int);

void ingresarSector(eSector[],int);







/*

void cargarEmpleados(eEmployee[],int);
void iniciarEstados(eEmployee[],int);
void cargarId(eEmployee[],int);
int buscarLibre(eEmployee[],int);
void pedrirNombre(eEmployee[],int);
void pedrirApellido(eEmployee[],int);
void pedirSalario(eEmployee[],int);
void pedirSector(eEmployee[],int);
void modificarNombre(eEmployee[],int,int);
void modificarApellido(eEmployee[],int,int);
void modificarSalario(eEmployee[],int, float);
void modificarSector(eEmployee[],int, int);
void modificar(eEmployee[],int,int);
void mostrarEmpleados(eEmployee[],int);

*/
