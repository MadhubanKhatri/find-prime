# find-prime
In this repo, I will create a program which will find a prime number using C++. 

### What is a Prime Number
Prime number is a number which is divided only by itself and 1. 
If a number is divided by another number which is not itself and 1 then the given number is not a prime number.

#### For Example
* n = 7
 is a prime number because it is divided to itself and 1
* n = 6
 is not a prime number because it is divided to itself and 1 and 2,3 also.
 
 
 ## Code Explaination
 * The code have a funtion 'isPrime' and takes 2 argument which are 'n' and 'i'
 * 'n' is the number and the initial value of 'i' is 2.
 * In this function, a while is created which will loop the code 2 to (n-1).
 * If (n%i) is equal to 0 then n is not a prime number, otherwise it is.
