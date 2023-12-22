#include<stdio.h>
#include<math.h>

double f(double x){
    return x*log10(x) - 1.2 ;
}

double df(double x){
    return log10(x) + 0.4343 ;
}

int main(){

    double e , x0 ,x1 ;
    int n; 

    printf("Enter the number of iteration:");
    scanf("%d" , &n) ; 

    printf("Enter the initial gauss:");
    scanf("%lf" , &x0) ;

    printf("Enter the value of tolerance:");
    scanf("%lf" , &e ) ; 
    
    // printf("%lf",e);

    double p ; 
    for(int i= 1 ; i<=n ; i++){
        p =  f(x0)/df(x0);
        x1 = x0 - p ; 
        
        printf("At iteration %d value of x is : %f\n" ,i, x1) ;

        if( fabs(p) < e ){
            printf("The root is : %lf" , x1) ;
            break;
        }
        x0 = x1;
    }
    printf("hence ans is :%lf" , x1);
    

    return 0 ; 
}