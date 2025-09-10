// ConveyorBeltCapacityCheck
// Checks if inputted number of motors can carry inputted weight of packages.
#include <stdio.h>

// Defining relevant variables.
// Initializes motorCapacity to 5.6, as each motor can carry that weight in kg.
int motorCount;
double motorCapacity = 5.6;
double totalPackageWeight;

// Prompts the user for how many motors will be carrying the packages.
// Prompts the user for the weight of those packages.
// Calculates if the motors are able to carry the packages.
// Displays the answer to the user.
int main(void) {
  printf("How many motors will be carrying the packages?\n");
  scanf("%d", &motorCount);

  printf("What is the total weight of the packages?\n");
  scanf("%lf", &totalPackageWeight);

  if (totalPackageWeight / motorCount <= motorCapacity) {
    printf("The motors can carry the packages!");
  } else {
    printf("The motors cannot carry the packages!");
  }
}