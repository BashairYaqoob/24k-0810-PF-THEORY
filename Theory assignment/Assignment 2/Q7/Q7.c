/*Bashair Yaqoob
24k-0810, 30-10-2024
Word Search*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define row 6
#define column 5
#define STR_LEN 100

void populateArray(char array[row][column]) {
srand(time(NULL));
for (int i = 0; i < row - 1; i++) { //populate
for (int j = 0; j < column; j++) {
array[i][j] = 'A' + rand() % 26;  // Random character A-Z
}
}
array[row - 1][0] = '0';
array[row - 1][1] = '8';
array[row - 1][2] = '1';
array[row - 1][3] = '0';
array[row - 1][4] = 'B';
}

void printArray(char array[row][column]) {
for (int i = 0; i < row; i++) {
for (int j = 0; j < column; j++) {
printf("%c ", array[i][j]);
}
printf("\n");}
}

int search(char array[row][column], const char *str) {
int strLen = strlen(str);
for (int i = 0; i < row; i++) { //left to right
for (int j = 0; j <= column - strLen; j++) {
int found = 1;
for (int k = 0; k < strLen; k++) {
if (array[i][j + k] != str[k]) {
found = 0;
break;}
}
if (found) return 1;
}
}
for (int j = 0; j < column; j++) { //top to down search
for (int i = 0; i <= row - strLen; i++) {
int found = 1;
for (int k = 0; k < strLen; k++) {
if (array[i + k][j] != str[k]) {
found = 0;
break;}
}
if (found) return 1;}
}
return 0;
}

int main() {
char array[row][column];
char searchStr[STR_LEN];
int score = 0;
while (1) {
populateArray(array);
printf("ENTER A WORD TO SEARCH (TYPE END TO RESHUFFLE):\n");
printArray(array);
while (1) {
   printf("Search Str= ");
   scanf("%s", searchStr);
   if (strcmp(searchStr, "END") == 0) {
   break;}  // Exit inner loop to repopulate the array
if (search(array, searchStr)) {
score++;
printf("%s is present. Score: %d\n", searchStr, score);
}
else {
score--;
printf("%s is not present. Score: %d\n", searchStr, score);}
}
}
return 0;
}
