#include <stdio.h>

int main()
{
    float filipino, english, science, math, hekasi, average;

    printf("Enter marks obtained in Filipino:");
    scanf("%f", &filipino);
    printf("Enter marks obtained in English:");
    scanf("%f", &english);
    printf("Enter marks obtained in Science:");
    scanf("%f", &science);
    printf("Enter marks obtained in Math:");
    scanf("%f", &math);
    printf("Enter marks obtained in Hekasi:");
    scanf("%f", &hekasi);

    average = (filipino + english + science + math + hekasi) / 5;
    printf("Average : %0.2f\n", average);

    if (average >= 90)
    {
        printf("Grade A");
    }
    else if (average >= 80)
    {
        printf("Grade B");
    }
    else if (average >= 70)
    {
        printf("Grade C");
    }
    else if (average >= 60)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
