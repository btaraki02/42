#include <stdio.h>
#include <unistd.h>
void fft(char *name){
    int i = 0;
    while(name[i] != '\0'){
        write(1 , &name[i] , 1);
        i++;
    }
    write(1 , "\n" , 1);
}
int main(int argc,char *argv[]){
    char name[] = "BILAL TARAKI";
    char *poi = name;
    fft(poi);
}