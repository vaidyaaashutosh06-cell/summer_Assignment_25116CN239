#include <stdio.h>
int main()
{
    int answer, score = 0;
    printf("=== simple Quiz Application ===\n");
    printf("\n1. what is the capital of india?\n");
    printf("1. Mumbai\n 2. Delhi\n 3.Kolkata\n 4.Chennai\n");
    printf("Enter your answer:");
    scanf("%d", &answer);
    if (answer == 2)
    {
        score++;
    }
    printf("\n2. How many days are there in a week?\n");
    printf("1. 5\n 2. 6\n 3. 7\n 4. 8\n");
    printf("Enter your answer:");
    scanf("%d", &answer);
    if (answer == 3)
    {
        score++;
    }
    printf("\n 3. Which language is used for c programming?\n");
    printf("1. c\n 2. java\n 3. python\n 4. Html\n");
    printf("Enter your answer:");
    scanf("%d", &answer);
    if (answer == 1)
    {
        score++;
    }
    printf("\n your score =%d/3\n", score);
    if (score == 3)
        printf("Excellent!\n");
    else if (score == 2)
        printf("Good job!\n");
    else
        printf("Keep Practicing!\n");
    return 0;
}