#include<stdio.h>

int main(){

    float x[10];
    float y[10] ; 
    float sumX = 0.0, sumY = 0.0, sumXY =0.0, sumX2=0.0 , sumX3 =0.0, sumX4 =0.0 , sumX2Y = 0.0; 
    int n ; 

    printf("\nCurve fitting\n");
    printf("Enter the value of n:");
    scanf("%d" , &n);

    printf("Enter the values of X:\n");
    for(int i= 0 ; i<n ; i++){
        scanf("%f" , &x[i]);
    }

    printf("Enter the values of Y:\n");
    for(int i= 0 ; i<n ; i++){
        scanf("%f" , &y[i]);
    }

    for(int i = 0 ; i<n ; i++){
        sumX = sumX + x[i];
        sumY = sumY + y[i];
        sumXY = sumXY + x[i] * y[i];
        sumX2 = sumX2 + x[i] * x[i] ; 
        sumX3 = sumX3 + x[i] * x[i] * x[i] ;
        sumX4 = sumX4 + x[i] * x[i] * x[i] * x[i] ;
        sumX2Y = sumX2Y + x[i] * x[i] * y[i];

    }

    printf("%f ,%f , %f,%f , %f, %f, %f" , sumX , sumY , sumXY , sumX2 , sumX3 , sumX4 , sumX2Y);


    return 0 ; 
}