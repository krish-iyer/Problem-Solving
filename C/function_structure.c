#include<stdio.h>
struct Book
{
  int book_id;
  char book_title[25];
  char author[25];
  float price;
}book;
void print(struct Book);
int main()
{
  printf("enter the id");
  scanf("%d",&book.book_id);
  printf("\nenter the book title");
  scanf("%s",book.book_title);
  printf("\nenter the author");
  scanf("%s",book.author);
  printf("\nenter the price");
  scanf("%f",&book.price);
  print(book);
  return 0;
}
void print(struct Book cpy)
{
  printf("book id: %d",cpy.book_id );
  printf("book title: %s",cpy.book_title );
  printf("book author: %s",cpy.author );
  printf("book price: %f",cpy.price );
}
