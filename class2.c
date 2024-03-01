#include <stdio.h>

// program for gas station give two choices to person litre or money calculator. PROGRAM should have limit of 10. should print recipt as well.

int main() {
   
   int a;
   int b;
   float c;
   printf("Hello, there please use the quantity in the meter: \n Cash:  \n litre \n ");
   scanf("%d", &a);

   switch (a) {
   case 1 : printf("Enter the amount please : \n");
                  break ;
   case 2 : printf("Enter the quantity : \n");
                  break ;
   default : printf("Invalid Command");               
   }  
   
   printf("");
   scanf("%d", &b);

   if(b <= 1) {
      printf("Your price quantity is  not enough");
   } 
   else if(b >= 2 && b<=1) {
      printf("Your quantity is %d \n", b * 10 / 120);
      }else if (b >= 100 && b<=0) {
         printf("your quantity is %d \n", b * 270 / 120);
      }  
   
   else if(b >= 3 && b<=2) {
      printf("Your quantity is %d \n", b * 10 / 120);
      }else if (b >= 200 && b<=100) {
         printf("your quantity is %d \n", b * 270 / 120);
      }   
   
   else if(b >= 4 && b<=3) {
      printf("Your quantity is %d \n", b * 10 / 120);
      }else if (b >= 300 && b<=200) {
         printf("your quantity is %d \n", b * 270 / 120);
      }  
   
   else if(b >= 5 && b<=4) {
      printf("Your quantity is %d \n", b * 10 / 120);
      }else if (b >= 400 && b<=300) {
         printf("your quantity is %d \n", b * 270 / 120);
      }    
   
   else if(b >= 6 && b<=5) {
      printf("Your quantity is %d \n", b * 10 / 120);
      }else if (b >= 500 && b<=400) {
         printf("your quantity is %d \n", b * 270 / 120);
         } 
   
   else if(b >= 7 && b<=8) {
      printf("Your quantity is %d \n", b * 10 / 120);
      }else if (b >= 600 && b<=500) {
         printf("your quantity is %d \n", b * 270 / 120);
         } 
   
   else if(b >= 8 && b<=9) {
      printf("Your quantity is %d \n", b * 10 / 120);
      }else if (b >= 700 && b<=600) {
         printf("your quantity is %d \n", b * 270 / 120);
      }                
   
   else if(b >= 9 && b<=10) {
      printf("Your quantity is %d \n", b * 10 / 120);
      }else if (b >= 800 && b<=700) {
         printf("your quantity is %d \n", b * 270 / 120);
      }    
   
   else if(b >= 10) {
      printf("Your quantity is %d \n", b * 4 / 8);
      }else if (b >= 900 && b<=800) {
         printf("your quantity is %d \n", b * 270 / 120);
         }    
    else {
      printf("Your limit exceeded \n");

    }
    
    printf("\n Bill No 2233 \n");
    printf("Quantity : %d \n", b);
    printf("Price is : %d \n", b * 270 / 120);
    printf("Payment method unknown\n");
    printf("Gas Station name : Hascol \n");
    }
    
   
 

 