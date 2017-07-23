#include<stdio.h>
int queen[4]={-1,-1,-1,-1};/*Global variables are declared here*/
//int row=0;               /*the queen[4] array will store the position of the queen placed*/
//int col=0;
int it=-1;
int place(int,int);       /*The place function will place the queen in the position if it is safe*/
int safe(int,int);        /*Safe function will check if the position for the new queen is safe*/
int main()
{
//  for (int i = 0; i < 2; i++)/*reintializing problem, every time main function is called it will reintialize
                      //        'i'*/
  //{
    while(it!=1)
    {
      queen[0]=-1;
      place(0,++it);
    }
    for(int i=0;i<4;i++)
    {
      for (int j = 0; j < 4; j++)
      {
        if(queen[i]==j)
          printf("1\t");
        else
          printf("0\t");
      }
      printf("\n");
    }
  //}
  return 0;
}
int place(int row,int col)
{
  if(safe(row,col)==1)
  {
      queen[row]=col;
      for (int i = 0; i < 4; i++) {
          printf("row: %d col: %d\n",i,queen[i]);
      }
      place(++row,0);
  }
  else if(col<3)
  {
    col=col+1;
    place(row,col);
  }
  else if(row>=4||col>=4||row<=-1||col<=-1)
  {
    printf("exiting at row: %d col: %d\n",row,col);
    return 0;
  }
  else
  {
    col=queen[--row];
    queen[row]=-1;
    ++col;
    place(row,col);
  }
}
int safe(int r,int c)
{
  int cnt=0,i;
  for(i=0;i<4;i++)
  {
    if(queen[i]!=-1)
      cnt++; /*to count how many queens have been placed yet*/
  }
  for(i=0;i<cnt;i++)
  {
    if(queen[i]!=-1)
    {
      if(i!=r&&c!=queen[i]&&(i+queen[i])!=(r+c)&&(i-queen[i])!=(r-c)){}
      else if(c>3)
        return 0;
      else
        return 0;
    }
  }
  if(i==cnt&&c<4&&r<4)/*if the queen's position is checked by all other queens and is safe*/
    return 1;
  else
    return 0;
}
