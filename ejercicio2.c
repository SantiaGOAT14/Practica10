//LOPEZ SANTAMARIA SANTIAGO 18/10/2024
//Imprimir todos los valores de una matriz 3x3
#include <stdio.h>
#include <math.h>
int main ()
{
  int arr [3][3] = {{1,2,3},{1,2,3},{1,2,3}};
  int i = 0;
  int j = 0;

printf("Imprimir la matriz\n");
  for (i=0 ; i<3 ; i++) 
  {
    for (j=0 ; j<3 ; j++)
    {
    printf("|%d| ", arr[i][j]);
    }
    printf("\n");
 }
return 0;
}
