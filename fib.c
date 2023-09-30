#include <stdio.h>

int main(){
	int n = 10;
	int pre1 = 0;
	int pre2 = 1;
	int curr;

	for (int i = 1; i <= 10; i++){
		if (i > 2){
			curr = pre1 + pre2;
			pre1 = pre2;
			pre2 = curr;
			printf("%d ", curr);
		}
		else if (i == 1)
			printf("%d ", pre1);
		else if (i == 2)
			printf("%d ", pre2);
	}
	printf("\n");

	return 0;
}
