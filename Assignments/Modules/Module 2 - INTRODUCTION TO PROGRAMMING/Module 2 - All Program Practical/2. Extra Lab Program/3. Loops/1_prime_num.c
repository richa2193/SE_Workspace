#include<stdio.h>
#include<conio.h>

void main()
{
    int n, i, j, flag;

    printf("\n Enter Any Number : ");
    scanf("%d", &n);


    // check whether entered number is prime 
    if(n<=1)
    {
        printf("\n %d not a Prime Number.", n);
    }
    else
    {
        flag=0;
        for(i = 2; i <= n / 2; i++)
        {
            if(n % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            printf("\n %d is a Prime Number. ", n);
        }
        else
        {
            printf("\n %d is not a prime number.", n);
        }

        //print all the prime number between 1 to N 
        printf("\n Prime Number between 1 To %d are : ", n);

        for(i = 2; i <= n; i++)
        {
            flag = 0;

            for(j = 2; j <= i / 2; j++)
            {
                if(i % j == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
            {
                printf("\n %d", i);
            }
        }
    }

    getch();

}


// A prime number is a number which is:

// * Greater than 1
// * Divisible only by 1 and itself

// Examples: 2, 3, 5, 7
// Non-examples: 1, 4, 6, 8

// ---

// ## **Variables Used**

// * `n` → stores the number entered by the user
// * `i` → loop variable used to check divisibility
// * `j` → loop variable for inner loop
// * `flag` → used to indicate whether a number is prime or not

// ---

// ## **Meaning of Flag Variable**

// * `flag = 0` → number is assumed to be **prime**
// * `flag = 1` → number is **not prime**

// ---

// ## **Logic to Check Whether Entered Number is Prime**

// 1. First, check if the number is less than or equal to 1

//    * If yes, then the number is **not prime**

// 2. Set `flag = 0` assuming the number is prime.

// 3. Use a `for` loop from `2` to `n/2` to check divisibility.

// 4. If the number is divisible by any value:

//    * Set `flag = 1`
//    * Stop the loop using `break`

// 5. After the loop:

//    * If `flag == 0`, the number is **prime**
//    * If `flag == 1`, the number is **not prime**

// ---

// ## **Logic to Print Prime Numbers Between 1 and N**

// 1. Use a `for` loop from `2` to `n`.

// 2. For each number:

//    * Set `flag = 0` (assume it is prime)

// 3. Use another `for` loop from `2` to `i/2` to check divisibility.

// 4. If the number is divisible:

//    * Set `flag = 1`
//    * Stop checking using `break`

// 5. If `flag == 0`, print the number as a prime number.

// ---

// ## **Why We Use `i/2`**

// A number cannot be divided by any number greater than its half (except itself), so checking up to `i/2` is enough.

// ---

// ## **Final Conclusion**

// * The program uses loops and the modulus operator to check divisibility.
// * If no divisor is found, the number is considered prime.
// * The same logic is applied repeatedly to print all prime numbers between 1 and N.

// ---

// ## **Key Points to Remember**

// * Always reset `flag` before checking a new number.
// * Use `break` to stop the loop early when a divisor is found.
// * `getch()` should be placed outside the loop.
// * Prime numbers start from 2.

// ---

// If you want, I can also give:

// * **Even shorter exam version**
// * **Step-by-step dry run**
// * **Same explanation without flag**

// Just tell me 😊
