#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	int n, i;

	printf("n = ");
	scanf("%d", &n);

	int m = n;
	double pi = 0.0;
	double num = 0.0;
	//TODO
	//add code below

	for(double i = 0.0; i <= m; ++i){
	    double mypow = 1.0;
        for(int k = 1; k <= i; ++k){
            mypow = mypow *16.0;
        }
        pi = pi + (4.0/(8.0*i+1.0) - 2.0/(8.0*i+4.0) - 1.0/(8.0*i+5.0) - 1.0/(8.0*i+6.0))*(1.0/mypow);
	}

	printf("PI = %.10f\n", pi);
	return 0;
}
