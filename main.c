#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));

    // random number generate
    int randomNum = (rand() % 100) + 1;
    int guesses;
    int guess_count = 0;

    do {
        printf("Guess the number: ");
        scanf("%d", &guesses);
	
	// check the conditions
        if(guesses < randomNum){
            printf("Higher number please!\n");
        } else if (guesses > randomNum) {
            printf("Lower number please!\n");
        }

        // count the time of Guess
        guess_count++;

    } while (guesses != randomNum);

    printf("You guessed the number in %d guesses\n", guess_count);

    return 0;
}

