struct gameResultType {
  unsigned int numToss;
  unsigned int amount;
};

gameResultType coinToss(unsigned int initial, unsigned int target) {
  // initialize variables
  gameResultType game;

  game.numToss = 0;
  game.amount  = initial;
  int  betAmount = 0;
  bool coin;

  // while game end condition aren't met
  while (gameResultType.amount < target && gameResultType.amount > 0) {
    game.numToss++; // add a coin toss
    betAmount =
      ((game.amount % 2) ? (game.amount) / 2 + 1 : game.amount / 2)
      coin = rand() % 2;

    if (coin) // if true
      game.amount += betAmount;
    else game.amount -= betAmount;
  }
  return game;
}
