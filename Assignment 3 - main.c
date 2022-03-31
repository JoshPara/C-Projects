//This is a menu driven application to compute properties of a sphere
#include <stdio.h>
#include <stdlib.h>

void menu();

int main(void){
    int selection;
    double diameter = -1;
    double radius;
    double PI=3.1416;
    double surface_area;
    double cir;
    double volume;
    do{
    menu();
    scanf("%i", &selection);
    printf("\n");
    switch(selection){
    case 1:
        while(diameter < 0.0){
        puts("Calculating Radius:");
        printf("Please Enter Diameter: ");
        scanf("%lg", &diameter);
        if(diameter < 0.0){
            puts("\nError: Invalid Diameter. Must be greater than or equal to 0.0");
            puts("-------------------------------------------------------------");
        }
        }
        radius = diameter / 2;
        printf("For a sphere with a diameter of %g, the radius is %g \n", diameter, radius);
        puts("-------------------------------------------------------------");
        printf("\n");
        diameter = -1;
        continue;

    case 2:
        while(diameter < 0.0){
        puts("Calculating Surface Area:");
        printf("Please Enter Diameter: ");
        scanf("%lg", &diameter);
        if(diameter < 0.0){
            puts("\nError: Invalid Diameter. Must be greater than or equal to 0.0");
            puts("-------------------------------------------------------------");
        }
        }
        radius = diameter / 2;
        surface_area = 4 * PI * radius * radius;
        printf("For a sphere with a diameter of %g, the surface area is %g \n", diameter, surface_area);
        puts("-------------------------------------------------------------");
        printf("\n");
        diameter = -1;
        continue;

    case 3:
        while(diameter < 0.0){
        puts("Calculating Circumference:");
        printf("Please Enter Diameter: ");
        scanf("%lg", &diameter);
        if(diameter < 0.0){
            puts("\nError: Invalid Diameter. Must be greater than or equal to 0.0");
            puts("-------------------------------------------------------------");
        }
        }
        cir = PI * diameter;
        printf("For a sphere with a diameter of %g, the circumference is %g \n", diameter, cir);
        puts("-------------------------------------------------------------");
        printf("\n");
        diameter = -1;
        continue;

    case 4:
        while(diameter < 0.0){
        puts("Calculating Volume:");
        printf("Please Enter Diameter: ");
        scanf("%lg", &diameter);
        if(diameter < 0.0){
            puts("\nError: Invalid Diameter. Must be greater than or equal to 0.0");
            puts("-------------------------------------------------------------");
        }
        }
        radius = diameter / 2;
        volume = 4 * PI / 3 * radius * radius * radius;
        printf("For a sphere with a diameter of %g, the volume is %g \n", diameter, volume);
        puts("-------------------------------------------------------------");
        printf("\n");
        diameter = -1;
        continue;

    case 5:
        break;
    default:
        puts("Error: Invalid Menu Selection.");
        puts("-------------------------------------------------------------\n");

    }
    }while(selection != 5);
    return 0;
}

void menu(){
    printf("\t\t PROPERTIES OF SPHERE \n");
    printf("1. Calculate Radius \n");
    printf("2. Calculate Surface \n");
    printf("3. Calculate Circumference \n");
    printf("4. Calculate Volume \n");
    printf("5. Quit. \n");
    printf("Select: ");
}
