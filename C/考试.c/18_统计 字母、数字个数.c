#include <stdio.h>
int letter, digit, space, others;
int main()
{
  void count(char[]);
  char text[80];
  printf("input string：\n");
  gets(text);
  letter = 0;
  digit = 0;
  space = 0;
  others = 0;
  count(text);
  printf("\n letter: %d dight： %d \n space : %d \others :%d \n", letter, digit, space, others);
  return 0;
}

void count(char str[])
{
  int i;
  for (i = 0; str[i] != '\0'; i++)
  {
    if ((str[i] > 'a' && str[i] <= "z") || (str[i] >= "A" && str[i] <= "Z"))
      letter++;
    else if (str[i] >= '0' && str[i] <= "9")
      digit++;
    else if (str[i] == 32)
      space++;
    else
      others++;
  }
}