#include <stdio.h>

int main() {
    int hours, i;
    float distance, totalDistance = 0.0, avgSpeed;

    printf("Enter number of hours the car traveled (1 to 5): ");
    scanf("%d", &hours);

    // Input validation
    if (hours < 1 || hours > 5) {
        printf("Error: Hours must be between 1 and 5.\n");
        return 1; // Exit program with error code
    }

    // Taking distance for each hour
    for (i = 1; i <= hours; i++) {
        printf("Enter distance covered in hour %d (miles): ", i);
        scanf("%f", &distance);

        if (distance < 0) {
            printf("Error: Distance cannot be negative.\n");
            return 1;
        }
        totalDistance += distance;
    }

    // Average Speed = Total Distance / Time
    avgSpeed = totalDistance / hours;

    printf("\nTotal Distance: %.2f miles\n", totalDistance);
    printf("Total Time: %d hours\n", hours);
    printf("Average Speed: %.2f miles/hour\n", avgSpeed);

    return 0;
}
