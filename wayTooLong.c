#include "stdio.h"

int main(){
    int a;
    scanf("%d",&a);
    for(int i=1; i<=a; i++){
        char str[100];
        scanf("%s",str);
        char *ptr = &str[0], last, first = ptr[0];
        int count = 0;
        for(int i = 0; ptr[i] != '\0'; i++){
            last = ptr[i];
            count++;
        }
        if(count>10){
            printf("%c%d%c\n",first,(count-2),last);
        }
        else{
            printf("%s\n",ptr);
        }
    }  
    return 0;
}