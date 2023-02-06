#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main() {
	double pi = 3.14;
	double straight;
	double half;
	double round;
	double wide;
	int choose;
	//var

    system("cls");
    /*clear monitor*/

    system("title circle");
    /*program title*/

	printf("This is a program to find the width, diameter, and circumference of a circle.(PI: 3.14)\n\n\n");
	//title

	printf("Please enter number\n\n");
	printf("Area(1)\n");
	printf("Diameter(2)\n");
	printf("Radius(3)\n");
	printf("Circumference(4)\n");
	printf("=> ");
	scanf("%d", &choose);

	if (choose == 1) {
		system("cls");
		printf("Finding the area of a circle\n\n\n");
		printf("Radius: ");
		scanf("%lf", &half);
		printf("\n\n");
		wide = half * half * pi;
		printf("Area: %lf\n", wide);
	}
	/*wide*/
	else if (choose == 2) {
		system("cls");
		printf("Diameter\n\n\n");
		printf("Circumference: ");
		scanf("%lf", &round);
		printf("\n\n");
		straight = round / pi;
		printf("Diameter: %lfcm\n", straight);
	}
	/*straight*/
	else if (choose == 3) {
		system("cls");
		printf("Radius\n\n\n");
		printf("Circumference: ");
		scanf("%lf", &round);
		printf("\n\n");
		half = (round / pi) / 2;
		printf("Radius: %lfcm\n", half);
	}
	/*half straight*/
	else if (choose == 4) {
		system("cls");
		printf("Circumference\n\n\n");
		printf("Diameter: ");
		scanf("%lf", &straight);
		printf("\n\n");
		round = straight * pi;
		printf("Circumference: %lfcm\n", round);
	}
	/*round*/

	return 0;
}