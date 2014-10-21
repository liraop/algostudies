#include <stdio.h>

int main(){

	int t, i;

	scanf("%d", &t);

	while(t--){
		scanf("%d",&i);
		
		if ( i%2 == 0){
			printf("%d\n",( (i/2)*(i/2) ) );
		} else {
		       printf("%d\n", ( ((i+1)/2) * (i-((i+1)/2)) ));	
		}
	}


return 0;
}
