#include <stdio.h>
#include "unbounded_int.h"

int main(){
	char* s1;
	ubint ub1;
	
	long long i2;
	ubint ub2;

	char* s3;

	s1 = "-00000000000000000000000000000000000000000000";
	/* s1 = "-00043"; */
	i2 = 4223372036854775807;

	ub1 = str_to_ubint(s1);
	ub2 = ll_to_ubint(i2);

	s3 = ubint_to_str(ub1);
	printf("%s\n", s3);

	free_ubint(ub1);
	free_ubint(ub2);
	free(s3);

	return 0;
}
