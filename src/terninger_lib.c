
#include <stdlib.h>

// en funktionder ruller to terninger og ligger dem sammen
int sum_2_terning() {
  // variablerne for de to terninger
  int terning1;
  int terning2;

  // genrera de to terning ved hjælp af *rand()* vi bruger så modulus for at få
  // seks variabler.
  // de seks vrialber vil være mellem 0-5 så vi ligger 1 til for at få 1-6
  terning1 = rand() % 6 + 1;
  terning2 = rand() % 6 + 1;

  // regner summena af de to terninger
  int sum = terning1 + terning2;
  return sum;
}
