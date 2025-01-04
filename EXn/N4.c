#include <stdio.h>
int main(){
    int number = 0;
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
    int Comparison = array[0];
    i = 0;
    while(i < number){
        if(Comparison < array[i]){
            Comparison = array[i];
        }
        i++;
    }
    printf( "The greatest value is %d\n", Comparison);
}