/* "Cricket Showdown" over 12 balls.*/
#include <stdio.h>
#include <string.h>

typedef struct p{
    int ballscores[12];
    char playername[30];
    int totalscore;
}player;
int validateScore(int score) {
    return score >= 0 && score <= 6;
}
void playGame(player *p) {
    p->totalscore = 0;
    for (int i = 0; i < 12; i++) {
        int score;
        printf("%s, enter score for ball %d: ", p->playername, i + 1);
        scanf("%d", &score);

        if (validateScore(score)) {
            p->ballscores[i] = score;
            p->totalscore += score;
        } else {
            printf("Invalid score. Disregarding this ball.\n");
            p->ballscores[i] = 0;
        }
    }
}

void findWinner(player p1, player p2) {
    if (p1.totalscore > p2.totalscore) {
        printf("Winner: %s with a total score of %d\n", p1.playername, p1.totalscore);
    } else if (p2.totalscore > p1.totalscore) {
        printf("Winner: %s with a total score of %d\n", p2.playername, p2.totalscore);
    } else {
        printf("It's a tie! Both players scored %d\n", p1.totalscore);
    }
}

void displayMatchScoreboard(player p1, player p2) {
    printf("\nScoreboard:\n");
    printf("%s's scoreboard:\n", p1.playername);
    for (int i = 0; i < 12; i++) {
        printf("Ball %d: %d\n", i + 1, p1.ballscores[i]);
    }
    printf("Average score: %.2f\n", (float)p1.totalscore / 12);
    printf("Total score: %d\n\n", p1.totalscore);
    printf("%s's scoreboard:\n", p2.playername);
    for (int i = 0; i < 12; i++) {
        printf("Ball %d: %d\n", i + 1, p2.ballscores[i]);
    }
    printf("Average score: %.2f\n", (float)p2.totalscore / 12);
    printf("Total score: %d\n", p2.totalscore);
    findWinner(p1, p2);
    printf("\n");
    return;
}

int main(){
    player p1, p2;
    printf("Enter player 1's name: ");
    scanf("%s", p1.playername);
    printf("Enter player 2's name: ");
    scanf("%s", p2.playername);
    printf("\n");
    playGame(&p1);
    playGame(&p2);
    displayMatchScoreboard(p1, p2);

    return 0;
}
