#include <stdio.h>
double Transformation_C(double Fahrenheit){
    double C = (Fahrenheit - 32) / 1.8;
    return C;
}
double Transformation_F(double Celsius){
    double F = Celsius * 1.8 + 32;
    return F;
}
int main(){
    char uit;
    double Fahrenheit;
    double Celsius;
    printf("is the Transformation F or C :");
    scanf("%c", &uit);
    if(uit == 'F' || uit == 'f'){
    printf("enter Fahrenheit F: ");
    scanf("%lf",&Fahrenheit);
    printf("Fahrenheit %.2lf = Celsius %.2lf\n ",Fahrenheit,Transformation_C(Fahrenheit) );
    }
    else if(uit == 'C' || uit == 'c'){
        printf("enter Celsius C: ");
    scanf("%lf",&Celsius);
    printf("Celsius %.2lf = Fahrenheit %.2lf\n ",Celsius,Transformation_F(Celsius) );
    }
    else{
        printf("Your letter is wrong\n");
    }
}