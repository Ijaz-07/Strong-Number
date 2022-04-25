/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int main()
{
     int number, tempvariable, remainder, i, factorial, sum=0;

     printf("Enter number: ");
     scanf("%d",&number);

     tempvariable = number;

     while( number!=0 )
     {
         factorial = 1;  //every time factorial initialize with 1
         remainder = number%10;

         for(i=1; i<=remainder; i++)
         {
             factorial *= i; //factorial=factorial * i
         }

         sum += factorial;  //sum= sum+factorial
         number /= 10;  //numbar=numbar/10
     }

     if( tempvariable == sum )
         printf("%d is a strong number.\n",tempvariable);
     else
         printf("%d is not a strong number.\n",tempvariable);

     return 0;
}