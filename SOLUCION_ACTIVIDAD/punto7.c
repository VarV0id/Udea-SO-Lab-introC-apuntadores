#include <stdio.h>


/*********************************************************/
/*            Declaraciones de las funciones             */
/*********************************************************/
void shellsort(float V[], int N);
void media_por_alumno(int n_estudiantes, int n_asignaturas, float V[][n_asignaturas]);
void media_por_asignatura(int n_estudiantes, int n_asignaturas, float V[][n_asignaturas]);
float media_total(int n_estudiantes, int n_asignaturas, float V[][n_asignaturas]);
void imprimir_matriz(int n_estudiantes, int n_asignaturas, float V[][n_asignaturas]);
void imprimir_vector(float V[], int N);

/*********************************************************/
/*                     Funcion main                      */
/*********************************************************/
int main(void) {
    int n_asignaturas = 5;
    int n_estudiantes;
    float nota_asignatura;
    
    printf("Ingrese la cantidad de Estudiantes: ");
    scanf("%d",&n_estudiantes);
    
    float estudiantes[n_estudiantes][n_asignaturas];
    
    for(int i=0;i<n_estudiantes;i++){

        printf("Para el estudiante (%d) \n",i+1);

        for(int j=0;j<n_asignaturas;j++){
            printf("Ingrese valor de la asignatura (%d): ",j+1);
            scanf("%f",&nota_asignatura);
            estudiantes[i][j] = nota_asignatura;
        }
    }
    
    printf("-----------------------------------------------\n");
    printf("La media por alumno es\n");
    media_por_alumno(n_estudiantes, n_asignaturas, estudiantes);


    printf("-----------------------------------------------\n");
    printf("La media por asignatura es\n");
    media_por_asignatura(n_estudiantes, n_asignaturas, estudiantes);
    

    printf("-----------------------------------------------\n");
    printf("La media Total es: %f\n", media_total(n_estudiantes, n_asignaturas,estudiantes));

    return 0;
}

/*********************************************************/
/*             Definiciones de las funciones             */
/*********************************************************/
void shellsort(float V[], int N){
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


void media_por_alumno(int n_estudiantes, int n_asignaturas, float V[][n_asignaturas]){
    float media[n_estudiantes];
    for(int i=0;i<n_estudiantes;i++){
        float suma = 0;
        for(int j=0;j<n_asignaturas;j++){
            suma = suma + V[i][j];
        }
        media[i] = suma/n_asignaturas;
    }

    imprimir_vector(media,n_estudiantes);

    printf("Los alumnos ordenados por notas medias son\n");
    shellsort(media,n_estudiantes);
    imprimir_vector(media,n_estudiantes);
}

void media_por_asignatura(int n_estudiantes, int n_asignaturas, float V[][n_asignaturas]){
    float media[n_asignaturas];
    for(int i=0;i<n_asignaturas;i++){
        float suma = 0;
        for(int j=0;j<n_estudiantes;j++){
            suma = suma + V[j][i];
        }
        media[i] = suma/n_estudiantes;
    }

    imprimir_vector(media,n_asignaturas);
}

float media_total(int n_estudiantes, int n_asignaturas, float V[][n_asignaturas]){
    float media = 0;
    float total = (float)n_estudiantes*n_asignaturas;
    for(int i=0;i<n_estudiantes;i++){
        for(int j=0;j<n_asignaturas;j++){
            media = media + V[i][j];
        }
    }

    media = media/total;
    return media;
}

void imprimir_vector(float V[], int N){
    for(int i=0;i<N;i++){
        printf("%f || ",V[i]);
    }
    printf("\n");
}

void imprimir_matriz(int n_estudiantes, int n_asignaturas, float V[][n_asignaturas]){
    for(int i=0;i<n_estudiantes;i++){
        for(int j=0;j<n_asignaturas;j++){
            printf("%f || ",V[i][j]);
        }
        printf("\n");
    }
}