#include <stdio.h>
#include<math.h>
#include<stdlib.h>
void sum();
void subtraction();
void product();
void divide();
void table();
void square();
void cube();
void factorial();
void power();
float sine();
float cosine();
float tangent();
float cotangent();
float second();
float cosecond();


int main()
{
    printf("    welcome to the scientific calculator\n");
    printf("    calculator made by suhani ahirwar\n");
    printf("  press 0 to exit the program \n           ");

printf("enter '+' for sum\n'-' for subtraction \n '*' for product \n'/' for divide \n");
printf("enter 't' for table of any number\n  's' for square of any number\n 'c' for cube of any number\n 'f' for factorial\n  'p' for power \n");
printf(" '$' for sine function\n  'g' for tangent \n 'o' for cosine\n  'n' for cotangent\n   'd' for second  \n 'e' for cosecond  \n");
do{
    char  choice;
    printf("enter which operation you want to perform\n");
    scanf("%c", &choice);
    switch(choice){
        case '+':
        sum();
        break;
        case '-':
        subtraction();
        break;
        case '*':
        product();
        break;
        case '/':
        divide();
        break;
        case 't' :
        table();
        break;
        case 's' :
        square();
        break;
        case 'c' :
        cube();
        break;
        case 'f' :
        factorial();
        break;
        case'p' :
        power();
        break;
        case '$' :
        sine();
        break;
        case 'O':
        cosine();
        break;
        case 'g':
        tangent();
        break;
        case 'n' :
        cotangent();
        break;
        case 'd' :
        second();
        break;
        case 'e' :
        cosecond();
        break;
        case 0:
        exit(0);
    }
}
while(1);


    return 0;
    }
void sum(){
    float a,b;
    printf("enter number a & b");
scanf("%f,%f", &a,&b);
    float sum=a+b;
    printf("sum is :%f\n", sum);
}
void subtraction(){
    float a,b;
    printf("enter number a & b");
scanf("%f,%f", &a,&b);
    float sub=a-b ;
    printf("subtraction is:%f\n",sub);
}
void product(){
    float a,b;
    printf("enter number a & b");
scanf("%f,%f", &a,&b);
    float pro= a*b ;
    printf("product is:%f\n",pro );
}
void divide(){
    float a,b;
    printf("enter number a & b");
scanf("%f,%f", &a,&b);
    float divide = a/b ;
    printf("divide is :%f\n", divide);
}
void table(){
    int n ;
     printf("enter number n");
scanf("%d", &n);
for(int i=1; i<=10;i++)
{
    printf("%d\n", n*i);
}
}
void square(){
    float n;
    printf("enter n");
    scanf("%f", &n);
    printf("%f",pow(n,2));
}
void cube(){
    float n;
    printf("enter n");
    scanf("%f", &n);
    printf("%f",pow(n,3));
}
void  factorial(){
  int n,fact;
     printf("enter n");
     scanf("%d", &n);
      fact=1;
      for(int i=1;i<=n;i++){
        fact=fact*i;
      }
      printf("%d\n",fact);
 }
 void power(){
    float b,p;
    printf("enter number and its power");
    scanf("%f,%f",&b,&p);
    printf("%f\n",pow(b,p));
 }
 float sine(){
    float n;
     printf("enter n");
    scanf("%f", &n);
   float value =sin((n*3.14)/180);
   printf("%f", value);
 }
 float cosine(){
    float n;
     printf("enter n");
    scanf("%f", &n);
    float value= cos((n*3.14)/180);
    printf("%f", value);
 }
float tangent(){
    float n;
     printf("enter n");
    scanf("%f", &n);
    float value= tan((n*3.14)/180);
    printf("%f", value);
}
float cotangent(){
    float n;
     printf("enter n");
    scanf("%f", &n);
    float value= 1/tan(((n*3.14)/180));
    printf("%f", value);
}
float second(){
    float n;
     printf("enter n");
    scanf("%f", &n);
    float value= 1/(cos((n*3.14)/180));
    printf("%f", value);
}
float cosecond(){
    float n;
     printf("enter n");
    scanf("%f", &n);
    float value= 1/(sin((n*3.14)/180));
    printf("%f", value);
}

