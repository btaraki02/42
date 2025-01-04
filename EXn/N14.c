#include <stdio.h>
int main(){
     int number = 0;
     int Even = 0;
     int Odd = 0;
    do{
    printf("enter the size of the array : ");
    scanf("%d",&number);
    }while(number <= 0);
    int array[number];
    int i = 0;
    while( i < number){
        printf("enter the Value %d:",i + 1);
        scanf("%d",&array[i]);
        i++;
    }
    i = 0;
    while(i < number){
        if(array[i] % 2 == 0){
            Even+= array[i];
        }
        else{
            Odd+= array[i];
        }
        i++;
    }
        printf("the total Even number is : %d\n",Even);
        printf("the total Odd number is : %d\n",Odd);
    return 0;
}