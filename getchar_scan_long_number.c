#include <stdio.h>

int main()
{
    int a = getchar();
    int b = getchar();
    a-=48;
    if ((a>=0)&&(a<=9)){
    while ((b >= '0')&&(b <= '9')&&(b != '\n')){
        a*=10;
        b-=48;
        a+=b;
        b=getchar();
        if (b=='\n'){
        printf("%i",a*3);
        break;}
        if ((b < '0') || (b > '9')){
        printf("%i",a*2);
        break;}
    }}else
    printf("0");
    if((a>=0)&&(a<=9)&&(b=='\n'))
    printf("%i",a*3);
    if((a>=0)&&(a<=9)&&(b!='\n')&&((b<'0')||(b>'9')))
    printf("%i",a*2);
    return 0;
}
