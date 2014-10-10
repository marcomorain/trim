#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <ctype.h>
#include "buffer.h"

static void print(buffer_t *buffer) {
  buffer_trim(buffer);
  puts(buffer->data);
  buffer_clear(buffer);
}

int main(int argc, char** argv) {

  (void)argc;
  (void)argv;

  buffer_t *buffer = buffer_new();

  while(1) {
    const int c = fgetc(stdin);
    if (c == '\n') {
      print(buffer);
    } else if (c == EOF) {
      break;
    } else {
      buffer_appendc(buffer, c);
    }
  }

  return EXIT_SUCCESS;
}
