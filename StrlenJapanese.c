#include <string.h>
#include <stdio.h>

int main(void)
{

  char test1[10] = "abcdef";
  char test2[20] = "あいうえお";

  int len1,
      len2,
      len2_cr;

  //  test1の文字列の長さを取得
  len1 = strlen(test1);

  // test2の文字列の長さを取得
  len2 = strlen(test2);
  len2_cr = len2 / 2;

  // 表示
  printf("test1の文字列の長さは：%d\n", len1);
  printf("test2の文字列の長さは：%d\n", len2_cr);

  return 0;
}