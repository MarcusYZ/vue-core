#include <stdio.h>
// 是预处理器指令，告诉 C 编译器在实际编译之前要包含 stdio.h 文件。
int main()
// 主函数，程序从这里开始执行。
{
  int x, y;
  // 定义整数
  printf("输入x:");
  // 打印
  scanf("%d", &x);
  // 输入
  if (x < 1)
  // 条件判断语句
  {
    y = x;
    printf("x = %3d, y=x=%d\n", x, y);
    // 输出
  }
  else if (x < 10)
  {
    y = 2 * x - 1;
    printf("x=%d, y = 2* x -1 =%d \n", x, y);
  }
  else
  {
    y = 3 * x - 11;
    printf("x=%d, y=3 *x-11 = %d\n", x, y);
  }
  return 0;
}