#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 2
typedef struct agenda{
    char nombre[50];
    char apellido[50];
    int legajo;



} agenda;
char mostrarMenu( char textomenu[], char min, char max);


int main()
{
    agenda persona[MAX];
    int auxInt;
    char auxChar;
    int i;
    char opcion = 'a';

    for(i= 0; i<MAX; i++)
    {
        persona[i].legajo = i;
        strcpy(persona[i].apellido, "NULL");
        strcpy(persona[i].nombre, "NULL");
    }
    for(i= 0; i<MAX; i++)
    {
        printf("%d\n", persona[i].legajo);
        printf("%s\n", persona[i].apellido);
        printf("%s\n", persona[i].nombre);
    }



    /*do{
        system("cls");
        opcion = mostrarMenu("1-ALTAS\n2-BAJAS\n3-MODIFICACIONES\n4-SALIR\n", '1', '4');

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
                        break;
                    }

                    printf("Desea dar de alta al legajo Nro: %d? s/n", auxChar);
                    fflush(stdin);
                    scanf("%c", &auxChar);
                    if(tolower(auxChar) == 's')
                    {
                         printf("AGREGANDO");
                    }
                }

                system("pause");
                break;
            case '2':
                system("cls");
                printf("BAJAS");
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

char mostrarMenu( char textomenu[], char min, char max )
{
    char opcion ='|';
    int flagPrimera = 1;


    do
    {
        if((opcion < min || opcion > max) && flagPrimera != 1)
        {
            printf("ERROR: reingrese\n");
        }
        printf("%s", textomenu);
        fflush(stdin);
        scanf("%c",&opcion);
        flagPrimera = 0;
    }while(opcion < min || opcion > max);
    return opcion;



}
