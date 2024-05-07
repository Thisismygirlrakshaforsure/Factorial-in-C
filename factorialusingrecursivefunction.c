#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
  int f;
printf("enter a no");
scanf("%d", &n);
f=fact(n);
printf("factorial=%d" f);
getch();
int fact(int n)
{
  if(n==1)
    return 1;
else
    return n*fact(n-1);
}
