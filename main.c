#include <stdio.h>

int main(void) {
  int beer, sake;
  int total;

  scanf("%d", &beer);
  scanf("%d", &sake);
  total = beer * 500 + sake * 700;

  if (beer >= 5 || sake >= 3) {
    total = total * 0.8;
  }

  printf("%d\n", total);
  return 0;
}