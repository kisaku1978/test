#include <stdio.h>
#include <time.h>

static FILE *fp_trace; 

void
__attribute__ ((constructor))
trace_begin(void){
	//printf("%s, %d: \n", __FUNCTION__, __LINE__);
	fp_trace=fopen("trace.out", "w");
}

void
__attribute__ ((destructor))
trace_end(void){
	//printf("%s, %d: \n", __FUNCTION__, __LINE__);
	if(fp_trace!=NULL)
		fclose(fp_trace); 
}

void
__cyg_profile_func_enter(void *func, void *caller)
{
	if(fp_trace != NULL) {
		fprintf(fp_trace, "e %p %p %lu\n", func, caller, time(NULL) );
	}
}

void
__cyg_profile_func_exit(void *func, void *caller)
{
	if(fp_trace != NULL) {
		fprintf(fp_trace, "x %p %p %lu\n", func, caller, time(NULL));
	}
}

