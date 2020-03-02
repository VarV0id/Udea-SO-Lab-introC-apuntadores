#include <stdio.h>


/*********************************************************/
/*            Declaraciones de las funciones             */
/*********************************************************/
void shellsort(int V[], int N);

/*********************************************************/
/*                     Funcion main                      */
/*********************************************************/


int main(void) {
    int N;
    int val;
    int mediana;
    
    printf("Ingrese Tamaño Vector (impar): ");
    scanf("%d",&N);
    
    int V[N];
    
    for(int i=0;i<N;i++){
        printf("Ingrese valor (%d): ",i+1);
        scanf("%d",&val);
        V[i] = val;
    }
    
    shellsort(V,N);
    
    mediana = (N+1)/ 2 - 1;
    printf("La mediana es: %d ",V[mediana]);
    return 0;
}

/*********************************************************/
/*             Definiciones de las funciones             */
/*********************************************************/
void shellsort(int V[], int N){
    int aux;
    for (int i = N / 2; i > 0; i = i / 2){
        for (int j = i; j < N; j++){
            for(int k = j - i; k >= 0; k = k - i){
                if(V[k+i] < V[k]){
                    aux = V[k];
                    V[k] = V[k+i];
                    V[k+i] = aux;
                }
            }
        }
    }
}
