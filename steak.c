//Bishal Giri
//This program takes in 5 different steak temperatures and prints out the entered temperature and how cooked it is based on the temperature.

#include <stdio.h>

void print_info(int temp);

int main()
{
    int temp1, temp2, temp3, temp4, temp5;
    printf("This program will call 5 times a function that prints a message about the doneness level of steak given the internal temperature. \n");
    printf("Enter 5 temperatures (int) separated by spaces: ");
    scanf("%d%d%d%d%d", &temp1, &temp2, &temp3, &temp4, &temp5);
    print_info(temp1);
    print_info(temp2);
    print_info(temp3);
    print_info(temp4);
    print_info(temp5);
}

void print_info(int temp)
{
    printf("The measured meat temperature is %d.\n", temp);
    if (temp>=120 && temp<130)
    {
        printf("Rare\n");
    }
    else if (temp>=130 && temp<135)
    {
        printf("Medium Rare\n");
    }
    else if (temp>=135 && temp<145)
    {
        printf("Medium\n");
    }
    else if (temp>=145 && temp<155)
    {
        printf("Medium Well\n");
    }
    else if (temp>=155 && temp<165)
    {
        printf("Well\n");
    }
    else if (temp>=165)
    {
        printf("What have you done?!\n");
    }
    else if (temp<120)
    {
        printf("Start the fire!\n");
    }

}


