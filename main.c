// ConveyorBeltCapacityCheck
// Checks if inputted number of motors can carry inputted weight of packages.
#include <stdio.h>

// Defining relevant variables.
// Initializes motorCapacity to 5.6, as each motor can carry that weight in kg.
double motorCount;
double motorCapacity = 5.6;
double totalPackageWeight;

// Prompts the user for inputting the number of motors and total package weight.
// Displays an error if the user inputs the wrong datatype, such as a char.
// Calculates if the inputted number of motors can carry the packages.
int main(void) {
  printf("How many motors will be carrying the packages?\n");

  // Defines an integer which is 1 if the input
  // from scanf is of the correct datatype.
  int validMotorCountInput = scanf("%lf", &motorCount);

  // Checks if the user has inputted the correct datatype.
  if (validMotorCountInput == 1) {
    printf("What is the total weight of the packages?\n");

    // Defines an integer which is 1 of the input
    // from scanf is of the correct datatype.
    int validPackageWeightInput = scanf("%lf", &totalPackageWeight);

    // Checks if the user has inputted the correct datatype and calculates
    // the ratio between package weight and how much the motors can carry.
    if (validPackageWeightInput == 1 &&
        totalPackageWeight / motorCount <= motorCapacity) {
      printf("The motors can carry the packages!");
      // If the datatype is correct, but
    } else if (validPackageWeightInput == 1 &&
               totalPackageWeight / motorCount > motorCapacity) {
      printf("The motors cannot carry the packages!");
      // If none of the above are true, then the datatype must be incorrect.
    } else {
      printf("Error: wrong data format inputted!");
    }
    // If none of the above are true, then the datatype must be incorrect.
  } else {
    printf("Error: wrong data format inputted!");
  }
}