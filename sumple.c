/* ex72.cpp  */
#include <stdio.h>
int main(void)
{
  int i, ct = 0;
  char c[256];
  printf("文字を入力してください:");
  scanf("%s", c);

  printf("入力された文字列は%sです\n", c);
  for (i = 0; i < 256; i++)
  {
    if (c[i] != 0)
      ct = ct + 1;

    printf("入力された文字数は%dです。\n", ct);
  }
  return 0;
}