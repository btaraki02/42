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
    int size[number];
    i = 0;
        int j = number -1 ;
    while(i < number){
        size[i] = array[j];
        i++;
        j--;
    }
        i = 0;
    while(i < number){
        array[i] = size[i];
        i++;
    }
         i = 0;
    while(i < number){
        printf("array[%d] = %d\n",i,array[i]);
        i++;
    }
    return 0;
}