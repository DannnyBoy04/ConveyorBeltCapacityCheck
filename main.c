#include <stdio.h>

int motorCount;
double motorCapacity = 5.6;
double totalPackageWeight;

int main(void) {
  printf("How many motors will be carrying the packages?\n");
  scanf("%d", &motorCount);

  printf("What is the total weight of the packages?");
  scanf("%lf", &totalPackageWeight);

  if (totalPackageWeight / motorCount <= motorCapacity) {
    printf("The motors can carry the packages!");
  } else {
    printf("The motors cannot carry the packages!");
  }
}