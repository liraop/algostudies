#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,j;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int treeHeight = 1;

        scanf("%d", &j);

        if ( j == 0 )
	{
            printf("%d\n", treeHeight);
        }
        else 
        {
            for (int l = 1; l < j+1; l++)
            {
                // if even cycle, double tree height
                if ( (l%2)  != 0 ){
                    treeHeight *= 2;
                }                
		// if odd cycle, +1m height
                else {
                    treeHeight += 1;
                }
	    }
        printf("%d\n", treeHeight);
        }
    }
    return 0;
}
