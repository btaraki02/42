#include <stdio.h>
void swap(int *p,int *p2){
    int tap =  *p;
     *p = *p2;
     *p2 = tap;
}
int main(){
    int a = 10;
    int b = 2;
    int *p = &a;
    int *p2 = &b;
    swap(&a,&b);
    printf("this is a = %d \n",a);
    printf("this is b = %d \n",b);
    return 0;
}