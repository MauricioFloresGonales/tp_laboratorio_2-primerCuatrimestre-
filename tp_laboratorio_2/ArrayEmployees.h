
typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmply;

} eEmployee;

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
