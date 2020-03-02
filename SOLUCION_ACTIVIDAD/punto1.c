#include <stdio.h>

int contarCaracter(char *array, char ch);
int main(){
    char caracteres[40];
    printf("Porfavor, ingrese una cadena de texto: ");
    fgets(caracteres,40, stdin);
    printf("Porfavor, ingrese el caracter a contar: ");
    char a;
    scanf("%c",&a);


    printf("%d \n",contarCaracter(caracteres, a));
    return 0;
}
/**
 *   @brief  Cuenta las veces que aparece un caracter determinado dentro de una cadena.
 *
 *   @param  array cadena de caracteres a ingresar
 *   @param  ch es el caracter a averiguar
 *   @return el numero de veces que aparece ch en array o -1 si no aparece.
 */
int contarCaracter(char *array, char ch) {
  int cantidad = 0;
  while(*array != '\0'){
      if(array[0] == ch){
        cantidad++;
      }
      array++;
  }
  if(cantidad != 0){
    return cantidad;
  }else{
    return -1;
  }
  
}