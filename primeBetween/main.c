// This is a 'C' program to find the prime numbers in the given range using functions.
/*
 Example Output:

    Welcome, this program finds the prime numbers in your range.
    Input lower limit : 10
    Input upper limit : 50
 -----------------------------
    Prime numbers between 10-50 are : 11, 13, 17, 19, 23, 29, 31, 37 , 41, 43, 47.
    
    !! PROGRAM ENDS !!.
 
 */

//Created by Mehmet Akif DURAN, January 11, 2024.

#include <stdio.h>

//function prototypes
void primeBetween(int,int);
int isPrime(int);

int main(void){   // beginning of the main function.
        
    //Variable Decleration(s).
    int lowerLimit, upperLimit;
    int temp=0;
    //Executable statement(s).
    
    printf("Welcome, this program finds the prime number in your range. \n");
    
    // getting inputs from the user.
    printf("Input lower limit : \n");
        scanf("%d",&lowerLimit);
    printf("Input upper limit : \n");
        scanf("%d",&upperLimit);
    
    
    // changin operation (for ex:  the user enter the low limit 50 and the upper limit 10)
    
    if(lowerLimit>upperLimit){
        temp=lowerLimit;    //for storing lowerLimit value in a temp variable.
        lowerLimit = upperLimit;
        upperLimit = temp;
    }
    
    
    primeBetween(lowerLimit , upperLimit); //funciton call
    
    printf("! ! ! THE PROGRAM ENDS ! ! !\n");
    
    return 0;
} //end of the main function


void primeBetween(int num1, int num2){
    
    //Exectutable Statement(s).
    
    printf("------------------------------------\n");
    printf("All the prime numbers between %d and %d are: ", num1,num2);
    
    
    while(num1<num2){
    
        if(isPrime(num1)){
            //printing the number if it is prime.
            printf("%d , ", num1);
        }
        num1++;
    }
    //for a better readability.
    printf("\n");
}



int isPrime(int num){
    
    //Variable Decleration(s).
    int i;
    
    //Executable statement(s).
    
    for(i=2; i<num ;i++){
        if(num % i == 0){
            return 0;
        }
    }
    
    
    return 1;
}
