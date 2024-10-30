/*Bashair Yaqoob
24K-0810, 30-10-2024
Arithmatic Conversion*/

#include <stdio.h>
#include <string.h>

int BinaryToDecimal(int number);
int DecimalToBinary(int number);
void DecimalToHexadecimal(int number);
void HexadecimalToDecimal(char hexNumber[]);
void BinaryToHexadecimal(int number);
void HexadecimalToBinary(char hexNumber[]);

int main() {
int c, deciNum, binNum;
char hexNum[20];
while (1) {
printf("\nMenu:\n");
printf("1. Convert Binary to Decimal\n2. Convert Decimal to Binary\n3. Convert Decimal to Hexadecimal\n4. Convert Hexadecimal to Decimal\n5. Convert Binary to Hexadecimal\n");
printf("6. Convert Hexadecimal to Binary\n7. Exit\nChoose an option: ");
scanf("%d", &c);

switch (c){
case 1:
printf("Enter a binary number: ");
scanf("%d", &binNum);
printf("Decimal Equivalent: %d\n", BinaryToDecimal(binNum));
break;
case 2:
printf("Enter a decimal number: ");
scanf("%d", &deciNum);
printf("Binary Equivalent: ");
DecimalToBinary(deciNum);
break;
case 3:
printf("Enter a decimal number: ");
scanf("%d", &deciNum);
printf("Hexadecimal Equivalent: ");
DecimalToHexadecimal(deciNum);
break;
case 4:
printf("Enter a hexadecimal number: ");
scanf("%s", hexNum);
HexadecimalToDecimal(hexNum);
break;
case 5:
printf("Enter a binary number: ");
scanf("%d", &binNum);
printf("Hexadecimal Equivalent: ");
BinaryToHexadecimal(binNum);
break;
case 6:
printf("Enter a hexadecimal number: ");
scanf("%s", hexNum);
HexadecimalToBinary(hexNum);
break;
case 7:
printf("Exiting the program.\n");
return 0;
default:
printf("Invalid choice! Please select again.\n");
break;}
}
return 0;}


int BinaryToDecimal(int number) {
int decimal = 0, base = 1, lastDigit;
while (number > 0) {
lastDigit = number % 10;
number = number / 10;
decimal += lastDigit * base;
base = base * 2;}
return decimal;}

int DecimalToBinary(int number) {
if (number == 0) { printf("0");
return 0; }
int binary[32]; // Array to hold binary number
int index = 0;
while (number > 0) {
binary[index] = number % 2;
number = number / 2;
index++;
}
for (int i = index - 1; i >= 0; i--) {//reverse print
printf("%d", binary[i]);}
printf("\n");
return 0;
}

void DecimalToHexadecimal(int number) {
char hex[20];
int index = 0;
while (number > 0) {
int remainder = number % 16;
if (remainder < 10) {
hex[index++] = remainder + '0';}
else {
hex[index++] = remainder - 10 + 'A';} // Convert to character A-F
number = number / 16;
}
for (int i = index - 1; i >= 0; i--) {
printf("%c", hex[i]);}
printf("\n");
}

void HexadecimalToDecimal(char hexNumber[]) {
int decimal = 0, base = 1, len = strlen(hexNumber);
for (int i = len - 1; i >= 0; i--) {
if (hexNumber[i] >= '0' && hexNumber[i] <= '9') {
decimal += (hexNumber[i] - '0') * base;}
else if (hexNumber[i] >= 'A' && hexNumber[i] <= 'F') {
decimal += (hexNumber[i] - 'A' + 10) * base;}
else if (hexNumber[i] >= 'a' && hexNumber[i] <= 'f') {
decimal += (hexNumber[i] - 'a' + 10) * base;} 
else {
printf("Invalid hexadecimal input!\n");
return;}
base *= 16;
}
printf("Decimal Equivalent: %d\n", decimal);
}

void BinaryToHexadecimal(int number) {
    int decimal = BinaryToDecimal(number);
    DecimalToHexadecimal(decimal);
}

void HexadecimalToBinary(char hexNumber[]) {
int decimal = 0, base = 1, len = strlen(hexNumber);
for (int i = len - 1; i >= 0; i--) {
if (hexNumber[i] >= '0' && hexNumber[i] <= '9') {
decimal += (hexNumber[i] - '0') * base;} 
else if (hexNumber[i] >= 'A' && hexNumber[i] <= 'F') {
decimal += (hexNumber[i] - 'A' + 10) * base;}
else if (hexNumber[i] >= 'a' && hexNumber[i] <= 'f') {
decimal += (hexNumber[i] - 'a' + 10) * base;}
else{
printf("Invalid hexadecimal input!\n");
return;}
base *= 16;}
printf("Binary Equivalent: ");
DecimalToBinary(decimal);
}
