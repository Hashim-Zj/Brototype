#include <stdio.h>
#include <stdlib.h>

int main() {
	int number;

	printf("\nEnter a number:");
	scanf("%d",&number);
    switch (number)
    {
    case 1:
        printf("\nSunday\n");
        break;
    case 2:
        printf("\nMonday\n");
        break;
    case 3:
        printf("\nTuesday\n");
        break;
    case 4:
        printf("\nWednesday\n");
        break;
    case 5:
        printf("\nThusday\n");
        break;
    case 6:
        printf("\nFriday\n");
        break;
    case 7:
        printf("\nSaterday\n");
        break;
    default:
        printf("Invalid Entry\n");
        break;
    }
    return 0;
}