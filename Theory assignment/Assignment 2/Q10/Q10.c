/*Bashair Yaqoob
24k-0810, 30-10-24
Star */

#include<stdio.h>
int main(){
int space , n , inspace , star , i , j , l;
printf("Enter any number :");
scanf("%d", &n);
space = (n*2)-2;
inspace = 0;

for(i = 0; i <  n-1; i++){//pointy peak
   for(j = 0; j < space; j++){//gap b4 stars
   printf(" ");
   }
printf("*"); //1st star row
for(l = 0; l < inspace; l++){
printf(" ");//space bw 1st and second star
}
if(l != 0)//2nd star. row ain't 1
printf("*");
printf("\n");
space--;//Decrease the outer space and increase the inner space for the next row
if(i == 0){//First row=one star, no space
inspace++;}
else{
inspace+=2;}//After the first row, increase the inner space
}

for(i = 0 ;  i < n; i++){//Middle part widest row of stars
printf("*");//left stars
}
for(i = 0;  i < inspace; i++){
printf(" ");//middle spaces
}
for(i = 0 ;  i < n; i++){
printf("*");//right stars
}
printf("\n");
inspace = (inspace*2)-1;//bottom spacing
space = 1;

for(i = 0; i < n-1;  i++){//Bottom half: Decreasing triangle with stars
  for(j = 0; j  < space; j++){//leading spaces before the first star
  printf(" ");
  }
  printf("*");//first star of row
  for(l = 0 ; l < inspace; l++){//inner space bw 1st and 2nd star
  printf(" ");
  }
  printf("*");//2nd star
  printf("\n");
  inspace-=2;//dec for next row
  space++;
}
    
space = n-2;
inspace = 1;
for(i = 0; i < n-2; i++){// Bottom last rows =four stars and varying spaces
   for(j = 0; j < space; j++){// Print leading spaces before the first star
   printf(" ");
   }
printf("*");
   for(l = 0; l < space; l++){//spaces between stars
   printf(" ");
   }
   printf("*");
   for(j = 0;  j < inspace; j++){//inner spaces bw second and third stars
   printf(" ");
   }
printf("*");
   for( j = 0; j < space; j++){// spaces between the third and fourth stars
   printf(" ");
   }
printf("*");
printf("\n");
space --;// Adjust spaces for the next row
inspace+=4;
}
    
inspace+=2;//Final row: two stars with a large number of spaces between them
printf("*");
for(j = 0; j < inspace; j++){
printf(" ");
}
printf("*");
return 0;
}
