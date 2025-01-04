#include <stdio.h>
int main(){
    int array[3];
    int i = 0;
    while(i < 3 ){
        printf("enter your Value %d :",i + 1);
        scanf("%d",&array[i]);
        i++;
    }
    i =0;
    int  j;
    while(i < 3){
        j = 0;
        while( j < 3){
            if(array[j] < array[j + 1]){
                int m = array[j];
                array[j] = array[j + 1];
                array[j + 1] = m;
            }
            j++;
        }
    i++;
    }
    i = 0;
     while(i < 3 ){
        printf(" Value %d : %d \n",i + 1,array[i]);
        i++;
    }
    return 0;
}