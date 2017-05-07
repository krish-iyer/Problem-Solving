#include<stdio.h>
void diagonals(int[3][3]);
void display(int[3][3]);
void transpose(int[3][3]);

int main()
{
  int i,j,mat[3][3];
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&mat[i][j]);
    }
  }
  display(mat);
  diagonals(mat);
  transpose(mat);
  return 0;
}
void diagonals(int mat[3][3])
{
  int i,*add;
  add=&mat[0][0];
  printf("diagonal elements are:");
  for(i=0;i<3;i++)
  {
    printf("%d,",*add);
    add=add+4;
  }
}
void display(int mat[3][3])
{
  int i,*add;
  add=&mat[0][0];
  for(i=0;i<10;i++)
  {
    printf("%d\t",*add++);
    if(i==2||i==5||i==8){
      printf("\n");
    }
  }
}
void transpose(int mat[3][3])
{
  int i,*add;
  add=&mat[0][0];
  for(i=0;i<10;i++)
  {
    printf("%d\t",*add++);
    if(i==2||i==5||i==8){
      printf("\n");
    }
  }
}
