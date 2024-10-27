/* *Bashair Yaqoob
24K-0810, 26-10-2024
reducing duplicate character*/


#include <stdio.h>
#include <string.h>

void shorty(char word[], char compressed[], int *countofremoved);

int main(){
char word[1000];
char compressed[1000];
int countofremoved;
printf("Enter upto 1000 characters: ");
fgets(word, sizeof(word), stdin);

shorty(word, compressed, &countofremoved);

printf("\nShortened word: %s", compressed);
printf("\nRemoved characters: %d", countofremoved);
return 0;
}

void shorty(char word[], char compressed[], int *countofremoved){
int j=0;       //compressed index
*countofremoved=0;
compressed[j++]=word[0];  //first character assignment


for(int i=1; i<strlen(word); i++){
if(word[i]!=word[i-1]){
compressed[j++]=word[i];}
else{
(*countofremoved)++;}
}
compressed[j]='\0';
}
