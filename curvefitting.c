#include<stdio.h>

// void solve(float matrix[3][4]){
//     for(int i = 0 ; i<3 ; i++){
//         for(int j = 0 ; j<4 ; j++){
//             scanf("%f" , &matrix[i][j]);
//         }
//     }
// }

int main(){

    float x[10];
    float y[10] ; 
    float sumX = 0.0, sumY = 0.0, sumXY =0.0, sumX2=0.0 , sumX3 =0.0, sumX4 =0.0 , sumX2Y = 0.0; 
    int n ; 
    float matrix[3][4] ; 


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

    printf("%.2f ,%.2f ,%.2f ,%.2f ,%.2f ,%.2f ,%.2f", sumX , sumY , sumXY , sumX2 , sumX3 , sumX4 , sumX2Y);

    // solve(matrix);
    printf("\nsolveing for a , b , c\n");

    float a1 =n , b1 =sumX , c1 = sumX2, d1=sumY; 
    float a2 =sumX , b2 = sumX2, c2 =sumX3 , d2= sumXY; 
    float a3 = sumX2, b3 = sumX3, c3 = sumX4, d3= sumX2Y; 


    float det = a1 * (b2 * c3 - b3 * c2) - b1 * (a2 * c3 - a3 * c2) + c1 * (a2 * b3 - a3 * b2);
    float a , b, c;
    if (det == 0) {
        printf("The system of equations has no unique solution.\n");
    } else {
        a = (d1 * (b2 * c3 - b3 * c2) - b1 * (d2 * c3 - d3 * c2) + c1 * (d2 * b3 - d3 * b2)) / det;
        b = (a1 * (d2 * c3 - d3 * c2) - d1 * (a2 * c3 - a3 * c2) + c1 * (a2 * d3 - a3 * d2)) / det;
        c = (a1 * (b2 * d3 - b3 * d2) - b1 * (a2 * d3 - a3 * d2) + d1 * (a2 * b3 - a3 * b2)) / det;

        printf("Solution: a = %.2f, b = %.2f, c = %.2f\n", a,b,c);
    }
    return 0 ; 
}