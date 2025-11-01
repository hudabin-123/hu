//202510302225
//179919461@qq.com
//胡大彬
#include <stdio.h>
 int main() {
     int num, digit1, digit2, digit3; // digit1=百位，digit2=十位，digit3=个位
     int count = 0; // 用于控制空格（避免最后一个数后有空格）
     
     // 遍历100到999的所有数
     for (num = 100; num <= 999; num++) {
         // 提取百位、十位、个位
         digit1 = num / 100;
         digit2 = (num / 10) % 10;
         digit3 = num % 10;
         
         // 判断是否为水仙花数（各位立方和等于自身）
         if (digit1*digit1*digit1 + digit2*digit2*digit2 + digit3*digit3*digit3 == num) {
             if (count > 0) {
                 printf(" "); // 非第一个数前加空格
             }
             printf("%d", num);
             count++;
         }
     }
     printf("\n");
     return 0;
