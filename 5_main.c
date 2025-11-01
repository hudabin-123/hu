//202510302225
//1749919461@qq.com
//胡大彬
#include <stdio.h>
 int main() {
     int n, is_prime = 1, i = 2;
     printf("请输入小于50的正整数：");
     scanf("%d", &n);
     
     // 质数判断逻辑（用while循环替代for循环）
     if (n <= 1) {
         is_prime = 0;
     } else {
         while (i < n) {
             if (n % i == 0) {
                 is_prime = 0;
                 break;
             }
             i++; // 循环变量自增
         }
     }
     
     // 输出结果
     if (is_prime) {
         printf("密钥安全，密码设置成功\n");
     } else {
         printf("密钥不安全，请重新输入\n");
     }
     return 0;
 }
