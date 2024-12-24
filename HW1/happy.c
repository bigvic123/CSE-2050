#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;

	printf("n = ");
	scanf("%d", &n);

	int m = n;
	//TODO
	//add code below

	while(1){
        int x = n;
        int sum = 0;
        while(x > 0){
            int y = x%10;
            sum += y*y;
            x = x / 10;

        }
        n = sum;
        printf("%d\n", n);
        if(n==1){
            printf("%d is a happy number.\n", m);
            break;
        }
        else if(n==4){
            printf("%d is NOT a happy number.\n", m);
            break;
        }
	}
}
