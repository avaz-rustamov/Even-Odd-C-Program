#include <stdio.h>
   int toqmi(int *no){
   if (*no % 2 == 0)
    return 2;
   else
    return 1;
   }

int main(){

    int num;
    printf("Iltimos Son Kititing\n");
    scanf("%d", &num);

    if (toqmi(&num) == 2){
        printf("Number Even ");}
    else if (toqmi(&num) == 1){
        printf("Number Odd ");
        }






  return 0;
}
