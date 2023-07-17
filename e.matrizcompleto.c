#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, **matA, **matB, **matC, matT[3][3], soma;

    printf("Digite os valores da Matriz A\n");

    matA = (int*) malloc(3 * sizeof(int));
    for(i = 0; i < 3; i++){
        matA[i] = (int *) malloc (3 * sizeof(int));
        for(j=0; j < 3; j++){
            printf("Matriz [%d] [%d]\n", i, j);
            scanf("%d", &matA[i][j]);
        }
    }
    printf("Digite os valores da Matriz B\n");
    matB = (int*) malloc(3 * sizeof(int));
    for(i = 0; i < 3; i++){
        matB[i] = (int *) malloc (3 * sizeof(int));
        for(j=0; j < 3; j++){
            printf("Matriz [%d] [%d]\n", i, j);
            scanf("%d", &matB[i][j]);
        }
    }
    printf("A matriz A digitada foi : \n");
    for(i = 0; i < 3; i++){
        for(j=0; j < 3; j++){
            printf(" %d", matA[i][j]);
        }
        printf("\n");
    }

    printf("A matriz B digitada foi : \n");
    for(i = 0; i < 3; i++){
        for(j=0; j < 3; j++){
            printf(" %d", matB[i][j]);
        }
        printf(" \n");
    }


    printf("==== CALCULO DA SOMA ====\n");

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            soma = soma + matA[i][j] + matB[i][j];
        }
    }
    printf("Soma = %d\n", soma);

    printf("==== MULTIPLICACAO DE MATRIZES ==== \n");
    for(i=0; i<3; i++){
        matC = (int*) malloc(3 * sizeof(int));
        for(j=0; j<3; j++){
           matC[i] = (int *) malloc (3 * sizeof(int));
            matC[i][j] = matA[i][j] * matB[j][i];
            printf(" %d", matC[i][j]);
        }
        printf(" \n");
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            matT[j][i] = matA[i][j];
        }
    }
    printf("==== MATRIZ TRANSPOSTA DE A ==== \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("% d ", matT[i][j]);
        }
        printf(" \n");
    }

    printf("==== DIAGONAL PRINCIPAL DE A ==== \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i == j){
                printf(" %d", matA[i][j]);
            }
        }
        printf(" \n");
    }

    printf("==== ABAIXO DA DIAGONAL PRINCIPAL DE A ==== \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i > j){
                printf(" %d", matA[i][j]);
            }
        }
    }
}