#include <stdio.h>
int main()
{
  float average(float array[10]);
  float score[10], aver;
  int i;
  printf("input 10 scores:\n");
  for (i = 0; i < 10; i++)
    scanf("%f", &score[i]);
  // 输入
  printf("\n");
  printf("average score  is %5.2f \n", aver);
  return 0;
}
float average(float array[10])
{
  int i;
  float aver, sum = array[0];
  for (i = 1; i < 10; i++)
  {
    aver = sum / 10;
    return (aver);
  }
}