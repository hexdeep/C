#include<stdio.h>

void main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);

    if(marks >= 33){

        if(marks <= 40){
            printf("Your Grade is D and Grade Point is 4.0\n");
        }
        else if(marks > 40 && marks <= 50 ){
            printf("Your Grade is C2 and Grade Point is 5.0\n");
        }
        else if(marks > 50 && marks <=60  ){
            printf("Your Grade is C1 and Grade Point is 6.0\n");
        }
        else if(marks>60 && marks<=70){
            printf("Your Grade is B2 and Grade Point is 7.0\n");
        }
        else if(marks>70 && marks<=80){
            printf("Your Grade is B1 and Grade Point is 8.0\n");
        }
        else if(marks>80 && marks<=90){
            printf("Your Grade is A2 and Grade Point is 9.0\n");
        }
        else if(marks>90 && marks<=100){
            printf("Your Grade is A1 and Grade Point is 10.0\n");
        } 
     }
    
    else if(marks >= 0 && marks < 33){
         if(marks < 33 && marks >= 21){
             printf("You are Fail and Grade Point is 3.0");
         }
         else if(marks < 21 && marks > 0){
             printf("You are Fail and Grade Point is 2.0");
         }
     }

    else{
        printf("Invalid\n");
    }

    
}