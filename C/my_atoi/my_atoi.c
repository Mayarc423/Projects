#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("Usage %s <number>\n", argv[0]);
    return EXIT_FAILURE;
  }
 int var = atoi(argv[1]);
  printf("var = %d\n", var);
  return EXIT_SUCCESS;
}
