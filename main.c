#include <stdio.h>

int main()
{
    int N,tetr,A,B,done,i;
    
    //repeat until the user enters a non-negative number
    do {
        printf ("Give me a non-negative number\n");
        scanf ("%d",&N);
        if (N<0) //check if the number is negative anf display an error message
            printf ("The number you gave me is negative. Try again.\n");
    } while (N<0);
    
    
    if (N==0) //0 is not considered a Kaprekar number
        printf ("Not Kaprekar");
    else
    {
        //initialize variables
        A=0;
        B=0;
        tetr=N*N; //calculate the square of the number
        done=0; //flag to indicate if we found a Kaprekar match
        i=10; //divider used to split the square int two parts
        
        //loop to ckeck different ways to split the square
        do 
        {
            A=tetr/i; //left part of the number (digits before the divider)
            B=tetr%i; //right part of the number (digits after the divider)
            
            if (A+B==N) //if A+B equals the original number
                done=1; //we found a Kaprekar match
                
            i*=10; //increase the divider
        } while (A!=0 && B!=0 && done==0); //continue only if A≠0, B≠0 and no solution has been found yet
        
        if (done==1) //if a valid split was found, print it
            printf ("%d + %d = %d",A,B,N);
        else //otherwise, the number is not a Kaprekar number
            printf ("Not Kaprekar");
    }
    
    return 0;
}