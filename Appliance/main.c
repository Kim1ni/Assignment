#include <stdio.h>
#include <string.h>
#include "applianceInfo.h"

int main(){
    Appliance app[10];

    for(int i = 0; i < 10; i++){
        printf("\n\nEnter the data for appliance %d: \n", i+1);
        inputApplianceData(&app[i]);
    }

    printf("\n\nAPPLIANCES IN INVENTORY\n");

    for(int i = 0; i < 10; i++){
        printf("\nData for appliance: %s", app[i].applName);
        printApplianceData(app[i]);
    }
}