#include<stdio.h>

int main(){
    int choice;
    float num, result;
    
    char again;

    printf("======MY CALCULATOR =======\n");

    printf("1. addition\n");
    printf("2. subtraction\n");
    printf("3. multiplication\n");
    printf("4. division\n");

    printf("enter your choice: \n");
    scanf("%d", &choice);

    printf("enter the number: \n");
    scanf("%f",&result);

    do{
        printf("enter another number: \n");
        scanf("%f", &num);

        switch(choice){
            case 1: 
            result += num;
            break;

            case 2:
            result -= num;
            break;

            case 3:
            result *= num;
            break;

            case 4:
            if(num==0){
                printf("cannot divide by zero\n");
                continue;
            }
            result /= num;
            break;

            default:
            printf("invalid choice!!\n");

            return 0;
        }
        printf("Do you want to enter another number\n");
        scanf(" %c", &again);
    }while(again == 'y' || again =='Y');

    printf("final result = %g \n", result); // %g= format specifier

    return 0;
}