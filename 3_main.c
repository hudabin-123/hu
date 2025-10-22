//202510302225
//1749919461@qq.com
//胡大彬
#include <stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    switch(op){
        case'+':
        printf("%d\n",a+b);
        break;
        case'-':
        printf("%d\n",a-b);
        break;
        case'*':
        printf("%d\n",a*b);
        break;
        case'/':
        printf("%d\n",a/b);
        break;
    }
return 0;
}
