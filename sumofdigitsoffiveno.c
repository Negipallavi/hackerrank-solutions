#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int r,sum;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n/=10;
    }
    printf("%d",sum);
    
    return 0;
}