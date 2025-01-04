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
    i = 0;
    int swap;
    while(i< number/2){// /2 kat3ny bely 9elbna nessf dyal majmo3a.
        swap = array[i];
        array[i] = array[number - i -1];
        array[number - i -1] = swap; 
        i++;
    }
    i = 0;
    while(i < number){
        printf("array[%d] = %d\n",i,array[i]);
        i++;
    }
    return 0;
}