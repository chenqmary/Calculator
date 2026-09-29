#include <stdio.h>
#include "utils.h"

void clear_input(void) {
int c;

while ((c=getchar()) != '\n' && c != EOF) {
}
}