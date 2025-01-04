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
    int Comparison_max = array[0];
    int Comparison_min = array[0];
    i = 0;
    while(i < number){
        if(Comparison_max < array[i]){
            Comparison_max = array[i];
        }
        if(Comparison_min > array[i]){
            Comparison_min = array[i];
        }
        i++;
    }
    printf( "The max value is %d\n", Comparison_max);
        printf( "The min value is %d\n", Comparison_min);

}