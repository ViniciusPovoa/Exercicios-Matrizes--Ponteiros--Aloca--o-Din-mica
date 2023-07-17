#include <stdio.h>
#include <stdlib.h>

//Vinícius Horácio Marques Póvoa
int main()
{
    int i, j, det, mul, aux;

    // Entrada de dados Matriz
    printf("*****Digite os dados da Matriz 2x2! *****\n");
    float **mat = (float**) malloc(2*sizeof(float));
    for(i = 0; i<2; i++){
    mat[i] = (float*)malloc(2*sizeof(float));
        for(j=0; j<2; j++){
        printf("[%d] [%d] = ", i,j);
        scanf("%f", &mat[i][j]);
            }
        }
    det = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];

    printf("O determinante da Matriz eh : %d", det);

    for(i=0; i<2; i++){
    free(mat[i]);
    free(mat);
        }
    }

}


