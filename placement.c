// code for the 1+2+3+4+5+6+7+8+9
/*
#include<stdio.h>
int main()
{
    long long unsigned int  sum=0;
    int i;
    int n=10000000000
    ;
    for(i=1;i<=n;i++)
    {
        sum =sum+i;

    }
    printf("the sum of first %d natural numbers is %llu",n,sum);


}
    */

// code for the 1*2*3*4*5*6
/*
#include<stdio.h>
int main()
{
    
    long long unsigned int prod =1;
    int i;
     int n=101;
    for(i=1;i<=n;i++)
    {
        prod = prod *i;
    }

    printf("the multiplication of first %d natural numbers is %llu",n,prod);
    
}
    */

    
// code for the power of a number 
/*
#include<stdio.h>
int main()
{
    int prod =1;
    int i;
    int base ,power;
    printf("enter the base and power");
    scanf("%d%d",&base,&power);

    
    for(i=1;i<=power;i++)
    {
        prod =prod*base;
    }
    printf("the power of %d is %d is %d",base,power,prod);

}
    */


// find no of digit in a number 
/*
#include<stdio.h>
int main()
{
    int b;
    int n=7988861915;
    b=n;
    int count=0;
    int last_digit;
    while(n!=0)
    {
        last_digit=n%10;
        count++;
        n=n/10;
    }
    printf("the no of digit in %d is %d",b,count);

}
    */
// check given number is a factor of a number or not check that 24 is factor of 4 or not 
/*
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter the number ");
    scanf("%d",&num1);
    printf("enter the number for which we are check that given number is factor or not");
    scanf("%d",&num2);
    if(num1%num2==0)
    {
        printf("%d is a factor of %d",num1,num2);
    }
    else
    {
        printf("%d is not factor of %d",num1,num2);
    }


}
    */
// print all factors of a number 
/*
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }


}
    */
   // wap to find the count of all factors of a number 
   /*

   #include<stdio.h>
   int main()
   {
    int n;
    int count =0;
    printf("enter the number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           count++;
        }
    }
    printf("number of factors of a %d are %d",n,count);

   }
    */
   // wap to find the given number is prime or not 
   /*
   
   #include<stdio.h>
   int main()
   {
    int n;
    int count =0;
    printf("enter the number ");
    scanf("%d",&n);
    if (n==1 )
    {
        printf("%d is neither prime nor composite",n);
    }
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           count++;
        }
    }
    if (count==2)
    {
        printf("%d is a prime number",n);

    }
    else{
        printf("%d is not a prime number",n);
    }
    

   }
    */



// wap to check  given number is a perfect number or not i.e. exculdes that number 
/*
#include<stdio.h>
int main()
{
 int n;
 //int count =0;
 printf("enter the number ");
 scanf("%d",&n);
 int sum=0;
 for(int i=1;i<n;i++)
 {
     if(n%i==0)
     {
       // count++;
       sum=sum+i;

     }
 }
 if(sum==n)
 {
    printf("%d is perfect number ",n);
 }
 else
 {
    printf("%d is not perfect number ",n);
 }
 

}
 */
// write a code for the to print the factorial of 5 to 7 
/*
#include<stdio.h>
int main()
{
    int prod =1;
    for(int n=5;n<=7;n++)
    {
        for(int i=1;i<=n;i++)
        {
            prod =prod*i;

        }
        printf("factorial of %d is %d\n",n,prod);
        prod=1;
    }
}
// */
 // e^x series
 /*
 #include <stdio.h>

 int main() {
     float sum = 0.0;
     int x = 2;
     
     for (int i = 0; i <= 3; i++) {
         // Calculate x^i
         int prod = 1;
         for (int j = 0; j < i; j++) {  // Fixed loop condition
             prod *= x;
         }
 
         // Calculate i!
         int prod1 = 1;
         for (int k = 1; k <= i; k++) {  // Fixed loop range
             prod1 *= k;
         }
 
         // Summation
         sum += prod * 1.0 / prod1;
     }
 
     printf("Result: %f\n", sum);
     return 0;
 }
 */



 // write the code for the e^x series 
//  #include<stdio.h>
//  int main()
//  {
//     // code for the e^x series
//     float sum = 0.0;
    
