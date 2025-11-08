#include <stdio.h>

int main() {
    int n, i;
    float marks[100], total = 0, average, percentage;

    // Taking input for number of subjects
    printf("Enter number of subjects: ");
    scanf("%d", &n);

    // Taking marks for each subject
    for(i = 0; i < n; i++) {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];  // Adding marks to total
    }

    // Calculating average and percentage
    average = total / n;
    percentage = (total / (n * 100)) * 100;

    // Displaying results
    printf("\n--- Marks Summary ---\n");
    printf("Total Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);
    printf("Percentage = %.2f%%\n", percentage);

    // Grade calculation (optional)
    if (percentage >= 90)
        printf("Grade: A+\n");
    else if (percentage >= 75)
        printf("Grade: A\n");
    else if (percentage >= 60)
        printf("Grade: B\n");
    else if (percentage >= 40)
        printf("Grade: C\n");
    else
        printf("Grade: Fail\n");

    return 0;
}
