#include <stdio.h>
static int foo(void){
	printf("%s, %d: \n", __FUNCTION__, __LINE__);
	return 0; 
}
int main(int argc, char *argv[]){
	foo();
	return 0; 
}
