#include<stdio.h>
#include<math.h>

#define N 1000000

int main()
{
    double l, t[3], a[3]; /// l = Lemda, t = Theta.
    int m;

    while(1)
    {
        printf("Enter the value of Lemda: ");
        scanf("%lf", &l);
        
        if(l < 380 || l > 750)
        {
            printf("Out of the range. Please enter a valid number\n");
        }
        else
        {
            break;
        }
    }

    printf("Enter the value of m: ");
    scanf("%d", &m);

    printf("Enter the 3 value of a: ");
    for(int i = 0; i < 3; i++)
    {
        double k;
        scanf("%lf", &k);
        k /= N;
        a[i] = k;
    }
    
    l = l / 1000000000;

    t[0] = asin((m * l) / a[0]);
    t[1] = asin((m * l) / a[1]);
    t[2] = asin((m * l) / a[2]);

    if(t[0] >= t[2] && t[0] >= t[1])
    {
        printf("%lf would bent the light most.\n", (a[0] * N));
    }
    else if(t[2] >= t[1] && t[2] >= t[0])
    {
        printf("%lf would bent the light most.\n", (a[2] * N));
    }
    else if(t[1] >= t[2] && t[1] >= t[0])
    {
        printf("%lf would bent the light most.\n", (a[1] * N));
    }
    else
    {
        printf("m * lemda / a is greater then 1.\n");
    }

    return 0;
}
