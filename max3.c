//Bishal Giri
//This is a program that asks the user for three different numbers and returns the highest number out of the three

#include <stdio.h>

void run1();
int main()
{
    run1();
    run1();
}

void run1(a,b,c)
{

    printf("Enter 3 integers separated by a space: ");
    scanf("%d%d%d", &a,&b,&c);

    if (a>b && a>c)
    {
        printf("The max is: %d\n", a);
    }
    else if (b>a && b>c)
    {
        printf("The max is: %d\n", b);
    }
    else if (c>a && c>b)
    {
        printf("The max is: %d\n", c);
    }
    else if (a==b && b==c)
    {
        printf("The max is: %d\n", a);
    }
    else if (a==b && a>c)
    {
        printf ("The max is %d\n", a);
    }
    else if (b==c && b>a)
    {
        printf ("The max is %d\n", b);
    }
    else if (a==c && a>b)
    {
        printf ("The max is: %d\n", a);
    }

}
