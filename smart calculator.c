// Smart Calculator 

#include <stdio.h>

int main() {
    
    int n;
printf(" 1.Sum\n 2.multiply\n 3.Subtract\n 4.Divide\n");
printf("Enter Number(1,2,3,4,5):");
     scanf("%d",&n);

 if(n==1){ int n, i, num;
    int sum = 0;
  printf("How many numbers do you want to add? ");
    scanf("%d", &n);
 for(i = 1; i <= n; i++)
    {
printf("Enter number %d: ", i);
        scanf("%d", &num);
      sum=sum+num;
    }

    printf("The sum is: %d\n", sum);
    }
 else if(n==2){int n, i, num;
    long long int multiply=1;
  printf("How many numbers do you want to multiply? ");
    scanf("%d", &n);
 for(i = 1; i <= n; i++)
    {
printf("Enter number %d: ", i);
        scanf("%d", &num);
      multiply=multiply*num;
    }

    printf("The multiply is: %d\n", multiply);
      }
else if(n==3){int a , b;
        printf("Enter a :");
        scanf("%d",&a);
        printf("Enter b :");
        scanf("%d",&b);
        printf("%d-%d:%d",a,b,a-b);
       }
else if(n==4){int a , b;
        printf("Enter a :");
        scanf("%d",&a);
        printf("Enter b :");
        scanf("%d",&b);
        printf("%d÷%d:%d",a,b,a/b);          }
else if(n==5){int a , b;
        printf("Enter a :");
        scanf("%d",&a);
        printf("Enter b :");
        scanf("%d",&b);
        printf("%d*%d:%d",a,b,a*b);
    
       }
else{printf("--------------Wrong input---------------");}
    
    return 0;
}