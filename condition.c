#include <stdio.h>


void namota(int num){
    printf("#######################\n");
    printf("#        Namota       #\n");
    printf("#######################\n");
    
    printf("%d x 1 = %d\n",num,num*1);
    printf("%d x 2 = %d\n",num,num*2);
    printf("%d x 3 = %d\n",num,num*3);
    printf("%d x 4 = %d\n",num,num*4);
    printf("%d x 5 = %d\n",num,num*5);
    printf("%d x 6 = %d\n",num,num*6);
    printf("%d x 7 = %d\n",num,num*7);
    printf("%d x 8 = %d\n",num,num*8);
    printf("%d x 9 = %d\n",num,num*9);
    printf("%d x 10 = %d\n",num,num*10);
}

int main(){
    int num;
    printf("Enter A Number For Namota: ");
    scanf("%d",&num);
    namota(num);
   return 0;
}