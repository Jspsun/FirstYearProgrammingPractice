struct gameResultType {
  unsigned int numToss;
  unsigned int amount;
 }
 
 gameResultType coinToss(unsigned int initial, unsigned int target) {
   numToss = 0;
   amount = initial;
   
   while (amount) {
    if (amount >= target) {
      return;               //not sure what the purpose of the function is so I'll just return to exit
    }
    int bet;
    if (amount%2) {
      bet = amount/2+1;
    }
    else {
      bet = amount/2;
    }
    
    int heads = rand()%2;
    
    if (heads) {
      bet *= 2;
    }
    else {
      bet = -bet;
    }
    
    amount = amount+bet;
    numToss++;
   }
   return;
}
