#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float percentage;

    printf("Enter marks for 5 subjects:\n");

    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5.0;

    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%", percentage);

    if (percentage >= 90)
        printf("\nGrade: A");
    else if (percentage >= 75)
        printf("\nGrade: B");
    else if (percentage >= 60)
        printf("\nGrade: C");
    else if (percentage >= 40)
        printf("\nGrade: D");
    else
        printf("\nGrade: Fail");

    return 0;
}
