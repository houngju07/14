#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Book{
	int number;
	char title[20];
};

int main(int argc, char *argv[]) {
	int i;
	struct Book **bookself;
	
	bookself= (struct Book**)malloc(3*sizeof(struct Book*)); //3 pointer allocations
	for(i=0;i<3;i++)
		bookself[i]= (struct Book*)malloc(3*sizeof(struct Book));//10 allocation
	
	bookself[1][3].number =5;
	strcpy(bookself[1][3].title, "C++ Programming");
	
	(bookself[2]+4)->number =3;
	strcpy((bookself[2]+4)->title, "Communications Theory");
	
	printf("book(1,3): %i, %s\n",(bookself[1]+3)->number, (bookself[1]+3)->title);
	printf("book(2,4): %i, %s\n", bookself[2][4].number , bookself[2][4].title);
	
	//free allocatios
	for(i=0;i<3;i++)
		free(bookself[i]);
	free(bookself);
	
	return 0;
}
