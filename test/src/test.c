
#include <stdio.h>
#include <stdlib.h>

//method to swap first and last elements in array
void swap_ends(int iarr[], int size) {
	int tmp = iarr[0];
	iarr[0] = iarr[size-1];
	iarr[size-1] = tmp;
}

struct student_record {
	char first_name[10];
	char last_name[10];
	char id[10];
	int first_year_enrolled;
};

int main() {
	//array end swapping stuff
	int iarray[] = {1,2,3,4,5};

	printf("Start: %d; End: %d\n", iarray[0], iarray[4]);
	swap_ends(iarray, 5);
	printf("Start: %d; End: %d\n", iarray[0], iarray[4]);

	//struct stuff
	typedef struct student_record student_t;
	student_t jr = {"Jacob", "Reiser", "12345", 2018};
	printf("%s %s-%s-%d\n", jr.first_name,
	                            jr.last_name,
	                            jr.id,
	                            jr.first_year_enrolled);

	return 0;
}
