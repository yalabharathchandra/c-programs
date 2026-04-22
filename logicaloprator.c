#include <stdio.h>

int main(){
char ch;
printf("enter the charecter\n");
scanf("%c",& ch);
int res=(ch>='A')&&(ch<='z');
printf("%c is a upper case alphabet i.e%d",ch,res);

   return 0;
}