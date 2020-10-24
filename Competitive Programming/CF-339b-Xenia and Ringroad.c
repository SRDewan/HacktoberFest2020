#include<stdio.h>
long int a[100001];
int main()
{
	long int n,m;
	scanf("%ld %ld",&n,&m);
	for(int i=0;i<m;i++)
		scanf("%ld",&a[i]);
	long long int count=0;
	long long int t=1;
	for(int i=0;i<m;i++)
	{
		if(t<a[i])
		{
			count=count+(a[i]-t);
			t=a[i];
		}
		else if(t>a[i])
		{
			count=count+(n-t)+1;
			t=1;
			count=count+(a[i]-t);
			t=a[i];
		}

	}
	printf("%lld\n",count);
	return 0;
}
