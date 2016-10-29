#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int parserEmployee(FILE* pFile , ArrayList* pArrayListEmployee)
{
    //FILE *p;
    char id[50],nombre[50],apellido[50],estado[50];
    pFile = fopen("data.csv","r");

    while(!feof(pFile))
    {
    Employee *empleado;
    fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,apellido,estado);
    printf("%s-%s-%s-%s\n",id,nombre,apellido,estado);
    empleado = employee_new();
    empleado->id = atoi(id);
    strcpy(empleado->name,nombre);
    strcpy(empleado->lastName,apellido);
    empleado->isEmpty = atoi(estado);
        if(al_add(pArrayListEmployee,empleado)==0)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    return 0;
}

