 /*
Name = Qazi Afaque naseer
Father name = Qazi naseer ahmed
Department = BSCS
1st semester 
*/

 #include <stdio.h>
int isprime(int n)
{
    int x,y;
    if(n<=1)
    {
        return 0;
    }
    for(x=2; x<=n; x++)
{
    if(n%x==0)
    {
    return 0;
    }
   
        return 1;
   
}
   
}
int main()
{
    int digit,collect;
    printf("Enter a number between 2 to 100\t");
    scanf("%d",&digit);
    if(digit>=2 && digit<=100)
    {
        collect=isprime(digit);
        printf("%d",collect);
    }
    else if(digit==1)
    {
        printf("ENter number between 2 to 100");
        scanf("%d",&digit);
        collect=isprime(digit);
        printf("%d",collect);
    }
    else
    {
        printf("Number out of range");
    }
}
    