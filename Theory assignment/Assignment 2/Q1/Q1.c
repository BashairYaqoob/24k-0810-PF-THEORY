/* *Bashair Yaqoob
24K-0810, 26-10-2024
Second smallest element in an array.*/

#include <stdio.h>
int main(){
int i, n, small, secsmall;
printf("Enter number of elements you want to enter: ");
scanf("%d", &n);
if(n<2){
printf("\nArray must have atleast 2 numbers.");
return 0;}
int arr[n];
for(i=0; i<n; i++){
printf("\nElement %d: ",i);
scanf("%d", &arr[i]);
}
if(arr[0]<arr[1]){
small=arr[0]; secsmall=arr[1];}
else{
small=arr[1]; secsmall=arr[0];}
for(i=2; i<n; i++){
if(arr[i]<small){
secsmall=small;
small=arr[i];
}
else if(arr[i]<secsmall && arr[i] != small){
secsmall = arr[i];
}
}
printf("Second smallest number is: %d", secsmall);
return 0;
}
