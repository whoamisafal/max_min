#include<stdio.h>

void main(){
	int num[]={1,3,5,8,0,13,-5,130,29,85,96},max,min,i;
	
	// Let index 0 is our max or min
	max=num[0];
	min=num[0];
	
	for(i=1;i<sizeof(num)/4;i++){
		if(max<num[i]){
			max=num[i];
		}else if(min>num[i]){
			min=num[i];
		}
	}
	printf("Largest num:%d\tSmallest num:%d",max,min);
	getch();
	return;
}
