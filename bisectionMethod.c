#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x){
    return pow(x,3)-4.0*x-9.0;
}


int main(){

    float a , b  ; 
    float e ,x1 , f1; 

    printf("Enter the tolerance (e):");
    scanf("%f", &e);


    do{
        printf("Enter the initial value for a and b :");
        scanf("%f %f",&a ,&b);
    }while(f(a) * f(b) > 0);

    printf("\n--------------------------------------------------------------------\n");
    printf("\na\t\tb\t\tx1\t\tf(a)\t\tf(b)\t\tf(x1)\n");
    printf("\n--------------------------------------------------------------------\n");



    do{
        x1 = (a+b)/2;
        f1 = f(x1);

        printf("\n%f\t%f\t%f\t%f\t%f\t%f\n", a , b , x1 , f(a) , f(b) , f(x1));

        if(f1 == 0){
            printf("%The required root is:%f" , x1);
            exit(1);
        }else if(f1 < 0){
            a = x1 ;
        }else if(f1 > 0){
            b = x1;
        }
    }while( fabs(f1) > e );
    printf("\n--------------------------------------------------------------------\n");
    
    printf("\nThe required approx root is:%.3f",a);


    return 0;
}