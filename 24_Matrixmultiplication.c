//A C Program to find the matix multiplication of two matrix
#include<stdio.h>
int main(void){
  int c, d, p, q, m, n, k, total = 0;//Declaring the integer variable
  int first[10][10], second[10][10], mul[10][10];

  printf(" Please insert the number of rows and columns for first matrix \n ");//Inserting rows and columns in first matrix 
  scanf("%d%d", &m, &n);//m:rows ,n:columns

  printf(" Insert your matrix elements : \n ");
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);//First matrix Output
 
  printf(" Please insert the number of rows and columns for second matrix\n");//Inserting rows and columns in second matrix
  scanf(" %d %d", &p, &q);//p:rows ,q:columns

  if (n != p)
    printf(" Your given matrices cannot be multiplied with each other. \n ");
  else
  {
    printf(" Insert your elements for second matrix \n ");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d] );//Second matrix Output

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          total = total + first[c][k] * second[k][d];
        }
        mul[c][d] = total;
        total = 0;
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