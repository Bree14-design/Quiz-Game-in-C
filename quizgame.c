#include <stdio.h>
#include <ctype.h> //include this header file to use string functions.

/* We'll make a General Knowledge Quiz Game. */

int main()
{
    /* Declare the variables: */
    /* Declare 3 arrays of strings and initialize the questions, options, and answers. */
    /* Specify the maximum size of each of these elements. 100 bytes is what I'll use. */


    char sQuestions[][100] = {"1. Which country has the longest coastline in the world?",

                              "2. What is the world's most populated country?",

                              "3. What is the capital of the Philippines?",

                              "4. The Great Barrier Reef is off the coast of which country?",
                              
                              "5. What is the World's Smallest Country?",
                              
                              "6. In which country is the world's highest waterfall?",
                              
                              "7. What is the capital of Australia?",
                              
                              "8. In which country is Mount Fuji located?",
                              
                              "9. In which country is the Cape of Good Hope?",
                              
                              "10. What country has the greatest number of active volcanoes?"};
    
    char sOptions[][100] = {"A. Russia","B. Canada","C. Indonesia", "D. Australia",

                            "A. China","B. India","C. USA", "D. Brazil",

                            "A. Dili", "B. Marawi", "C. Manila", "D. Jakarta",

                            "A. Australia", "B. Fiji", "C. South Africa", "D. New Zealand",
                            
                            "A. Luxembourg", "B. Lichtenstein", "C. Monaco", "D. Vatican City",
                            
                            "A. Venezuela", "B. USA", "C. South Africa", "D. Brazil",
                            
                            "A. Sydney", "B. Canberra", "C. Adelaide", "D. Melbourne",
                            
                            "A. North Korea", "B. Japan", "C. Peru", "D. China",
                            
                            "A. Canada", "B. Australia", "C. South Africa", "D. USA",
                            
                            "A. Indonesia", "B. Philippines", "C. Italy", "D. Japan"};
    
    char sAnswers[] = {'B','A','C','A','D','A','B','B','C','A'};

    /* Calculate the size of the questions: 
    
       To calculate, use the sizeof function and divide the size of your array to the size of an element in your array. */

    int nSize = sizeof(sQuestions) / sizeof(sQuestions[0]);

    /* Declare variables for the user's score and number of guesses. */

    char cGuess;
    int nScore = 0;

    /* make a nested for loop to ask the questions */

    for (int i = 0; i < nSize; i++)
    {
        /* Print the question. */
        /* I'll print symbols to make it look good. This is optional, you can skip this. */
        printf("***************************\n");
        printf("%s\n", sQuestions[i]);
        printf("***************************\n");

        /* Print the options using a for loop. */

        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            /* Print the options. */
            printf("%s\n", sOptions[j]);
        }
        /* Outside the inner for loop, we'll make a user input where the user can input their answers. */
        printf("Your answer: ");
        /* Precede the format specifier with a space to clear the \n within out input buffer. */
        scanf(" %c", &cGuess);

        /* The user may input a lowercase letter, and that can cause errors. To fix this, use the toupper function. */
        cGuess = toupper(cGuess);

        /* Make an if statement to check if the user's answer is correct. */

        if (cGuess == sAnswers[i])
        {
            /* If the user's answer is correct, print "correct!". */
            printf("Correct answer!\n");
            /* If the user's answer is correct, add 1 to their score. */
            nScore++;
        }
        else
        {
            /* If the user's answer is incorrect, print "wrong". */
            printf("Wrong answer!\n");
        }

    }

    /* Print the user's score. */

    printf("*************************\n");
    printf("Your score is %d over %d questions.\n", nScore, nSize);
    printf("*************************\n");

    return 0;
    
}