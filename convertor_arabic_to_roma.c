#include <stdio.h>

int main()
{
    int x = 19;
    
    if(x == 0)
      printf("V římských číslicích není označení pro nulu!");
    
    if(x > 0){
      while(x != 0){
        switch(x){
            case 1000 ... 100000:
              printf("M");
              x -= 1000;
              break;
            case 900 ... 999:
              printf("CM");
              x -= 900;
              break;
            case 500 ... 899:
              printf("D");
              x -= 500;
              break;
            case 400 ... 499:
              printf("CD");
              x -= 400;
              break;
            case 100 ... 399:
              printf("C");
              x -= 100;
              break;
            case 90 ... 99:
              printf("XC");
              x -= 90;
              break;
            case 50 ... 89:
              printf("L");
              x -= 50;
              break;
            case 40 ... 49:
              printf("XL");
              x -= 40;
              break;
            case 10 ... 39:
              printf("X");
              x -= 10;
              break;
            case 9:
              printf("IX");
              x -= 9;
              break;
            case 5 ... 8:
              printf("V");
              x -= 5;
              break;
            case 4:
              printf("IV");
              x -= 4;
              break;
            case 1 ... 3:
              printf("I");
              x -= 1;
              break;
        }
      }
    }else
    printf("Římané neměli záporná čísla!");
    return 0;
}
