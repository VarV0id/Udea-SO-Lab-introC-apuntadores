#include <stdio.h>
#include <string.h>
char *obtenerSubcadena(char *array, int index);

/**
 *   @brief  Obtiene una subcadena a tomada a partir de un subindice asociado a una subcadena
 *
 *   @param  array cadena de caracteres a ingresar
 *   @param  index indice
 *   @return un apuntador a la posicion inicial de la subcadena o NULL si el tamaño de index supera a la longitud de la cadena
 */
int main(){
    char caracteres[40];
    printf("Porfavor, ingrese una cadena de texto: ");
    fgets(caracteres,40, stdin);
    printf("Porfavor, el indice desde el cual desea partir la cadena:");
    int a;
    scanf("%d", &a);
    char * cadena = obtenerSubcadena(caracteres,a);
    printf("\n%s", cadena);
}
char *obtenerSubcadena(char *array, int index) {
    //int len = strlen(array);
    char *p1;
    p1 = array;
    printf("%s", p1-1);
    p1+=index;   
    return p1;
}