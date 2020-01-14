#include <string.h>
#include <stdio.h>

int main(void)
{

  char test1[10] = "abcdef";
  char test2[20] = "‚ ‚¢‚¤‚¦‚¨";

  int len1,
      len2,
      len2_cr;

  //  test1‚Ì•¶š—ñ‚Ì’·‚³‚ğæ“¾
  len1 = strlen(test1);

  // test2‚Ì•¶š—ñ‚Ì’·‚³‚ğæ“¾
  len2 = strlen(test2);
  len2_cr = len2 / 2;

  // •\¦
  printf("test1‚Ì•¶š—ñ‚Ì’·‚³‚ÍF%d\n", len1);
  printf("test2‚Ì•¶š—ñ‚Ì’·‚³‚ÍF%d\n", len2_cr);

  return 0;
}