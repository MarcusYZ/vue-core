#include <stdio.h>
#include <math.h>
int main()
{
  int num, indiv, ten, hundred, thousand, ten_thousand, place;
  printf("请输入一个数");
  scanf("%d", &num);
  if (num > 9999)
  {
    place = 5;
  }
  else if (num > 999)
  {
    place = 4;
  }
  else if (num > 99)
  {
    place = 3;
  }
  else if (num > 9)
  {
    place = 2;
  }
  else
    place = 1;
  printf("位数 %d \n", place);
  ten_thousand = num / 10000;
  thousand = (int)(num - ten_thousand * 10000) / 1000;
  hundred = (int)(num - ten_thousand * 10000 - thousand * 1000);
  ten = (int)(num - ten_thousand * 10000 - thousand * 1000 - hundred * 100);
  indiv = (int)(num - ten_thousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10);
  return 0;
  switch (place)
  {
  case 5:
    printf("%d,%d,%d,%d,%d", ten_thousand, thousand, hundred, ten, indiv);
    printf("反序数字为:");
    printf("%d,%d,%d,%d,%d", indiv, ten, hundred, thousand, ten_thousand);
    break;
  }
  return 0;
}
