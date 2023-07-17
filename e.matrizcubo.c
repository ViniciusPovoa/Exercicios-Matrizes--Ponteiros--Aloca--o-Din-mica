#include <stdio.h>
#include <stdlib.h>

//Vinícius Horácio Marques Póvoa
int main()
{

    int i, j, c;
    int alt = 7, larg = 6, prof = 5;
    srand(time(NULL));
    // Entrada de dados Matriz
    int ***cubo = (int***) malloc(larg*sizeof(int**));
    for(i = 0; i<larg; i++){
    cubo[i] = (int**)malloc(alt*sizeof(int*));
        for(j=0; j<alt; j++){
       cubo[i][j] = (int*)malloc(prof*sizeof(int*));
        for(c=0; c< prof; c++){
            cubo[i][j][c] = rand() % 100 +1;
                }
            }
        }
    for(i=0; i<prof; i++){
        printf("Camada [%d]:\n", i+1);
        for(j=0; j<larg; j++){
            for(c=0; c<alt; c++){
                printf("%d ", cubo[j][c][i]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    for(i = 0; i < larg; i++){
    for(j = 0; j < alt; j++)
      free(cubo[i][j]);
    free(cubo[i]);
  }
  free(cubo);

	
}





