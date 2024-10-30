/* Bashair Yaqoob
24K-0810, 26-10-2024
Matchstick game (1-4)*/

#include <stdio.h>

int mstick(int n);

int main(){
int n;
printf("Enter the number of matchsticks on table: ");
scanf("%d", &n);
int result=mstick(n);
if(result==-1){
printf("\nImpossible to win!");}
else{
printf("\nPick %d cards for A to win", result);}
return 0;
}

int mstick(int n){
if(n%5==0){
return -1;}
else{
return n%5;}
}
