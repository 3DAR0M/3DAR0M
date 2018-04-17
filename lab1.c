//#include <iostream.h>
#include <stdio.h> 
//using namespace std;
int main()
{
	int a[3][5];
	int s = 0;
	int i,j;
	for ( i = 0; i < 3; i++)
		for ( j = 0; j < 5; j++) 
			scanf("%d", a[i][j]);
	int max = a[0][0],min=a[2][4];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++) {
			s += a[i][j];
			if (i == 0) {
				if (a[i][j] < min) min = a[i][j];
			}
			if (i == 2) {
				if (a[i][j] > max) max = a[i][j];
			}
		}
	printf("Sum= %d  min= %d  max= %d", s, min, max);
	printf("\n");
//	system("pause");
	return 0;
}