// 
/*
#include<stdio.h>
int main()
{
    int row,space,star;
    for(row=1;row<=5;row++)
    {
        for(space=1;space<=5-row;space++)
        {
            printf(" ");

        }
        for(star=1;star<=5;star++)
        {
            printf("*");
        }
        printf("\n");
    }
}
    */
    /*
#include<stdio.h>
int main()
{
    int row;
    for(row=1;row<=4;row++)
    {
        printf("%d*%d",row,row);
        printf("\n");
    }
    
}
    */
   // pattern printing part 1 
   // Q:1.
   /*
#include<stdio.h>
int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=5;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }

}
    */
   // Q:2.
/*
#include<stdio.h>
int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }

}
    */
// Q:3.
/*
#include<stdio.h>
int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d",row);
        }
        printf("\n");
    }
}
    */
// Q:4.
/*
#include<stdio.h>
int main()
{
    int row,col;
    for(row=1;row<=5;row++) 
    {
        for(col=1;col<= ;col++)
        {
            printf("*");
        }
        printf("\n");
    }
        
}
    */
   // Q:5.
   /*
   #include<stdio.h>
   int main()
   {
      int row,col;
      for(row=1;row<=5;row++)
      {
        for(col=1;col<=6-row;col++)
        
            printf("%d",col);
    
        printf("\n");
      }
   }
*/

// Q:6.
/*
#include<stdio.h>
int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=6-row;col++)
        {
            printf("%d",row);
        }
        printf("\n");
    }
}
    */

// Q:7.
/*
#include<stdio.h>

    int main()
    {
        int row,col;
        for(row=1;row<=5;row++)
        {
            for(col=1;col<=6-row;col++)
            {
                printf("*");
            }
            printf("\n");
        }

    }
*/

// Q:8.
/*
#include<stdio.h>
int main()
{
    int row,space,star;
    for(row=1;row<=5;row++)
    {
        for(space=1;space<=5-row;space++)
        {
            printf(" ");

        }
        for(star=1;star<=row;star++)
        {
            printf("*");
        }
        printf("\n");
    }
}
    */
   // Q:9.
   /*
   #include<stdio.h>
   int main()
   {
     int row,space,star;
     for(row=1;row<=4;row++)
     {
        for(space=1;space<=4-row;space++)
        {
            printf(" ");
        }
        for(star=1;star<=2*row-1;star++)
        {
            printf("*");
        }
        printf("\n");
     
   }
}
   */

   // Q:10
   /*
   #include<stdio.h>
   int main()
   {
       int row,col;
       for(row=1;row<=4;row++)
       {
          for(col=1;col<=row;col++)
          {
            printf("%d",row);
          }
          printf("\n");
       }

   }
       */
      // Q:11 
      /*
      #include<stdio.h>
      int main()
      {
        int row,col;
        for(row=1;row<=4;row++)
        {
            for(col=1;col<=row;col++)
            {
                printf("%c",64+row);
            }
            printf("\n");
        }
      }
        */
        // Q:12 dout
        // #include<stdio.h>
        // int main()
        // {

        // }

        // Q:13. 

        // dout in this code 
        /*
#include<stdio.h>
int main()
{
    int row,col;
    char ch;
    for(row=1;row<=4;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c",ch);
            ch=ch+1;
        }
        printf("\n");
    }
   // printf("hello world ");
}
   */

// Q:14 
/*

#include<stdio.h>
int main()
{
    int row,cl,star;
    for(row=1;row<=5;row++)
    {
        for(star=1;star<=6-row;star++)
        {
            printf("*");
        }
        printf("\n");
    }

}

*/

// part 2 pattern printing problems 
// Q:1 dout 
/*
#include<stdio.h>
int main()
{
    int row,col;
    for(row=1;row<=4;row++)
    {
        for(col=1;col<=5;col++)
        {
            if(row==1|| row==4 ||col==1|| col==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            printf("\n");
        }

    }

}

*/
// Q:2
/*
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of rows and colums  ");
    scanf("%d",&n);
    int row,col;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
*/


