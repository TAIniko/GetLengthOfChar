/* ex72.cpp  */
#include <stdio.h>
int main(void)
{
  int i, ct = 0;
  char c[256];
  printf("��������͂��Ă�������:");
  scanf("%s", c);

  printf("���͂��ꂽ�������%s�ł�\n", c);
  for (i = 0; i < 256; i++)
  {
    if (c[i] != 0)
      ct = ct + 1;

    printf("���͂��ꂽ��������%d�ł��B\n", ct);
  }
  return 0;
}