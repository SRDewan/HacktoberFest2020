#include<stdio.h>
int main()
{
	long int a,b,c,d,k,np,nc;
	long int t;
	scanf("%ld",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&k);
		np=(a/c);
		if((a%c)!=0)
			np++;
		nc=(b/d);
		if((b%d)!=0)
			nc++;
		if((np+nc)<=k)
			printf("%ld %ld\n",np,nc);
		else
			printf("-1\n");
	}
	return 0;
}

