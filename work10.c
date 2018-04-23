#include <stdio.h>
#include <stdlib.h>

void turn_off(int*, int*,int*);
void turn_on(int*, int*,int*);
void break_down(int*,int*,int*);

typedef void (*light_func)(int*, int*,int*);

int main(void){

	light_func f[]={turn_off, turn_on, break_down};
        int prestate = 0;
	int std_in;
	int limit = 3;

	while(1){
	puts("\ninput charactor");
	scanf("%d",&std_in);
	if(std_in ==0 ||std_in == 1);
	else {
	puts("end");
	exit(1);
	}


	if(prestate < 0 && std_in == 1) std_in=2;
	(*f[std_in])(&std_in,&prestate,&limit);
	prestate = std_in;
	}

}

void turn_off(int *std_inf,int *prestatef,int *limitf){
	if(*prestatef == *std_inf) puts("\nstay off");
	else puts("\nlight off now");
	if(*limitf == 0) *std_inf = -1;
}

void turn_on(int *std_inf,int  *prestatef,int *limitf){
	if(*prestatef == *std_inf) puts("\nstay on");
	else{
	puts("\nlight on now");
	(*limitf)--;
	if(*limitf == 0) *std_inf = -1;
	}
}
void break_down(int *std_inf,int *prestatef, int *limitf){
	if(*prestatef == -1){
	puts("\nbreak!!!!!!!!!!!!!!!");
	*std_inf = -2;
	}
	else{
	puts("\nstay break");
	*std_inf = -2;
	}
}
