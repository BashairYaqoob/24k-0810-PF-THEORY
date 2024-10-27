/* *Bashair Yaqoob
24K-0810, 26-10-2024
histogram*/

#include <stdio.h>
int main(){
int count, i, j, max=0;
printf("Count of values in histogram: ");
scanf("%d", &count);
int values[count];
printf("\nEnter values of histogram: \n");
for(i=0; i<count; i++){
scanf("%d", &values[i]);
if(values[i]>max){
max=values[i];}
}

printf("\nHORIZONTAL HISTOGRAM: \n");
for(i=0; i<count; i++){
for(j=0; j<values[i]; j++){
printf("*");}
printf("\n");
}

printf("\nVERTICAL HISTOGRAM: \n");
for(i=max; i>0; i--){
for(j=0; j<count; j++){
if(values[j]>=i){
printf("* ");}
else{
printf("  ");}
}
printf("\n");
}

return 0;
}
