#include <stdio.h>
 // find the simple interest of 
 // x rupees over y years at z interest 
 int main() {
    int x, y, z, simpleInterest;
   
    printf("enter the amount=");
    scanf("%d", &x);
    
    printf(" years=");
    scanf ("%d" , &y);
    
    printf(" rate of interest= ");
    scanf("%d", &z);
   
   
    simpleInterest = (x*y*z)/100;
    printf("simple interest= %d", simpleInterest);

}


 
