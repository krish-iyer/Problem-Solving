#include<stdio.h>
void diagonals(int[3][3]);
void display(int[3][3]);
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
  return 0;
}
void diagonals(int mat[3][3])
{
  int i=0, *add;
  add=&mat[0][0];
  printf("diagonal elements are:");
  while(i<3)
  {
    printf("%u,",*add);
    add=add+4;
    i++;
  }
}
void display(int mat[3][3])
{
  int i=0, *add;
  add=&mat[0][0];
  while(i<10)
  {
    printf("%u\t",*add);
    if(i==2||i==5||i==8)
        printf("\n");
    add++;
    i++;
  }

}
