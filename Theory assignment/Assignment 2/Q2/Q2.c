/* *Bashair Yaqoob
24K-0810, 26-10-2024
Frequency of each character in each slogan*/

#include <stdio.h>
#include <string.h>
#define MAX 256

void frequency(char slogan[]);
int main(){
char *slogans[]={"buy now", "save big", "limited offer"};
int num= sizeof(slogans)/sizeof(slogans[0]);
for(int i=0; i<num; i++){
frequency(slogans[i]);
}
return 0;
}

void frequency(char slogan[]){
int freq[MAX]={0};
int len= strlen(slogan);

for(int i=0; i<len;i++){
freq[(int)slogan[i]]++;}

printf("Frequency for slogan \'%s\' is: ", slogan);
for(int i=0; i<MAX; i++){
if(freq[i]>0){
printf("\n %c = %d", i, freq[i]);}
}
printf("\n");
}
