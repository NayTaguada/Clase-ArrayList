#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    return 0;
}


void employee_print(Employee* this)
{

}


Employee* employee_new(void)
{
    Employee* retorno = NULL;

    retorno = malloc(sizeof(Employee));

    /*empleado->id = atoi(id);
    strcpy(empleado->name,nombre);
    strcpy(empleado->lastName,apellido);
    empleado->isEmpty = atoi(estado);
    */
    return retorno;

}

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{

    return 0;

}

int employee_getId(Employee* this)
{

    return 0;

}


