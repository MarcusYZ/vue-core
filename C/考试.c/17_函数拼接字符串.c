#include <stdio.h>

int main()
{
  void concatence(char string1[], char string2[], char string[]);
  char s1[100], s2[100], s[100];
}

void concatence(char string1[], char string2[], char string[])
{
  int i, j;
  for (i = 0; string1[i] != "\0"; i++)
    string[i] = string1[i];
  for (j = 0; string2[j] != "\0"; j++)
    string[i + j] = string2[j];
  string[i + j] = "\0";
}