// wap to find that given number is prime as well as palindrome 
// code for the check that given number is prime or not
/*
#include<stdio.h>
   int main()
   {

    int n;
    int count =0;
    printf("enter the number ");
    scanf("%d",&n);
    if (n==1 )
    {
        printf("%d is neither prime nor composite",n);
    }
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           count++;
        }
    }
    if (count==2)
    {
        printf("%d is a prime number",n);

    }
    else{
        printf("%d is not a prime number",n);
    }
    

   }
    */
   // code for the checking the given number is palindrome or not 
   /*
   #include<stdio.h>
   int main()
   {
      int n;
      printf("enter the number");
      scanf("%d",&n);
      int remainder;
      int reverse_number=0;
      int original_number;
      original_number=n;
      while(n!=0)
      {
        remainder=n%10;
        reverse_number=reverse_number*10+remainder;
        n=n/10;
      }
      if(original_number==reverse_number)
      {
        printf("this number is a palindrome number ");
      }
      else
      {
        printf("this number is not  a palindrome number ");
      }

   }
      */
     /*
     #include <stdio.h>
     


// Function to check if a number is prime
int is_prime(int n) {
    if (n < 2) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

// Function to check if a number is a palindrome
int is_palindrome(int n) {
    int original = n, reversed = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return original == reversed; // Returns 1 if palindrome, 0 otherwise
}

int main() {
    int n;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is both prime and palindrome
    if (is_prime(n) && is_palindrome(n)) {
        printf("%d is a prime palindrome number.\n", n);
    } else {
        printf("%d is NOT a prime palindrome number.\n", n);
    }

    return 0;
}
*/
// Q:3.
/*
#include<stdio.h>
int main()
{
    int row,space,star;
    for(row=1;row<=5;row++)
    {
        for(space=1;space<=5-row;space++)
        {
            printf(" ");
        }
            for(star=1;star<=5;star++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
*/
// Q:4.
/*
#include<stdio.h>
int main()
{
    int row,col,space;
    for(row=1;row<=5;row++)
    {
        for(space=1;space<=5-row;space++)
        {
            printf(" ");
        }
        for(col=1;col<=5;col++)
        {
            if(row==1 || row==5 || col==1|| col==5)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
      printf("\n");
    }
}
    */
   // Q:5.
   /*
   #include<stdio.h>
   int main()
   {
      int row,space,col,n;
      printf("entre the number of rows  ");
      scanf("%u",&n);
      for(row=1;row<=n;row++)
      {
        for(space=1;space<=row-space;space++)
        {
            printf(" ");
        }
        for(col=1;col<=5;col++)
        {
            printf("*");
        }
        printf("\n");
        
      }

   }
      */
     // Q:6.
     // dout  check from pankaj sir 
     /*
     #include<stdio.h>
     int main()
     {
        int row,space,col,n;
        printf("enter the number of rows ");
        scanf("%u",&n);
        for(row=1;row<=n;row++)
        {
            for(space=1;space<=row-space;space++)
            {
                printf(" ");
            }
            for(col=1;col<=5;col++)
            {
                if(row==1 || row==5 || col==1 || col==5)
                  printf("*");
                else
                printf(
                    " "

                );
            }
            printf("\n");
        }
     }
        */
