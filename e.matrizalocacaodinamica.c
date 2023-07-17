#include <stdio.h>
#include <stdlib.h>
//Vinícius Horácio Marques Póvoa
int main()
{


    int i,j;
    int ia, ja, ib, jb;


  while(1){
    printf("Digite a quantidade de linhas da matriz A\n");
    scanf("%d", &ia);
    printf("Digite a quantidade de colunas da matriz A\n");
    scanf("%d", &ja);
    printf("Digite a quantidade de linhas da matriz B\n");
    scanf("%d", &ib);
    printf("Digite a quantidade de colunas da matriz B\n");
    scanf("%d", &jb);
    if(jb == ia)
        break;
    else{
        printf("Valores invalidos, digite novamente!\n");
    }
}


    // Entrada de dados da Matriz A
    float **matA = (float**) malloc(ia*sizeof(float));
    for(i = 0; i<ia; i++){
    matA[i] = (float*)malloc(ja*sizeof(float));
        for(j=0; j<ja; j++){
        printf("Digite os valores da Matriz A [%d] [%d]", i+1,j+1);
        scanf("%f", &matA[i][j]);
            }
        }

  // Entrada de dados da Matriz B
  float **matB = (float**)malloc(ib*sizeof(float));
  for(i = 0; i<ib; i++){
    matB[i] = (float*) malloc(jb * sizeof(float));
    for(j=0; j<jb; j++){
    printf("Digite os valores da Matriz B [%d] [%d]", i+1,j+1);
    scanf("%f", &matB[i][j]);
        }
  }


  // Matriz C

    float **matC = (float**) malloc (ia*sizeof(float));
    for(i=0; i<ia; i++){
        matC[i] = (float*) malloc(jb*sizeof(int));
    for(j=0; j<jb; j++){
    int aux = 0;
    for(int k=0; k<ib; k++){
        aux += matA[i][k]*matB[k][j];
        }
    matC[i][j] = aux;
        }
    }
    printf("\n A Matriz A eh:\n");
    for(int i = 0; i < ia; i++){
        for(int j = 0; j < ja; j++){
        printf("%f ", matA[i][j]);
    }
    printf("\n");
  }
  printf("\nA Matriz B eh:\n");
  for(int i = 0; i < ib; i++){
    for(int j = 0; j < jb; j++){
      printf("%f ", matB[i][j]);
    }
    printf("\n");
  }
    printf("\nA Matriz C eh:\n");
    for(i=0; i<ia; i++){
    for(j=0; j<jb; j++){
     printf("%f ", matC[i][j]);
    }
     printf("\n");
    }

    //Desalocação

    for(i=0; i<ia; i++)
        free(matA[i]);
        free(matA);

    for(i=0; i<ib; i++)
        free(matB[i]);
        free(matB);

    for(i=0; i<ia; i++)
        free(matC[i]);
        free(matC);
}
