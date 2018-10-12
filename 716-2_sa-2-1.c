#include <stdio.h>

void main()
{
long int n,x,cnt,i;
cnt=0;
scanf("%ld", &n);
for (i=0; i<n; i++)
{
 scanf("%ld", &x);
 if (x>=0)
 cnt=cnt+1;
}
 printf("%ld\n", cnt);

}
