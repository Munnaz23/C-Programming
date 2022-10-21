#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the inputs: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a<=b && a<=c)
    {
        printf("B and C both are bigger.");
    }
    else if(a>=b && c<=a && b<=c)
    {
         printf("A and C both are bigger.");
    }

    else if(a>=b && a<=b && a>=c && b>=c)
    {
        printf("A and B both are bigger.");

    }
    else
    {
        printf("No");
    }


}

