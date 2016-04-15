#include <stdio.h>
#include <stdlib.h>
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


int obtenerNumero(char textmenu[], int min, int max )
{
    int number;
    int flagPrimera = 1;

    do
    {
        printf("%s", textmenu);
        scanf("%d", &number);
        if((number <min || number> max)&&flagPrimera != 0)
        {
            printf("ERROR: REINGRESE");
        }
    }while(number <min || number> max);
    return number;


}

char obtenerChar(char textmenu[], char min, char max )
{
    char character;
    int flagPrimera = 1;

    do
    {
        printf("%s", textmenu);
        fflush(stdin);
        scanf("%c", &character);
        if((character <min || character> max)&&flagPrimera != 0)
        {
            printf("ERROR: REINGRESE");
        }
    }while(character <min || character> max);
    return character;


}
