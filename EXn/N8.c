#include <stdio.h>
int main(){
float number ;
printf("enter your number :");
scanf("%f", &number);
int Xnumber = 1;
    if(number < 10){
        Xnumber = 1;
    }
    else {
         while(number >= 10){
            Xnumber++;
           number/= 10;
        }
    }
    printf("Xnumber is %d\n",Xnumber);
}