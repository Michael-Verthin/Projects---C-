#pragma warning(disable : 4996); // A warning message that we are allowing to pass...

#include <stdio.h>
#include <stdlib.h>

// Calculate the time of the marathon runner

#define SWIM_LEN 1.5
#define RIDE_LEN 40
#define RUN_LEN 10

void main()
{
    double swimSpeed, rideSpeed, runSpeed;
    double swimTime, rideTime, runTime;

    printf("Enter the time for Swimming: ");
    scanf("%lf", &swimSpeed);
    printf("Enter the time for Biking: ");
    scanf("%lf", &rideSpeed);
    printf("Enter the time for running: ");
    scanf("%lf", &runSpeed);

    swimTime = SWIM_LEN / swimSpeed;
    rideTime = RIDE_LEN / rideSpeed;
    runTime = RUN_LEN / runSpeed;

    double timeAvg = swimTime + rideTime + runTime;

    printf("\nSwim time: %.2lf\nRide time: %.2lf\nRun time: %.2lf\nAverage time: %.2lf\n",
           swimTime, rideTime, runTime, timeAvg);

    system("pause");
}