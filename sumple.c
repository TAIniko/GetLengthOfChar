/* ex72.cpp  */
#include <stdio.h>
#include <string.h>

int main(void)
{
  int i, ct = 0;
  char c[256];
  printf("•¶š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
  scanf("%s", c);

  printf("“ü—Í‚³‚ê‚½•¶š—ñ‚Í%s‚Å‚·\n", c);

  // ÀsŒ‹‰Ê
  // •¶š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:
  //   ‚±‚ñ‚É‚¿‚Í
  //   “ü—Í‚³‚ê‚½•¶š—ñ‚Í‚±‚ñ‚É‚¿‚Í‚Å‚·

  ct = strlen(c);
  // for (i = 0; i < 256; i++)
  // {
  //   if (c[i] != 0)
  //     ct = ct + 1;

  printf("“ü—Í‚³‚ê‚½•¶š”‚Í%d‚Å‚·B\n", ct);
  // }
  return 0;
}