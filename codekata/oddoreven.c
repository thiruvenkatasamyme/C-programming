#include <stdio.h>
 
void main()
{
    int num;
 
    printf("Enter a number: \n");
    scanf("%d", &num);
    if (num%2==0)
        printf("%d is a even number \n", num);
    else 
    printf("%d is a odd number \n", num);
    }
