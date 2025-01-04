#include <stdio.h>
#include <unistd.h>

void pr_int(int number,char C){
    while(0 < number){
        write(1 ,&C , 1);
        number--;
    }
}
void if_el(char *Alphabet,char *text){
    int i = 0;
    int j;
    while(text[i] != '\0'){
        j = 1;
        while(Alphabet[j - 1] != '\0'){
            if(text[i] == Alphabet[j - 1]){
                pr_int(j,Alphabet[j - 1]);
            }
         j++;
        }
        i++;
    }
}
int main(){
    char Alphabet[]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char text[] = "abx";
    if_el(Alphabet,text);
}