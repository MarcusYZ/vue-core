#include <stdio.h>
int main()
{
  void inv(int x[], int n);
  // 声明函数
  int i, a[10] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};
  // 声明整型变量i 和数组变量a[10];
  printf("The orginal array: \n");
  for (i = 0; i < 10; i++)
    printf("%d", a[i]);
  // 输出未交换时数组各元素的值
  printf("\n");
  inv(a, 10);
  // 调用函数进行交换
  printf("The array has been inverted:\n");
  for (i = 0; i < 10; i++)
    printf("%d ", a[i]);
  // 输出交换后各元素的值
  printf("\n");
  return 0;
}

void inv(int x[], int n)
{
  // 形参x是数组名
  int temp, i, j, m = (n - 1) / 2;
  // m是长度-1 再除以2
  for (i = 0; i <= m; i++)
  {
    // 获取j的值注意进行交换
    j = n - 1 - i;
    temp = x[i];
    x[i] = x[j];
    x[j] = temp;
  }
  return;
}