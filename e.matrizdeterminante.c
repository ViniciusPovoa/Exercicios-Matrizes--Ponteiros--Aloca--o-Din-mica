#include <stdio.h>
#include <stdlib.h>

//Vinícius Horácio Marques Póvoa
int main()
{
    int i, j;
    float det;

    // Entrada de dados Matriz
    printf("*****Digite os dados da Matriz 3x3! *****\n");
    float **mat = (float**) malloc(3*sizeof(float));
    for(i = 0; i<3; i++){
    mat[i] = (float*)malloc(2*sizeof(float));
        for(j=0; j<3; j++){
        printf("[%d] [%d] = ", i+1,j+1);
        scanf("%f", &mat[i][j]);
            }
        }

  float dp1 = mat[0][0]*mat[1][1]*mat[2][2];
  float dp2 = mat[0][1]*mat[1][2]*mat[2][0];
  float dp3 = mat[0][2]*mat[1][0]*mat[2][1];
  float ds1 = mat[0][2]*mat[1][1]*mat[2][0];
  float ds2 = mat[0][0]*mat[1][2]*mat[2][1];
  float ds3 = mat[0][1]*mat[1][0]*mat[2][2];


    det = (dp1 + dp2 + dp3) - (ds1 + ds2 + ds3);

    printf("O determinante eh %f", det);

    for(i=0; i<3; i++)
    free(mat[i]);
    free(mat);
}



