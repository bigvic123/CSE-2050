#include <stdio.h>
#include <stdlib.h>

int oddSumHelp(int count, int bound, int value)
{
	//fill in your code below
	//oddsum (12, 30, 200)
	if (count == 0 && value == 0){
        return 1;
	}
	for(int i = 2; i < bound + 3; i += 2){
        if(oddSumHelp(count - 1, bound - i, value - bound)){
            //recure, decrease bound by i to next possible odd solution
            printf("%i ", bound);
            //print list
            return 1;
        }
	}
	return 0;
}


//Do not change the code below
void oddSum(int count, int bound, int value)
{
    	if(value <= 0 || count <= 0 || bound <= 0) return;

    	if(bound % 2 == 0) bound -= 1;

    	if(!oddSumHelp(count, bound, value)) printf("No solutions.\n");
	else printf("\n");
}

int main(int argc, char *argv[])
{
	if(argc != 4) return -1;

	int count = atoi(argv[1]);
	int bound = atoi(argv[2]);
	int value = atoi(argv[3]);

	//oddSum(12,30,200);
	//oddSum(10,20,100);
	//oddSum(20,20,200);
	oddSum(count, bound, value);
	return 0;
}
