#include "applianceInfo.h"
#include <stdio.h>
#include <string.h>

void inputApplianceData(Appliance *appliance){
    printf("Enter appliance name: ");
    scanf("%s", &(appliance->applName));
    getchar();
    printf("Enter appliance model: ");
    scanf("%s", &(appliance->model));
    printf("Enter appliance power rating: ");
    scanf("%d", &(appliance->power_rating));
    printf("Enter appliance cost: ");
    scanf("%f", &(appliance->cost));
}

void printApplianceData(Appliance appliance){
    printf("\nName: %s", appliance.applName);
    printf("\nModel: %s", appliance.model);
    printf("\nPower rating: %dW", appliance.power_rating);
    printf("\nCost: Ksh %.2f\n",appliance.cost);
}