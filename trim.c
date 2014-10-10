#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <ctype.h>
#include "buffer.h"

enum {
  version_major = 0,
  version_minor = 1,
  version_patch = 0
};

static const char  program_name[]   = "trim";

/*
static void version(FILE* output) {
  fprintf(output, "%s version %d.%d.%d\n",
    program_name,
    version_major,
    version_minor,
    version_patch);
}
*/

void print(buffer_t *buffer) {
  buffer_trim(buffer);
  puts(buffer->data);
  buffer_clear(buffer);
}

int main(int argc, char** argv) {

  (void)argc;
  (void)argv;

  puts(program_name);


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
