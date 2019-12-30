for (i = 0; i <= 2; i++)
  {
    for (j = 0; j <= i; j++)
    {
      printf(" ");
    }
    for (k = 0; k <= 4 - 2 * i; k++)
    {
      printf("*");
    }
    printf("\n");
  }