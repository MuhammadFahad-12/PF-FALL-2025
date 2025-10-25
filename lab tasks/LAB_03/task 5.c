#include <stdio.h>

int main() {
    float distance1, distance2, distance3, distance4, distance5, time, avgSpeed;
    printf("Car Average Speed Calculator!!!\n");
    printf("Distance can never be negative!\n");
    printf("Enter distance1: ");
    scanf("%f", &distance1);
    printf("Enter distance2: ");
    scanf("%f", &distance2);
    printf("Enter distance3: ");
    scanf("%f", &distance3);
    printf("Enter distance4: ");
    scanf("%f", &distance4);
    printf("Enter distance5: ");
    scanf("%f", &distance5);
    printf("Enter the time you travelled in (1 to 5):");
    scanf("%f", &time);

    time == 1 ? avgSpeed = (distance1) / time :
    time == 2 ? avgSpeed = (distance1 + distance2) / time :
    time == 3 ? avgSpeed = (distance1 + distance2 + distance3) / time :
    time == 4 ? avgSpeed = (distance1 + distance2 + distance3 + distance4) / time :
    time == 5 ? avgSpeed = (distance1 + distance2 + distance3 + distance4 + distance5) / time : printf("Enter correct time\n");

    (time <= 5 && time >0) ? printf("The Average Speed of your car is:%f", avgSpeed) : printf("Program ended!");

  return 0;
}
