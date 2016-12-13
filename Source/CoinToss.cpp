#include <iostream>
#include <cmath>

// for rand() and srand(); do not need to worry about them
#include <stdlib.h>
#include <time.h>

using namespace std;

struct gameResultType {
  unsigned int numToss;
  unsigned int amount;
};

gameResultType coinToss(unsigned int initial, unsigned int target) {
  // This code is to ensure that random number is being generated
  srand(time(NULL));
  int numToss  = 0;
  int initialR = initial;

  while (initialR < target && initialR >= 0) {
    int bet  = ceil(initialR / 2.0);
    int roll = rand() % 2;

    if (roll) {
      initialR += bet;
    }
    else {
      initialR -= bet;
    }
    numToss++;
  }
  gameResultType result;
  result.numToss = numToss;
  result.amount  = initialR;
  return result;
}

int main() {
  gameResultType oneGame = coinToss(100, 500);

  cout << "Amount: " << oneGame.amount << ". "
       << "# of Tosses: " << oneGame.numToss;

  return 0;
}
