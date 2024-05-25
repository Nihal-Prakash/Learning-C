#include <stdio.h>
#include <stdlib.h>

int main() {
    /* Voting system: Candidates A, B, C, NOTA
       Print the winning candidate and by how much */

    char choice;
    char v;
    int vA = 0;
    int vB = 0;
    int vC = 0;
    int vN = 0;

    do {
        system("cls");
        printf("Terminal cleared to maintain voting privacy");
        printf("Enter your vote (A, B, C, N for NOTA, E to end voting): \n");
        scanf(" %c", &v);
        switch (v) {
            case 'A':
            case 'a':
                vA++;
                break;
            case 'B':
            case 'b':
                vB++;
                break;
            case 'C':
            case 'c':
                vC++;
                break;
            case 'N':
            case 'n':
                vN++;
                break;
            case 'E':
            case 'e':
                choice = 'E';
                break;
            default:
                printf("Invalid Vote\n");
                break;
        }
    } while (choice != 'E' && choice != 'e');

    int votes[4] = {vA, vB, vC, vN};
    const char *candidates[4] = {"A", "B", "C", "NOTA"};
    
    printf("Analyzing votes ....\n"); // for dramatic effect

    // Determine the winner
    int maxVotes = votes[0];
    int winnerIndex = 0;
    for (int i = 1; i < 4; i++) {
        if (votes[i] > maxVotes) {
            maxVotes = votes[i];
            winnerIndex = i;
        }
    }

    // Check for ties
    int tieCount = 0;
    for (int i = 0; i < 4; i++) {
        if (votes[i] == maxVotes) {
            tieCount++;
        }
    }

    if (tieCount > 1) {
        printf("It's a tie between:");
        for (int i = 0; i < 4; i++) {
            if (votes[i] == maxVotes) {
                printf(" %s", candidates[i]);
            }
        }
        printf(" with %d votes each.\n", maxVotes);
    } else {
        printf("The winning candidate is %s with %d votes.\n", candidates[winnerIndex], maxVotes);
    }

    // Print the vote count difference
    printf("Vote counts: A: %d, B: %d, C: %d, NOTA: %d\n", vA, vB, vC, vN);
    if (winnerIndex != 3) {
        printf("The winner won by %d votes.\n", maxVotes - votes[(winnerIndex + 1) % 3]);
    }

    return 0;
}
