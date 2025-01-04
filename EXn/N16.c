#include <stdio.h>
int main()
{
    int array[] = {1,12,34,54,67};
    int *pointer = array;
    int n = sizeof(array) / sizeof(array[0]);
    while(pointer < n + array){
        printf("%d\n",*pointer);
        pointer++;
    }
    return 0;
}