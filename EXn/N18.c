#include <stdio.h>
#include <unistd.h>

void pr_int(int number,char C){
    while(0 < number){
        write(1 ,&C , 1);
        number--;
    }
}
void if_el(char *text){
    int i = 0;
    int j;
    while(text[i] != '\0'){
        j = 65;
        while(j <= 126){
            if(text[i] == j){
                pr_int(j % 65,j);
            }
         j++;
        }
        i++;
    }
}
int main(){
    char text[] = "Abcfx";
    if_el(text);
}