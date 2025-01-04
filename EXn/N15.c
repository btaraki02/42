xXxXxXxXx



#include <stdio.h>
int main(){
char text[100];
int again = 0;
printf("enter your text :");
fgets(text , 100,stdin);
int i = 0;
while(text[i] != '\0'){
    if(text[i] < 'z' && text[i] >'a'){
       text[i] = text[i] - 32;
    }
    i++;
}
i = 0;
int j ;
while(text[i] != '\0'){
    j = i +1;
    while(text[j] != '\0'){
        if(text[i] == text[j]){
            again++;
        }
        j++;
    }
    i++;
}
printf("%d\n", again);
return 0;
}