// Q:7.
/*
#include<stdio.h>
int main()
{
    int row,col,n;
    printf("enter the number of rows ");
    scanf("%u",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%u*",row);
        }
        printf("\n");
    }
}
    */
   // Q:8.
   /*
   #include<stdio.h>
   int main()
   {
       int row,col,n;
       for(row=1;row<=4;row++)
       {
          for(col=1;col<=row;col++)
          {
           
            if(row==col)
            {
                printf("%d",row);

            }
            else{
                printf("%u*",row);
            }
            
          }
          printf("\n");
       }

      
   }
       */
      // Q:9.
      /*
#include<stdio.h>
int main()
{
    int row,col,n;
    printf("enter the number of rows ");
    scanf("%u",&n);
    for(row=1;row<=n;row++)
    {
       for(col=1;col<=row;col++)
       {
        if((row+col)%2==0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
       
    }
   
}
    */
   // Q:10
   /*
   #include<stdio.h>
   int main()
   {
      
   }*/
   // lecture 19 pattern printing 
   // Q:1 upper part of the butterfly 
   /*
   #include<stdio.h>
   int main()
   {
      int row,star,space,n;
      printf("enter the number of row ");
      scanf("%d",&n);
      for(row=1;row<=n;row++)
      {
        // code for to print the star
        for(star=1;star<=row;star++)
        {
            printf("*");
        }
        // code for to print the space
        for(space=1;space<=2*(n-row);space++)
        {
            printf(" ");
        }
        // code for to print the star
        for(star=1;star<=row;star++)
        {
            printf("*");
        }
        printf("\n");
      }
   }
*/
// Q:2. lower part of the butterfly 
/*
#include<stdio.h>
int main()
{
    int row,star,space;
    for(row=1;row<=4;row++)
    {
        // code to print the star
        for(star=1;star<=4-row;star++)
        {
            printf("*");
        }
        // code to print the space
        for(space=1;space<=2*row-1;space++)
        {
            printf(" ");
        }
        // code to print the star
        for(star=1;star<=5-row;star++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}*/
    
   // Q:3. merging both the code 
   // complete code for the butterfly 
   /*
   
   #include<stdio.h>
   int main()
   {
      // upper part of the butterfly
      int row,star,space,n;
      printf("enter the number of row ");
      scanf("%d",&n);
      for(row=1;row<=n;row++)
      {
        // code for to print the star
        for(star=1;star<=row;star++)
        {
            printf("*");
        }
        // code for to print the space
        for(space=1;space<=2*(n-row);space++)
        {
            printf(" ");
        }
        // code for to print the star
        for(star=1;star<=row;star++)
        {
            printf("*");
        }
        printf("\n");
      }
      // lower part of the butterfly 
      for(row=1;row<=n;row++)
    {
        // code to print the star
        for(star=1;star<=n-row;star++)
        {
            printf("*");
        }
        // code to print the space
        for(space=1;space<=2*row-1;space++)
        {
            printf(" ");
        }
        // code to print the star
        for(star=1;star<=n-row;star++)
        {
            printf("*");
        }
        printf("\n");
    }


   }
      */
// Q:4 code to print upper part of the diamond 
/*
#include<stdio.h>
int main()
{
    int row,space,star,n;
    printf("enter the number of rows ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        // code to print space 
        for(space=1;space<=n-row;space++)
        {
            printf(" ");
        }
        // code to print star
        for(star=1;star<=2*row-1;star++)
        {
            printf("*");
        }
        printf("\n");
        for(row=1;row<=4;row++)
    {
        // code to print space yashwant
        for(space=1;space<=row;space++)
        {
            printf(" ");
        }
        // code to print star
        for(star=1;star<=8-(2*row-1);star++)
        {
            printf("*");
        }
        printf("\n");
        for(row=1;row<=4;row++)
    {
        // code to print space yashwant
        for(space=1;space<=row;space++)
        {
            printf(" ");
        }
        // code to print star
        for(star=1;star<=8-(2*row-1);star++)
        {
            printf("*");
        }
        printf("\n");
    
    
    

    }
}
    */
// Q:5 code to print lower part of the diamond
/*
#include<stdio.h>
int main()
{
    int row,space,star;
    for(row=1;row<=4;row++)
    {
        // code to print space yashwant
        for(space=1;space<=row;space++)
        {
            printf(" ");
        }
        // code to print star
        for(star=1;star<=8-(2*row-1);star++)
        {
            printf("*");
        }
        printf("\n");
    }

}
    */
