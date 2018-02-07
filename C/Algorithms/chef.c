#include<stdio.h>
#include<stdlib.h>

int main()
{
  long int i=0,set=0,k=0,test_case;
  scanf("%d\n",&test_case);
  char *ptr[test_case];
  while(i!=test_case)
  {
    ptr[i] = (char*)malloc(2000);
    scanf("%s",ptr[i]);
    i++;
  }
  i=0;
  while(i!=test_case)
  {
    long int count=0;
    long int j=0;
    while(ptr[i][j]!='\0')
    {
        char str[4]="chef";
        if(ptr[i][j]=='c'||ptr[i][j]=='h'||ptr[i][j]=='e'||ptr[i][j]=='f')
        {
                for(int z=0;z<4;z++)
                {
                  if(ptr[i][pnt]==str[z])
                  {
                    str[z]='!';
                    pnt++;
                  }

              }
              }
              else
                break;
            }
            for(k=0;k<4;k++)
            {
              if(str[k]!='!')
                break;
            }
            if(k==4)
              count++;

      }
      j++;
    }
    if(count>0)
      printf("lovely %d\n",count);
    else if(count==0)
      printf("normal\n");
    i++;
    count=0;
  }
  return 0;
}
