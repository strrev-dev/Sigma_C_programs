// C program to read marks and print percentage and division

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[3];
    int i;
    float percentage;
    char division[20];
    // Read marks for 3 subjects
    printf("Please enter marks for 3 subjects:\n");
    for(i=0; i<3; i++)
    {
        printf("subject %d :", i+1);
        scanf("%d", &marks[i]);
        // Check if marks are valid
        if(marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
            return 1; // Exit the program with an error code
        }

    }
    // Calculate percentage
    int total = 0;
    for(i=0; i<3; i++){
        total += marks[i];
    }
    percentage = (float)total/3;
    // Determine division based on percentage
    if (percentage >=60  && percentage <=100)
    {
        printf("Percentage: %.3f\n", percentage);
        printf("Division: First\n");
    }
    else if (percentage >= 50 && percentage < 60)
    {
        printf("Percentage: %.3f\n", percentage);
        printf("Division: Second\n");
    }
    else if (percentage >= 40 && percentage < 50)
    {
        printf("Percentage: %.3f\n", percentage);
        printf("Division: Third\n");
    }
    else
    {
        printf("Percentage: %.3f\n", percentage);
        printf("Division: Fail\n");
    }
  
    
    return 0;
}
