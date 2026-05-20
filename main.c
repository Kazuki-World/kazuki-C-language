#include <stdio.h>

int main(void) {
  int general, major;
  scanf("%d", &general);
  scanf("%d", &major);

  if (general >= 32 && major >= 96) {
    printf("OK\n");
  } else {
    printf("NG\n");
  }
  return 0;
}