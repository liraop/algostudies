#include <stdio.h>

int main (){
	int n,t,i = 0, entrance, exit, result;
	scanf("%d %d", &n, &t);

	int width[n];

	while ( i < n &&  scanf("%d", &width[i]) == 1){
	i++; }

	while(t--){
		scanf("%d %d", &entrance, &exit);

		result = width[entrance];

		for ( int j = entrance; j <= exit; j++){

			if (result >= width[j]){
				result = width[j];
			}	
		}
		printf("%d\n",result);
		
	}

return 0;
}
