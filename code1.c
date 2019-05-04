#include<stdio.h>
#include<math.h>
int isaprime(int n)
{  
    int i;
    int fl=0;
   if(n<=1)
       return 0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
      return 1;
    else    
        fl=0;
        return 0;
    }
   
}
int main ()
{
int i=0, m=0;
int sum=0;
int arr[10]={8,7,9,4,-5,-6,1,2,81,31};
do
{    
  m=isaprime(arr[i]);
  if(m==1)
   {
        sum++;
    }
    m=0;
    i++;
}while(i!=10);
printf("%d test cases passed", sum);
return 0;
}
 
 
 
 
//lcm
#include <stdio.h>
int main()
{
    int n1, n2, m;
    printf("Enter 2 integers: ");
    scanf("%d %d", &n1, &n2);
 
     m=(n1>n2)?n1:n2;
    while(1)
    {
        if( m%n1==0 && m%n2==0 )
        {
            printf("The LCM is %d.",m);
            break;
        }
      ++m;
    }
    return 0;
}
