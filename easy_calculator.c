#include <stdio.h>

int main()
{
    int x;
    char y;
    int z;
    scanf("%i%c%i",&x,&y,&z);
    if(y=='+'||y=='-'||y=='*'||y=='/'||y=='%'){
      switch(y){
        case '+':
          x+=z;
          break;
        case '-':
          x-=z;
          break;
        case '*':
          x*=z;
          break;
        case '/':
          x/=z;
          break;
        case '%':
          x%=z;
          break;
      }
      printf("%i",x);
    }else
    fprintf(stderr,"Chyba!");
    return 0;
}
