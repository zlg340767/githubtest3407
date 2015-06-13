#include<stdio.h>

void print_s(char *s);

int main(int argc,char *argv[])
{
  char *s="character string";
  print_s(s);
  return 0;
}

void print_s(char *s)
{
  printf("hello world");
}
