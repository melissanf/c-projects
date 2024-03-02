#include <stdio.h>
//subroutine one fonction 
int factorial(int n){
    int i,r=1 ;
    if (n==0) return 1;
    else 
    for (i = n; i >0; i--)
    {
        r=r*i;
    }
    return r;
}

//focnction of qst two
int sum(int n){
    int i, r=0;
    for ( i = n; i >0; i--)
    {
        r=r+i;
    }
    return r;
}
//fonction of qst three
int max(int  x,int y){
    if (x>y) return x;
    if (y>x) return y;
    else return x;
}
//fonction for qst four 
int power(int n,int b){
    int i , r=1;
    if (b==1) return 1;
    for ( i = 0; i < n; i++)
    {
        r = r*b;
    }
    return r;
}
//fonction five 
int evencounter(int n){
    int cnt=0;
    if(n == 0) return 0;
    while(n!=0){
      int degit = n % 10;
      if (degit%2 == 0) cnt++;
      n = n/=10;
    }
    return cnt;
}
//fonction qst six
void rmqt(int a , int b , int *reminder , int *quotient){
    if (b == 0)
    {
        //error sign
        printf("Error: Division by zero is undefined.\n");
        return;
    }
    *quotient = a / b ;
    *reminder = a % b ;
    
}

int main(){
 //qst one "calculating factorial of number"
   int num1 ;
   printf("Enter a number to calculate his factorial\n");
   scanf("%d",&num1);
   int result=factorial(num1);
   printf("The result is %d\n", result);

   //qst two " Calculation of the sum S=1+2+... +N"
   int num2;
   printf("enter a number to calculate the sum\n");
   scanf("%d",&num2);
   int s = sum(num2);
   printf("th sum is %d\n",s);
   //qst three " Calculation of the Maximum between two integers A and B"
   int a , b;
   printf("please enter the first intiger \n");
   scanf("%d",&a);
   printf("please enter the second int\n");
   scanf("%d",&b);
   int m = max(a,b);
   printf("the max of %d and %d is %d\n",a ,b,m);
   //qst four " Calculation of the nth power (n >= 0) of a non-zero positive real number"
   int n, num3 ;
   printf("please enter the base\n");
   scanf("%d",&num3);
   while (num3==0 || num3<0)
   {
   printf("please enter the base\n");
   scanf("%d",&num3);
   }
   printf("please enter the power n \n");
   scanf("%d",&n);
   
   int r = power(n,num3);
   printf("the result of %d power of %d is %d \n ",num3 ,n,r);

   // qst five " Calculation of the number of even digits in an integer N"
   int num4;
   printf("Please enter the number : \n");
   scanf("%d", &num4);
   int e = evencounter(num4);
   printf("the number of even degitis in the number %d is %d \n",num4 , e);
   //qst six "Calculation of the quotient and the remainder of the integer division of an integer A by an integer B"
   int A ,B , remainder, quotient;
   printf("enter the deivdend\n");
   scanf("%d",&A);
   printf("enter the devisor\n");
   scanf("%d",&B);
   //calling procedure
   rmqt(A ,B ,&remainder ,&quotient);
   printf("Quotient: %d\n", quotient);
   printf("Remainder: %d\n", remainder);


   return 0;
}