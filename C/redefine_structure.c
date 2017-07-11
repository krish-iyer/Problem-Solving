#include<stdio.h>
struct student
{
  int roll_no;
  char name[25];
  int average_mark;
};
typedef struct student stud;
int main()
{
  stud std;
  printf("enter the roll number: ");
  scanf("%d",&std.roll_no);
  printf("\nEnter the name:");
  scanf("%s",std.name);
  printf("\nenter average mark");
  scanf("%d",&std.average_mark);
  printf("\nthe roll no: %d",std.roll_no);
  printf("\nthe name %s",std.name);
  printf("\nthe average marks %d",std.average_mark);
  return 0;
}
