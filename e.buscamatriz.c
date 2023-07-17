#include <stdio.h>
#include <stdlib.h>

//Vinícius Horácio Marques Póvoa
int main()
{
    int i, j;

    // Entrada de dados Matriz
    printf("*****Digite os dados da Matriz 5x5! *****\n");
    float **mat = (float**) malloc(5*sizeof(float*));
    for(i = 0; i<5; i++){
    mat[i] = (float*)malloc(5*sizeof(float));
        for(j=0; j<5; j++){
        printf("[%d] [%d] = ", i+1,j+1);
        scanf("%f", &mat[i][j]);
            }
        }
    float bsc;

     do{
        printf("Busca: ");
        scanf("%f", &bsc);
        if(bsc != 0){
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                if(mat[i][j] == bsc)
                  printf("Achamos o valor %f na posicao [%d, %d]\n", bsc, i+1, j+1);
                }
            }
       }
  }while(bsc != 0);
   printf("Isto eh tudo, pessoal!");

   for(i=0; i<5; i++){
   free(mat[i]);
   free(mat);

        }
}


