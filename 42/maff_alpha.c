#include <unistd.h>
int main(){
        int i = 97;
        while(i < 123){
                if(i % 2 == 0){
                        int upper_case = i - 32;
                        write(1 , &upper_case, 1);
                        }else{
                write(1 ,&i, 1);
                        }
                i++;
        }
        write(1 ,"\n", 1);
        return 0;
}