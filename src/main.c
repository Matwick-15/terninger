#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

int udfald_samlet[12] = {};

int main() {
  // seeder rand med tiden så den faktisk er tilfældig
  srand(time(NULL));

  // variabel til antal af rul
  int rul = 0;

  while (rul < 50000) {
    // liger udefaldet af to terninge ind i variablen *udfald*
    int udfald = sum_2_terning();

    // en switch kase der ligger 1 til antalet af forkomster af værdien i
    // *udfald*
    switch (udfald) {

    case (2):
      udfald_samlet[0]++;
      break;

    case (3):
      udfald_samlet[1]++;
      break;

    case (4):
      udfald_samlet[2]++;
      break;

    case (5):
      udfald_samlet[3]++;
      break;

    case (6):
      udfald_samlet[4]++;
      break;

    case (7):
      udfald_samlet[5]++;
      break;

    case (8):
      udfald_samlet[6]++;
      break;

    case (9):
      udfald_samlet[7]++;
      break;

    case (10):
      udfald_samlet[8]++;
      break;

    case (11):
      udfald_samlet[9]++;
      break;

    case (12):
      udfald_samlet[10]++;
      break;
    }
    // tæller antalet af gange der vi har "rulet"
    rul++;
  }

  // printer overskriften og antalet af rul
  printf("udfalds disturpution ud fra %d:\n", rul);
  // printer antalet af hvert udfald på en ny linje
  for (int i = 0; i <= 10; i++) {
    // liger 2 til da arayet satter på 0 men hvores start værdi er 2
    int tal = i + 2;
    printf("%d : %d \n", tal, udfald_samlet[i]);
  }
}