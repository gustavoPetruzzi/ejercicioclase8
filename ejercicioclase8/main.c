#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "funciones.h"
#define MAX 20
typedef struct {
    char nombre[50];
    char apellido[50];
    int legajo;



} agenda;



int main()
{
    int numero;
    char letra;
    numero = obtenerNumero("Ingrese un numero: ", 1, 150);
    printf("%d", numero);
    letra = obtenerChar("Ingrese una letra: ", 'a', 'z');
    printf("%c", letra);
    /*agenda persona[MAX];
    int auxInt;
    char auxChar;
    char auxString[50];
    int i;
    int flagExiste;
    char opcion = 'a';

    for(i= 0; i<MAX; i++)
    {
        persona[i].legajo = -1;
        strcpy(persona[i].apellido, "NULL");
        strcpy(persona[i].nombre, "NULL");
    }
    for(i= 0; i<MAX; i++)
    {
        printf("%d\n", persona[i].legajo);
        printf("%s\n", persona[i].apellido);
        printf("%s\n", persona[i].nombre);
    }



    do{
        system("cls");
        opcion = mostrarMenu("1-ALTAS\n2-BAJAS\n3-MODIFICACIONES\n4-SALIR\n", '1', '4');
        flagExiste = 0;
        switch(opcion)
        {

            case '1':
                system("cls");

                printf("Ingrese un numero de legajo:");
                scanf("%d", &auxInt);
                for(i= 0; i<MAX; i++)
                {
                    if(auxInt == persona[i].legajo)
                    {
                        printf("EL LEGAJO YA EXISTE");
                        flagExiste = 1;
                        break;
                    }


                }
                if(flagExiste == 0)
                {
                    printf("Desea dar de alta al legajo Nro: %d? s/n", auxInt);
                    fflush(stdin);
                    scanf("%c", &auxChar);
                    printf("%c", auxChar);
                    if(auxChar == 's')
                    {

                        for(i = 0; i< MAX; i++)
                        {
                            if(persona[i].legajo == -1 )
                            {
                                persona[i].legajo = auxInt;

                                printf("Ingrese el nombre: ");
                                scanf("%s", auxString);
                                strcpy(persona[i].nombre, auxString);

                                printf("Ingrese el apellido: ");
                                scanf("%s", auxString);
                                strcpy(persona[i].apellido, auxString);
                                break;
                            }
                        }
                    }
                }

                system("pause");
                break;
            case '2':
                system("cls");
                printf("IMPRIMIENDO...\n");

                /*printf("Legajo\t\tNombre\t\tApellido\n");
                for(i= 0; i<MAX; i++)
                {
                    if(persona[i].legajo> 0)
                    {
                        printf("%d\t\t%s\t\t%s\n", persona[i].legajo, persona[i].nombre, persona[i].apellido);
                    }
                }
                system("pause");
                break;
            case '3':
                system("cls");
                printf("MODIFICACIONES");
                system("pause");
                break;
            case '4':
                system("cls");
                printf("SALIR");

                break;
        }
    }while(opcion!='4');*/
    return 0;
}

