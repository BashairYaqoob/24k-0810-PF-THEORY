/*Bashair Yaqoob
24k-0810, 30-10-2024
Avoid obstacle, Reach target game*/

#include <stdio.h>
#define size 5

void display(char grid[size][size]);
void movement(char grid[size][size], char move, int *playerX, int *playerY, int *itemsCollected);

int main() {
char grid[size][size] = {
        {' ', ' ', 'I', 'X', ' '},
        {' ', 'X', ' ', ' ', ' '},
        {'I', ' ', 'X', 'X', ' '},
        {' ', ' ', ' ', 'I', 'X'},
        {' ', 'X', ' ', ' ', 'P'}
};
int playerX = 4, playerY = 4; // 'P' starts at grid[4][4]
int itemsCollected = 0;
char move;
    
while (1) {
display(grid);
printf("Items Collected: %d\n", itemsCollected);
printf("Enter your move (W: up, S: down, A: left, D: right, Q: quit): ");
scanf(" %c", &move);
if (move == 'Q' || move == 'q') {
printf("Game Over! You collected %d item(s).\n", itemsCollected);
break;}
movement(grid, move, &playerX, &playerY, &itemsCollected);
}
return 0;
}

void display(char grid[size][size]) {
printf("\nCurrent Grid:\n");
for (int i = 0; i < size; i++) {
   for (int j = 0; j < size; j++) {
   printf("%c ", grid[i][j]);
   }
printf("\n");}
printf("\n");
}

void movement(char grid[size][size], char move, int *playerX, int *playerY, int *itemsCollected) {
int newX = *playerX, newY = *playerY;
switch (move) {
case 'W': case 'w': //up
newX--;
break;
case 'S': case 's': //down
newX++;
break;
case 'A': case 'a': //left
newY--;
break;
case 'D': case 'd': //right
newY++;
break;
default:
printf("Invalid move PAGLAY! Please enter W, S, A, D or Q.\n");
return;
}
if (newX >= 0 && newX < size && newY >= 0 && newY < size) { //obstacle check
   if (grid[newX][newY] == 'X') {
   printf("You can't move there, there's an obstacle!\n");}
   else {
   grid[*playerX][*playerY] = ' '; // Clear old position
   *playerX = newX;
   *playerY = newY;
   if (grid[newX][newY] == 'I') {
   printf("Item collected!\n");
   (*itemsCollected)++;
   } 
grid[newX][newY] = 'P';
}
}
else {
printf("Invalid move! Auqaat mn raho.\n");
}
}
