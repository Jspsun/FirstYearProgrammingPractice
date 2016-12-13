struct gameResultType {
  unsigned int numToss;
  unsigned int amount;
 }
 
 gameResultType coinToss(unsigned int initial, unsigned int target) {
   gameResultType game;
   
   game.numToss = 0;
   game.amount = initial;
   
   while (game.amount) {
    if (game.amount >= target) {
      return game;               //not sure what the purpose of the function is so I'll just return to exit
    }
    int bet;
    if (game.amount%2) {
      bet = game.amount/2+1;
    }
    else {
      bet = game.amount/2;
    }
    
    int heads = rand()%2;
    
    if (heads) {
      bet *= 2;
    }
    else {
      bet = -bet;
    }
    
    game.amount = game.amount+bet;
    numToss++;
   }
   return game;
}
