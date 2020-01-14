#include <string.h>
#include <stdio.h>

int main(void)
{
  /* 文字列内に\0でNULLを入れる場合の注意事項：
     \0の後ろに0-7の文字を記述すると8進数(3桁)と
     みなされるので\000としなくてはならない。
     尚、"1234\08"であればＯＫであるが、
     特に0-9の文字ならば混乱を避けるために
     "1234\0008"と表記した方が良い。
  */
  char str[] = "1234\0005"; /* str[6]と同じ */
  unsigned int len;

  printf("str[0]=0x%02x\n", str[0]); /* 0x31 */
  printf("str[1]=0x%02x\n", str[1]); /* 0x32 */
  printf("str[2]=0x%02x\n", str[2]); /* 0x33 */
  printf("str[3]=0x%02x\n", str[3]); /* 0x34 */
  printf("str[4]=0x%02x\n", str[4]); /* 0x00 */
  printf("str[5]=0x%02x\n", str[5]); /* 0x35 */

  len = strlen(str);
  printf("len=%d\n", len); /* 4 */
}