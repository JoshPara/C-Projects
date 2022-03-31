//This is a program that will calculate the BMI of a user entered weight (in LBS) and height (in Inches)
#include <stdio.h>

int main(void){
    double weight_in = -10;
    while(weight_in <= 0.0 || weight_in >= 1000.0){
    printf("enter weight in lbs: \n");
    scanf("%lg", &weight_in);
        if(weight_in <= 0.0 || weight_in >= 1000.0){
            puts("Error Invalid Weight!");
            puts("---------------------");
        }
        else break;
    }
    double HEIGHT = -10;
    while(HEIGHT <= 0.0 || HEIGHT >= 120.0){
    printf("Enter Height in Inches: \n");
    scanf("%lg", &HEIGHT);
        if(HEIGHT <= 0.0 || HEIGHT >= 120.0){
            puts("Error Invalid Number!!");
            puts("----------------------");
        }
        else break;
    }
    double BMI;
    BMI =  (weight_in / (HEIGHT * HEIGHT))*703;
    printf("The BMI of someone who is %g lbs and %g inches = %g \n\n",weight_in, HEIGHT, BMI);
    if(BMI < 18.5){
        puts("Underweight \n");
    }
    else if(BMI <= 24.9 && BMI >= 18.5){
        puts("Normal \n");
    }
    else if(BMI <= 29.9 && BMI >= 25.0){
        puts("Overweight \n");
    }
    else{
        puts("Obese \n");
    }
    return 0;
}
