//Bishal Giri
//This program asks the user for the month and date and lets the user know if their aries or not
#include <stdio.h>

void aries_finder();
int main()
{

    int month, day;
    printf("Enter the month: ");
    scanf("%d", &month);

    printf("Enter the day: ");
    scanf("%d", &day);

    aries_finder(month, day);
}
void aries_finder(int month, int day)
{
    if (month ==3)
    {
        if (day>=21 && day<=31)
        {
            printf("Aries.");
        }
        else
        {
            printf("Not Aries.");
        }

    }
    else if (month == 4)
    {

        if (day>=1 && day<= 19)
        {
            printf("Aries.");
        }
        else
        {
            printf("Not Aries.");
        }

    }
    else
    {
        printf("Not Aries.");
    }
}
