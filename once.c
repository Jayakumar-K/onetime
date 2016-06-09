include <stdio.h>

int main()
{
  int a[10],n,i,xor=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
     xor=a[i]^xor;
 }
 printf("%d",xor);
    return 0;
}
