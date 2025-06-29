This C program reads a non-negative integer from the user and checks whether it is a Kaprekar number in base 10. A number N is a Kaprekar number if the square of N can be split into two parts — A and B — such that:
A + B = N
B > 0 (non-zero)
Leading zeros are allowed in both parts.

How the Program Works:
-> Input Validation:
It repeatedly asks the user to enter a number until a non-negative integer is given.
If the user enters a negative number, an error message is shown.

->Edge Case (N = 0):
If the number is zero, it prints "Not Kaprekar", since 0 is not considered a Kaprekar number in this context.

-> Kaprekar Check:
The program calculates the square of N.
It then attempts to split the square into two parts at different digit positions by using powers of 10 (e.g., divide by 10, 100, 1000, etc.).
At each split, it checks if the sum of the left part (A) and right part (B) equals the original number N.
If such a valid split is found, the number is Kaprekar.

-> Output:
If a valid split is found, it prints the equation A + B = N.
If not, it prints "Not Kaprekar".
