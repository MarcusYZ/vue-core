#include <stdio.h>
#include <string.h>

int main()
{
  void inverse(char str[]);
  // 声明函数
  char str[100];
  // 声明数组
  printf("input string:");
  scanf("%s", str);
  // 输入
  inverse(str);
  // 反转字符串
  printf("invers string: %s \n", str);
  // 输出
  return 0;
}

void inverse(char str[])
{
  char t;
  int i, j;
  // 声明变量
  for (i = 0, j = strlen(str); i < (strlen(str) / 2); i++, j--)
  {
    // for循环
    t = str[i];
    // 第三者存放进行交换。
    str[i] = str[j - 1];
    str[j - 1] = t;
  }
}