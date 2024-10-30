/* Bashair Yaqoob
24K-0810, 26-10-2024
Grouping of anagrams*/


#include <stdio.h>
#include <string.h>

#define MAX_TRANSACTIONS 100
#define MAX_LENGTH 100

void sortString(char str[]) { // Function to sort characters string mn
int len = strlen(str);
for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
    if (str[i] > str[j]) {
    char temp = str[i]; //swapping
    str[i] = str[j];
    str[j] = temp;}
}}
}

int main() {
char transactions[MAX_TRANSACTIONS][MAX_LENGTH] = {"eat", "tea", "tan", "ate", "nat", "bat"};
int n = 6; //transactions num
int grouped[MAX_TRANSACTIONS] = {0};  //grouped transactions ki array
char sortedTransactions[MAX_TRANSACTIONS][MAX_LENGTH]; //sorted ki array
for (int i = 0; i < n; i++) {
strcpy(sortedTransactions[i], transactions[i]);
sortString(sortedTransactions[i]);
}
for (int i = 0; i < n; i++) {
if (grouped[i]) continue;
printf("[\"%s\"", transactions[i]); //grouped transaction ka print
grouped[i] = 1;
for (int j = i + 1; j < n; j++) {
if (!grouped[j] && strcmp(sortedTransactions[i], sortedTransactions[j]) == 0) {
printf(", \"%s\"", transactions[j]);//agar anagram hai, tou add in group
grouped[j] = 1;}
}
printf("]\n");}
return 0;
}
