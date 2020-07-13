#include<stdio.h>

// function defination
float dollartoruppes(float dollar){
    float amount;
    amount = dollar * 70; // 350
    return amount; // 350
}

void main()
{
    float dollar;
    scanf("%f", &dollar);

    // function calling
    float value;
    value = dollartoruppes(dollar); // wait
    // dollartoruppes(dollar); 
    printf("%f", value);
}