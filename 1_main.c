//202510302225
//1749919461@qq.com
//胡大彬
#include <stdio.h>
 int main() {
     int n, is_prime = 1; // is_prime=1表示默认是质数
     // 接收用户输入小于50的正整数
     printf("请输入小于50的正整数：");
     scanf("%d", &n);
     
     // 质数判断（1不是质数，2及以上需判断是否能被2到n-1整除）
     if (n <= 1) {
         is_prime = 0;
     } else {
         for (int i = 2; i < n; i++) {
             if (n % i == 0) { // 能被其他数整除，不是质数
                 is_prime = 0;
                 break;
             }
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
