#include<stdio.h>
#include<math.h>
int main()
{
int a,f,g=0,i,d;
scanf("%d",&a);
d=a;
for(i=1;a>10;i++)
{
f=a%10;
e=a/10;
g=g+pow(f,3);
}
c=c+pow(a,3);
if(d==g)
{
printf("YES");
}
else
{
printf("NO");
}
return 0;
}

