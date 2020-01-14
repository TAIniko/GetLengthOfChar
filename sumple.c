/* ex72.cpp  */
#include <stdio.h>
int main(void)
{
  int i, ct = 0;
  char c[256];
  printf("•¶Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
  scanf("%s", c);

  printf("“ü—Í‚³‚ê‚½•¶Žš—ñ‚Í%s‚Å‚·\n", c);
  for (i = 0; i < 256; i++)
  {
    if (c[i] != 0)
      ct = ct + 1;

    printf("“ü—Í‚³‚ê‚½•¶Žš”‚Í%d‚Å‚·B\n", ct);
  }
  return 0;
}