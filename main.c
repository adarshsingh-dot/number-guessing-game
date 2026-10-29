#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    
    int randomnumber = (rand() % 100) + 1;
    int guessed_number;
    int no_of_guesses = 0;
    
    // printf("Random number: %d\n", num);
    do 
    {
        printf("guess the number");
        scanf("%d", &guessed_number);
        if(guessed_number > randomnumber)
        {
            printf("lower number please!\n");
        }
            else if(guessed_number < randomnumber)
        
        {
            printf("higher number please!\n");
        }
        else
        {
            printf("congrats !!\n");
        }
        no_of_guesses++;
    }while(guessed_number != randomnumber);
    printf("you guessed the number in %d guesses", no_of_guesses);


    return 0;
}