// Q:6. code to print complete diamond 
/*
#include<stdio.h>
int main()
{
    int row,space,star,n;
    printf("enter the number of rows ");
    scanf("%d",&n);
    
    // code to print upper part of the diamond
    for(row=1;row<=n;row++)
    {

        for(space=1;space<=n-row;space++)
        {
            printf(" ");
        }
        for(star=1;star<=2*row-1;star++)
        {
            printf("*");
        }
        printf("\n");
        
    }
        // code to print the lower diamond
        
        for(row=1;row<=n-1;row++)
        {
            for(space=1;space<=row;space++)
            {
                printf(" ");
            }
            // code to print the star 
            for(star=1;star<=2*(n-1)-(2*row-1);star++)
            {
                printf("*");
            }
            printf("\n");
        }
            

    
}

*/
// Q:7.
// code to print the hellow  upper diamond 
/*
#include<stdio.h>
int main()
{
    int row,space,col,star;
    for(row=1;row<=5;row++)
    {
        // code to print space 
        for(space=1;space<=5-row;space++)
        {
            printf(" ");
        }
        // code to print 1st boundary star  
        for(col=1;col<=2*row-1;col++)
        {
            if(col==1)
            {
                printf("*");
            }
        }
        // code to print space 
        for(space=1;space<=2*(row-1);space++)
        {
            printf(" ");

        }
    }
}
    */
   // Q:8.
   // solving questions using function lect 23 home work 

// Q:8.1 factorial of a number using function with using return value 

/*
#include<stdio.h>
int factorial(int a);// forward declaration 
int main()
{
    int n;
    printf("enter the number :  ");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,factorial(n));
}
// defination of the function 
int factorial(int a)
{
    int prod=1;
    int i;
    for(i=1;i<=a;i++)
    {
        prod=prod*i;
    }
    return prod;

}
    */

// wap in which we are calculating the factorial of  a number what return value is void
/*
#include<stdio.h>
void factorial(int a);// forward declaration 
int main()
{
    int n;
    printf("enter the number :  ");
    scanf("%d",&n);
   factorial(n);
}
// defination of the function 
void  factorial(int a)
{
    int prod=1;
    int i;
    for(i=1;i<=a;i++)
    {
        prod=prod*i;
    }
    printf("the factorial of a %d is %d ",a,prod);

}
    */
   // wap to find the table of a number in the given form  using function and no any return value 
   /*
   4*1=4
   4*2=8
   4*3=12
   4*4=16
   4*5=20
   4*6=24
   4*7=28
   4*8=32
   4*9=36
   4*10=40
   */

   /*
  #include<stdio.h>
  void table_of_number(int );// forward declaration is only for information provide to the complier that there is a  function 
  int main()
  {
     //int i;
     int n;
     printf("enter the number to write table of  a number  : ");
     scanf("%d",&n);
     table_of_number(n);
  }
  void table_of_number(int x )
  {
    int i;
    printf("table of %d is \n",x);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",x,i,x*i);
        printf("\n");
    }
  }

*/

// wap to find the table of a number in the given form  using function and return value is int 
   /*
   4*1=4
   4*2=8
   4*3=12
   4*4=16
   4*5=20
   4*6=24
   4*7=28
   4*8=32
   4*9=36
   4*10=40
   */

   //dout in this question 
   /*
  #include<stdio.h>
  int  table_of_number(int );// forward declaration is only for information provide to the complier that there is a  function 
  int main()
  {
     //int i;
     int n;
     printf("enter the number to write table of  a number  : ");
     scanf("%d",&n);
     printf("table of %d is ");
  }
  int  table_of_number(int x )
  {
    int i;
    printf("table of %d is \n",x);
    for(i=1;i<=10;i++)
    {
        return for(i=1;i<=10;i++)
        {
            x*i;
        }
        printf("\n");
    }
  }

*/

/*
// wap to find the given number is prime or not using function
#include<stdio.h>
void prime(int n);// forward declaration for the prime function and n is a formal argument 
int main()
{
    int x;// x is a actual number 
    printf("enter the number to check prime or not : ");
    scanf("%d",&x);
    prime(x);
}
void prime(int n)
{
    int i;
    int count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count ==2)
    
        printf("%d is a prime number ",n);
    else
        printf("%d is not a prime number ",n);
    

}
*/

/*
// wap to find that given number is perfect or not 
#include<stdio.h>
void perfect(int n);// forward declaration & n is formal argument 
int main()
{
    int x;// x is a actual argument 
    printf("enter the number : ");
    scanf("%d",&x);
    perfect(x);
    // here main function is the calling function and perfect(x) is a called function 

}
// defination of the  function
void perfect(int n)
{
    int i;
    int sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        
        
    }
    if(sum==n)
            printf("%d is a perfect number ",n);
        else
            printf("%d is not a perfect number ",n);

}
            */

