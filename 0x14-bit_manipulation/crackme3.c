#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char password[] = "password123"; // replace with actual password
  if (argc == 2 && strcmp(argv[1], password) == 0) {
    printf("Congratulations!\n");
  } else {
    printf("ko\n");
  }
  return (0);
}
