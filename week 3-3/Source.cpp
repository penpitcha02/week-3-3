#include <stdio.h>

int main()
{
	int sal, hour;
	char late, ot;
	printf("Enter the salary: ");
	scanf_s("%d", &sal);
	
	do
	{
		printf("Has he/she ever been late for work?(Y/N): ");
		while (getchar() != '\n');
		scanf_s("%c", &late);
	} while (!(late == 'Y' || late == 'y' || late == 'N' || late == 'n'));

	if (late == 'N' || late == 'n')
	{
		sal = sal + 1000;
	}

	do
	{	
		printf("Did he/she do the OT?(Y/N): ");
		while (getchar() != '\n');
		scanf_s("%c", &ot);
	} while (!(ot == 'Y' || ot == 'y' || ot == 'N' || ot == 'n'));

	if (ot == 'Y' || ot == 'y')
	{
		printf("Enter OT hour: ");
		scanf_s("%d", &hour);
		sal = sal + (hour * 200);
	}

	printf("Salary: %d", sal);
	return 0;
}