// wap to find that given number is strong number or not i.e. all digit ke ! ka sum ==number 
/*
#include<stdio.h>
void   strong_number(int n);// this is the forward declarations of the strong number function & here n is the formal argument
int main()
{
    int x;// x is the actual argument
    printf("enter the number :  ");
    scanf("%d",&x);
    strong_number(x);
}
// defination of the function
void   strong_number(int n)
{
    int sum=0;
    int num=n;
   // int prod=1; it is create an error
    int last_digit;
    int i;
    while(n!=0)
    {
       // int prod=1; it is also a mistake 
        last_digit=n%10;
        int prod=1;
        // code for the factorial 
    for(i=1;i<=last_digit;i++)
      {
           prod=prod*i;
          // sum=sum+prod;
      }
      sum=sum+prod;
      n=n/10;// to reduce the number
    }
    if(sum==num)
    {
        printf("%d is a strong number ",num);
    }
        
    else
    {
        printf("%d is not a  strong number ",num);
    }
        
}
    */
// write a function to find the armstrong number 



// wap for decimal number to binary number conversion
#include<stdio.h>
int main()
{
    printf("enter the number decimal number to convert into Binary number ");
    int n;
    int i=0;
    int j;
    int a[32];
    scanf("%d",&n);
    while(n!=0)
    {
        a[i]=n%2;
        ++i;
        n=n/2;
    }
    for(j=i-1;j>=0;j--)
        printf("%d",a[j]);
}

// wap for decimal number to octal  number conversion

#include<stdio.h>
int main()
{
    printf("enter the number decimal number to convert into octal number ");
    int n;
    int i=0;
    int j;
    int a[32];
    scanf("%d",&n);
   // int num=n;
    while(n!=0)
    {
        a[i]=n%8;
        ++i;
        n=n/8;
    }
    // print the array element in reverse order
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    
}

// write a program for decimal number to hexadecimal number conversion
#include<stdio.h>
int main()
{
    printf("enter the number decimal number to hexadecimal  number ");
    int n;
    int i=0;
    int j;
    int a[32];
    scanf("%d",&n);
   // int num=n;
    while(n!=0)
    {
        a[i]=n%16;
        ++i;
        n=n/16;
    }
    // print the array element in reverse order
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    
}
// // write a function for the conver the decimal to binary number
#include<stdio.h>
void  decimal_to_binary(int x );// forward declaraion 
int main()
{
    printf("enter the number decimal number to convert into Binary number ");
    int n;
    scanf("%d",&n);
    printf("decimal to binary conversion of %d is :\n",n );
    decimal_to_binary(n);
  
}
void  decimal_to_binary(int x)
{
   
    int i=0;
    int j;
    int a[32];
    while(x!=0)
    {
        a[i]=x%2;
        ++i;
        x=x/2;
    }
    // print the array element in reverse order
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
   
}

// write a function for the conver the decimal to octal number
#include<stdio.h>
void  decimal_to_octal(int x );// forward declaraion
int main()
{
    printf("enter the number decimal number to convert into octal number ");
    int n;
    scanf("%d",&n);
    printf("decimal to octal conversion of %d is :\n",n );
    decimal_to_octal(n);
   
}
void decimal_to_octal(int x)
{
    int i=0;
    int j;
    int a[32];
    scanf("%d",&x);
   // int num=n;
    while(x!=0)
    {
        a[i]=x%8;
        ++i;
        x=x/8;
    }
    // print the array element in reverse order
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
}

// 
// write a function for the conver the decimal to hexadecimal number
#include<stdio.h>
void decimal_to_hexadecimal(int x );// forward declaraion
int main()
{
    printf("enter the number decimal number to hexadecimal  number ");
    int n;
    scanf("%d",&n);
    printf("decimal to hexadecimal conversion of %d is :\n",n );
    decimal_to_hexadecimal(n);
    
    
}
void decimal_to_hexadecimal(int x)
{
   
    int i=0;
    int j;
    int a[32];
    while(x!=0)
    {
        a[i]=x%16;
        ++i;
        x=x/16;
    }
    // print the array element in reverse order
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
}

// solving programs using recursion 























