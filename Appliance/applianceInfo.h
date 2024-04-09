#ifndef APPLIANCEINFO_H
#define APPLIANCEINFO_H

//Structure for the appliances
typedef struct{
    char applName[50];
    char model[16];
    int power_rating;
    float cost;
}Appliance;

void inputApplianceData(Appliance *appliance);

void printApplianceData(Appliance appliance);

#endif