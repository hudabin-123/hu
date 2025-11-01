//202510302225
//1749919461@qq.com
//胡大彬
#include <stdio.h>
 int main() {
     int arr[5]; // 长度为5的数组
     int sum = 0;
     
     // 输入数组前四位
     printf("请输入数组前四位（空格分隔）：");
     for (int i = 0; i < 4; i++) {
         scanf("%d", &arr[i]);
         sum += arr[i]; // 累加前四位
     }
     arr[4] = sum; // 第五位赋值为前四位和
     
     // 输出完整数组（最后一位后无空格）
     for (int i = 0; i < 5; i++) {
         if (i > 0) {
             printf(" ");
         }
         printf("%d", arr[i]);
     }
     printf("\n");
     return 0;
 }
