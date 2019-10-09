#include<stdio.h>
#include<conio.h>
void main()
{
    int i, n;

    printf("Enter a number for its multiplication table: ");
    scanf("%d", &n);

    for(i=1; i<=20; i++)
    {
        printf("%d x %d = %d\n", n,i,n*i);

    }
    getch();
}
