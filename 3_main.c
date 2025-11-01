//202510302225
//1749919461@qq.com
//胡大彬
#include <stdio.h>
 int main() {
     int num = 100, digit1, digit2, digit3;
     int count = 0;
     
     // 用while循环遍历100到999
     while (num <= 999) {
         digit1 = num / 100;
         digit2 = (num / 10) % 10;
         digit3 = num % 10;
         
         if (digit1*digit1*digit1 + digit2*digit2*digit2 + digit3*digit3*digit3 == num) {
             if (count > 0) {
                 printf(" ");
             }
             printf("%d", num);
             count++;
         }
         num++; // 循环变量自增
     }
     printf("\n");
     return 0;
 }
