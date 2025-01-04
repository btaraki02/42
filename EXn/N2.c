#include <stdio.h>
void Result(float n){
    if(n < 10){
        printf("you are failed F !\n");
    }
    else if(n < 15){
        printf("perfect B\n");
    }
    else if(n == 20){
        printf("excellent A+\n");
    }
    else{
        printf("again \n");
    }

}
int main(){
    printf("\tHi\n");
    int student[6];
    int i = 0;
    float s = 0;
    while(i < 5){
        printf("Enter your result in test %d : ",i + 1);
        scanf("%d",&student[i]);
        s += (float)student[i];
        i++;
    }
    float n = s / i;
    Result(n);
    printf("your Average is %.2f\n",n);
    return 0;
}