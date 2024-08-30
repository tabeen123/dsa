#include <stdio.h>
# include <limits.h>
# include <math.h>

int product(int n) {
    

    int p = 1;
    int num;
    
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        p *= num;
    }
    
    return p;
}

float average(int n) {

    int sum = 0;
    int num;
    
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        sum += num;
    }
    
    return sum / n;
}

int min(int a[], int n)
{
    int ans = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] < ans)
            ans = a[i];
    }
    return ans;
}

void displayEven(int a[], int n) {
    printf("Even numbers in the array are:\n");
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }
   
}

int isPrime(int n)
{
    if(n<= 1)return 0;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}

void displayPrime(int a[], int n)
{
    for(int i = 0 ; i < n; i++)
    {
        if(isPrime(a[i]))
            printf("%d\t", a[i]);
    }
}

float variance(int a[], int n) {
    float mean = average(a, n);
    float s = 0;  
    for (int i = 0; i < n; i++) {
        s += (a[i] - mean) * (a[i] - mean);
    }
    return s / n;
}


float standardDeviation(int a[], int n) {
    return sqrt(variance(a, n));
}