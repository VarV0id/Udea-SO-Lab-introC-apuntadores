#include <stdio.h>


int obtenerIndice(char *array, char ch);

int main(){
    char caracteres[40];
    printf("Porfavor, ingrese una cadena de texto: ");
    fgets(caracteres,40, stdin);
    printf("Porfavor, ingrese el caracter a encontrar su primera posicion: ");
    char a;
    scanf("%c",&a);


    printf("%d \n",obtenerIndice(caracteres, a));
    return 0;
}
/**
 *   @brief  Obtiene el indice de la primera aparicion de un caracter en un array
 *
 *   @param  array cadena de caracteres a ingresar
 *   @param  ch es el caracter a ingresa
 *   @return el indice del primer ch en la cadena array
 */
int obtenerIndice(char *array, char ch) {
  int posicion = 0;
  while(*array != '\0'){
      if(array[0] == ch){
        return posicion;
      }
      posicion++;
      array++;
  }
  return -1;
}