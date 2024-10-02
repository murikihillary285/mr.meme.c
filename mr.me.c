#include <stdio.h>
int main() {
    float principal, rate, time;
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    
    printf("Enter time period (in years): ");
    scanf("%f", &time);
    
    printf("Simple Interest: %f\n");
    printf("Compound Interest: %f\n");
    
    return 0;
}