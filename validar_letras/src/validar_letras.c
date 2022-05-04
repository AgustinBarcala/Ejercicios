#include <ctype.h>
#include <stdio.h>
#include <string.h>

int validarLetras(char cadena[]);
int validarLetrasFinal(char cadena[]);
int validarLetrasFinal(char cadena[]);

int main()
{
    printf("%d",validarLetrasFinal("\0"));
    return 0;
}

// Valida que la cadena SOLO tenga letras
int validarLetras(char cadena[]) //forma rebuscada
{
    int validacionRetorno = 0;
    int lenCadena = strlen(cadena);
    // char != numero char != simbolosRaros char != ' '
    if(cadena != NULL)
    {
        for(int i = 0; i < lenCadena; i++)
        {
            if((cadena[i] >= 'A' && cadena[i] <= 'Z') || (cadena[i] >= 'a' && cadena[i] <= 'z'))
            {
                validacionRetorno=1;
            }
            else
            {
                validacionRetorno = 0;
                break;
            }
        }
    }
    return validacionRetorno;
}

int validarLetrasFinal(char cadena[]) //forma rebuscada
{
    int validacionRetorno = 1;
    int i =0;
    if(cadena != NULL)
    {
        while(cadena[i]!='\0')
        {
            if(cadena[i]<'A' || cadena[i]>'Z' && cadena[i]<'a' || cadena[i]>'z')
            {
                validacionRetorno = 0;
                break;
            }
            i++;
        }
    }
    return validacionRetorno;
}

