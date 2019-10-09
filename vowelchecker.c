#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("Enter a letter to know if its a vowel or not: ");
    scanf("%c", &ch);

    switch(ch)
    {
    case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("It is a vowel");
                    break;
        default:printf("Not a vowel");
                    break;

    }
    getch();
}

