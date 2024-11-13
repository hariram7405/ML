#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

char rands() {
    int k = rand() % 3;
    if (k == 1) {
        return 's';
    } else if (k == 2) {
        return 'p';
    }
    return 'r';
}

char user_choice() {
    char a;
    printf("Enter your choice: ");
    scanf(" %c", &a);
    a = tolower(a);

    if (a != 'r' && a != 's' && a != 'p') {
        printf("Invalid input. Please enter 'r' for rock, 's' for scissors, or 'p' for paper.\n");
        return user_choice();
    }
    return a;
}
#include <stdio.h>

void game_summary(int user, int computer) {
    printf("\n******************************************************************************************\n");
    printf("\t\t\t\t\t\tOVERALL REPORT\n");
    printf("\nUser Wins %d times", user);
    printf("\nComputer Wins %d times", computer);

    if (user == computer) {
        printf("\nIt's a tie! Both win the game.\n");
    } else if (user > computer) {
        printf("\nOverall, the user wins the game!\n");
    } else {
        printf("\nOverall, the computer wins the game!\n");
    }
}

int proceed() {
    printf("\nDo you want to play again? Enter 'Y' for Yes or 'N' for No: ");
    char ab;
    scanf(" %c", &ab);
    ab = tolower(ab);

    if (ab == 'y') {
        return 1;
    } 
    else if (ab == 'n') {
        printf("\nThank you for playing! Goodbye.\n");
        return 0;
    }
else{
    printf("\nInvalid Input. Enter 'Y' for Yes or 'N' for No:\n");
}
    return proceed();  
}

int main() {
    printf("WELCOME TO THE GAME 🎉\n");
    printf("Stone Paper Scissors\n");
    printf("Enter 'r' for rock, 's' for scissors, 'p' for paper.");
int user_win=0;
int computer_win=0;
    while (1) {
        int user_score = 0;
        int computer_score = 0;
        int turn = 0;
        srand(time(0));

        while (user_score < 3 && computer_score < 3) {
            printf("\n\nTurn %d\n", turn + 1);
            char user_input = user_choice();
            char computer_input = rands();

            printf("Computer choice: %c\n", computer_input);

            if (user_input == computer_input) {
                printf("It's a tie!\n");
            } else if ((user_input == 'p' && computer_input == 'r') ||
                       (user_input == 'r' && computer_input == 's') ||
                       (user_input == 's' && computer_input == 'p')) {
                user_score++;
               
            } else {
                computer_score++;
             
            }

            printf("User score: %d  Computer score: %d\n", user_score, computer_score);
            turn++;
        }

        if (user_score == 3) {
            user_win+=1;
            printf("\n\t\t\t🙌💥💥💥💥💥💥😎😎 You won, Kudos! 💥💥💥💥💥💥\n");
        } else if (computer_score == 3) {
            computer_win+=1;
            printf("\n\t\t\t😥 Computer won! Better luck next time.\n");
        }

        if (proceed() == 0) {
            game_summary(user_win,computer_win);
            break;
        }
    }

    return 0;
}
