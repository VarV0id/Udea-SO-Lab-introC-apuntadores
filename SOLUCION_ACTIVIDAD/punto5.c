#include <stdio.h>


/*********************************************************/
/*            Declaraciones de las funciones             */
/*********************************************************/

/* Funciones del programa */
int esLetra(char ch);
int esMayuscula(char ch);
void volverMayuscula(char *ch);
void stringToMayuscula(char s[]);


/*********************************************************/
/*                     Funcion main                      */
/*********************************************************/


int main(void) {
    char s[100];
    printf("Entrada > ");
    scanf("%100s",s);
    
    while(1){
        stringToMayuscula(s);
        printf("%s\n", s);
        printf("Entrada > ");
        scanf("%100s",s);
    }
    
    return 0;
}

/*********************************************************/
/*             Definiciones de las funciones             */
/*********************************************************/

/* Funciones del programa */

/**  
 *   @brief  Determina si un caracter alfabetico
 *  
 *   @param  ch es el caracter a verificar
 *   @return 1 si el caracter es una letra del alfabeto y 0 si es otro simbolo.
 */
int esLetra(char ch) {
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        return 1;
    }
    return 0;
}

int esMayuscula(char ch) {
    if((ch >= 'A' && ch <= 'Z')){
        return 1;
    }
    return 0;
}

/**  
 *   @brief  Convierte un caracter en mayuscula
 *  
 *   @param  ch es el caracter ingresado
 *   @return void
 */
void volverMayuscula(char *ch) {
    *ch -= 32;
}


/**  
 *   @brief  Convierte en mayusculas la cadena de caracteres ingresada.
 *  
 *   @param  s es una cadena de caracteres ingresada y la cual despues del proceso en la función tendra los caracteres en mayuscula.
 *   @return void
 */

void stringToMayuscula(char s[]) {
    int i=0;
    while(s[i]!='\0'){
        if((esLetra(s[i]) == 1) && (esMayuscula(s[i]) == 0)){
            volverMayuscula(&s[i]);
        }
        i++;
    }
}
