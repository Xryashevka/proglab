#include <stdio.h>

int main()
{
  int num = 0, arg = 0;
  scanf("%d", &num);
  arg = (11 < num) ? (num < 12) ? 1 : 0: 0;
  printf("%d\n", arg);
  printf("%d", (num >> 11) % 2);
  return 0;
]
