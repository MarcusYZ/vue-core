#include <stdio.h>
int main()
{
  char string[81];
  int i, num = 0, word = 0;
  char c;
  gets(string); //输入一个字符串给字符数组string
  for (i = 0; (c = string[i]) != '\0'; i++)
  { //只要字符不是\0就继续执行循环
    if (c == ' ')
      // 如果是空格子就让word置0
      word = 0;
    else if (word == 0)
    // 如果不是空格子且word原值为0
    {
      // 使word置1
      // 单词数+1
      word = 1;
      num++;
    }
    printf("There are %d words in this line \n", num);
  }
  return 0;
}

// 输入数组，循环 如果是空字符串就把word置0，如果word ==0把word置为1，并且单词数+1