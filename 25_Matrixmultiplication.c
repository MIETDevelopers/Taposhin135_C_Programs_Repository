//A C program to print matrix multiplication of two array 
#include<stdio.h>

int main(void)
{
  int c, d, p, q, m, n, k, tot = 0;//declairing the integer variable
  int fst[10][10], sec[10][10], mul[10][10];

  printf(" Please insert the number of rows and columns for first matrix \n ");
  scanf("%d%d", &m, &n);//c:rows, d:columns

  printf(" Insert your matrix elements : \n ");
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &fst[c][d]);//first matrix output
 
  printf(" Please insert the number of rows and columns for second matrix\n");
  scanf(" %d %d", &p, &q);//p:rows,q:columns

  if (n != p)
    printf(" Your given matrices cannot be multiplied with each other. \n ");
  else
  {
    printf(" Insert your elements for second matrix \n ");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &sec[c][d] );//second matrix output

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          tot = tot + fst[c][k] * sec[k][d];
        }
        mul[c][d] = tot;
        tot = 0;
      }
    }
 
    printf(" The result of matrix multiplication or product of the matrices is: \n "); 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d \t", mul[c][d] );//Resultant Output
      printf(" \n ");
    }
  }
  return 0;
}