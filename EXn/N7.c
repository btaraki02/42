#include <stdio.h>
long long unsigned int fol(unsigned int Fack){
     long long unsigned int Xfact = 1;
 while(Fack > 1){
        Xfact *= Fack;
        Fack--;
    }
    return Xfact;
}
int main(){
    unsigned int Fact;
    printf("enter your number : ");
    scanf("%u", &Fact);
    printf("Factoril is %llu\n",fol(Fact));
}