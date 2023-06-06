#include <stdio.h>

// add ashari
int main()
{
    int N ;
    scanf("%d",&N);
    float a[N] , sum = 0.0;
    for(int i = 0 ; i<N ; i++)
    {
        scanf("%f",&a[i]);
        sum+=a[i];
    }

    sort(a,N);

    printf("\nMax: %.3f",a[N-1]);
    printf("\nMin: %.3f",a[0]);
    printf("\nAvg: %.3f",sum/(float)N);

}

void sort(float*const a,int N)
{

    for (int i = 0 ; i<N ; i++)
        for(int j = 0 ; j<N-1 ; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j] , &a[j+1]);
            }
        }
}

void swap(int *x , int *y)
{
    int b ;
    b = *x ;
    *x = *y ;
    *y = b ;
}
