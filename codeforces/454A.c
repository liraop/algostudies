#include <stdio.h>
#include <string.h>

int main()
{
	int n;	int m;	char *d="D"; char *b="*";
	scanf("%d",&n);
	char result[n];
	if ( n%2 == 0){
		return 0;
	}
	for (int i = 0; i < n; i++){
		strcpy(result, "");
		for (int j=1; j <= n; j++){
			if (((n)%2) == 0 ){
			strcat(result,d);
			} else {
				strcat(result,b);
			}
		}

	printf("%s\n",result);
	}
	return 0;
}
