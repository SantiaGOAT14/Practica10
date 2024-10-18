//LOPEZ SANTAMARIA SANTIAGO 18/10/2024
//Imprimir todos los valores de una matriz 3x3 usando un while
#include <stdio.h>
#include <math.h>
int main ()
{
  int arr [3][3] = {{1,2,3},{1,2,3},{1,2,3}};
  int i = 0;
  int j = 0;
   do
  {
    j=0;
    do
      {
        printf("%d ",arr[i][j]);
        j++;
      }
      while (j<3);
        printf("\n");
        i++;
    }
      while(i<3);
return 0;
}
