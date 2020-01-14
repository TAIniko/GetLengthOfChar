#include <string.h>
#include <stdio.h>

int u8len(const char *str);

int main(void)
{
  const char *str = u8"TEST用の文字列";
  printf("%d", u8len(str));
  return 0;
}

int u8len(const char *str)
{
  int cnt = 0;
  while (*str != '\0')
  {
    if ((*str & 0xC0) != 0x80)
    {
      cnt++;
    }
    str++;
  }
  return cnt;
}
