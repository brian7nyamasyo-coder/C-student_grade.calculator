#include<stdio.h>

int main(void)
{
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
        printf("Invalid score.Please choose a score between 0-100\n");
    }
    else if (score >= 80)
    {
        printf("Grade: A\n");
    }
    else if (score >= 70)
    {
        printf("Grade: B\n");
    }
    else if (score >= 60)
    {
        printf("Grade: C\n");
    }
    else if (score >= 50)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }
    return 0;
}
