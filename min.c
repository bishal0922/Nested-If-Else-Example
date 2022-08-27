//Bishal Giri
//This programs prints the the lower of the two numbers. The numbers are hard-coded values and everything is displayed in a tabular manner.

#include <stdio.h>

float get_min(float num1, float num2);

int main(){
    printf("|  num1 |  num2 |   min |\n");
    printf("|    5.0|   12.8|%7.1f|\n",get_min(5.0, 12.8));
    printf("|   20.0|   14.0|%7.1f|\n",get_min(20, 14.0));
    printf("|  172.0|  172.0|%7.1f|\n",get_min(172,172));
    printf("|   -3.0|   -7.0|%7.1f|\n",get_min(-3, -7));
}

float get_min(float num1, float num2){
    float min;
    if (num1<num2){
        min = num1;
    }
    else{
        min = num2;
    }
    return min;
}
