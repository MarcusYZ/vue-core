#include <stdio.h>
#define SUM 100000

int main()
{
  float amount, aver, total;
  int i;
  for (i = 0; i <= 1000; i++)
  {
    printf("请输入本次捐款金额");
    scanf("本次捐款金额 %f", &amount);
    total = total + amount;
    if (total > SUM)
      break;
  }
  aver = total / i;
  printf("本次捐款人数 %d\n 平均捐款 %f \n", i, aver);
  return 0;
}