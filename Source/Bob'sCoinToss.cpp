#include <iostream>

//for rand() and srand(); do not need to worry about them
#include <stdlib.h>
#include <time.h>

using namespace std;

struct gameResultType {
  unsigned int numToss;
  unsigned int amount;
};
 
gameResultType coinToss(unsigned int initial, unsigned int target) {
	//This code is to ensure that random number is being generated
	srand (time(NULL));
	
	gameResultType game;

	game.numToss = 0;
	game.amount = initial;

	while (game.amount) {
		if (game.amount >= target)
			return game;

		int bet = (game.amount%2) ? (game.amount/2+1) : (game.amount/2);

		int heads = rand() % 2;

		if (heads == 0) {
			bet = -bet;
		}

		game.amount += bet;
		game.numToss++;
	}
	
	return game;
}

int main(){
	gameResultType oneGame = coinToss(100, 500);
	cout << "Amount: " << oneGame.amount << ". "
		<< "# of Tosses: " << oneGame.numToss;
	
	return 0;
}
