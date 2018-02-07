#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node* next;
};
struct Node* head;

void Insert(int);
void Print(void);

int main()
{
  int n,i,x;
  printf("Enter the total no ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the no: ");
    scanf("%d",&x);
    Insert(x);
    Print();
  }
  return 0;
}
void Insert(int x)
{
  struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
  temp->data=x;
  temp->next=head;
  head=temp;
}
void Print()
{
  struct Node* temp=head;
  printf("Entered no are: ");
  while(temp!=NULL)
  {
    printf("%d ",temp->data);
    temp=temp->next;
  }
  printf("\n");
}
