#include <stdio.h>
int main(){
    int number = -1;
    do{
    printf("Enter a number between 9 and 0 :");
    scanf("%d", &number);}while(number < 0 || number > 9);
    switch (number){
            case 0 :
            printf("ZERO\n");
        break;
            case 1 :
            printf("ONE\n");
        break;
            case 2 :
            printf("TOW\n");
        break;
            case 3 :
            printf("THREE\n");
        break;
            case 4 :
            printf("FOUR\n");
            break;
        case 5 :
            printf("FIVE\n");
            break;
         case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        default :
            printf("ERROR!\n");
            return 1;
    }
    return 0;
}
