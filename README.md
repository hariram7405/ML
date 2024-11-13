
# Rock, Paper, Scissors Game

A simple command-line game where the user competes against the computer in a **Rock, Paper, Scissors** match. The user enters their choice, and the computer randomly selects one of the three options. The game continues until either the user or the computer wins 3 rounds.

## Features

- **User Input**: The user can choose between:
  - 'r' for rock
  - 's' for scissors
  - 'p' for paper
- **Computer Choice**: The computer randomly selects one of the three choices.
- **Round Winner**: The round winner is determined based on the game rules:
  - Rock beats Scissors
  - Scissors beats Paper
  - Paper beats Rock
- **Score Tracking**: The game tracks scores for both the user and the computer. The first to reach 3 points wins the match.
- **Replay Option**: After each game, the user is prompted to play again. The overall win count is displayed, and the game ends when the user chooses not to continue.

## How to Run

### Requirements:
- **C Compiler** (such as GCC) to compile the C code.

### Steps:
1. Clone this repository or download the `main.c` file to your local machine.
2. Open a terminal and navigate to the folder containing the `main.c` file.
3. Compile the code using the following command:
   ```
   gcc main.c -o rock_paper_scissors
   ```
4. Run the compiled program:
   ```
   ./rock_paper_scissors
   ```

### Game Instructions:
- After running the game, you will be prompted to enter your choice ('r', 's', or 'p').
- The computer will randomly select its choice.
- The winner of each round is determined and displayed, and the scores are updated.
- The game continues until either you or the computer reach 3 points.
- After the game ends, you will be asked if you want to play again. Enter 'Y' for yes or 'N' for no to exit the game.

---

## Example Output

```
WELCOME TO THE GAME 🎉
Stone Paper Scissors
Enter 'r' for rock, 's' for scissors, 'p' for paper.

Turn 1
Enter your choice: r
Computer choice: p
Computer wins this round!
User score: 0  Computer score: 1

Turn 2
Enter your choice: s
Computer choice: s
It's a tie!
User score: 0  Computer score: 1

Turn 3
Enter your choice: p
Computer choice: r
You win this round!
User score: 1  Computer score: 1

...
```

---

## Functions

- **rands()**: Generates the computer's random choice (rock, paper, or scissors).
- **user_choice()**: Prompts the user for input and validates it.
- **proceed()**: Asks the user whether they want to play again and handles input validation.
- **game_summary()**: Displays the final game summary, showing the number of wins for both the user and the computer.

---

## Notes

- The game is played until either the user or the computer reaches 3 wins.
- The game is case-insensitive for user input (e.g., 'r', 'R' are both valid for rock).
- Invalid inputs will prompt the user to enter a valid option.
- The program uses randomization for the computer's choice to ensure fairness.

---

## License

This project is open-source and free to use.

---

### Feel free to modify and extend this game!
