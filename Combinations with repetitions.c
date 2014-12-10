#include<stdio.h>
long long int min(long long int a, long long int b) { return a>b?b:a; } // find the smallest value
long long int binomialCoeff(long long int n, long long int k)
{
long long int C[n+1][k+1];
long long int i, j;

for (i = 0; i <= n; i++)//create a pascal triangle in 2D array
{
for (j = 0; j <= min(i, k); j++)
{
// Base Cases
if (j == 0 || j == i)
C[i][j] = 1;

else
C[i][j] = C[i-1][j-1] + C[i-1][j];
}
}

return C[n][k];
}

int main()
{
int n,k,t;
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&n,&k);	
printf("%lld\n",binomialCoeff(n+k-1,n-1));
}
return 0;
}

