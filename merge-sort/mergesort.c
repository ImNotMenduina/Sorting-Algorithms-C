#include<stdio.h>

void mergesort(int init , int fim , int* v) ; 
void merge(int init , int mid , int fim , int* v) ; 

int main()
{
    int v[] = {99 , 43 , 2 , 11 , 5 , 8} ; 
    int tam = 6 ; 

    mergesort(0 , tam-1 , v) ; 

    return 0 ; 
}

void mergesort(int init , int fim , int*v)
{
    if(fim > 1)
    {
        int meio = (init + fim)/2 ; 
        mergesort(init , meio , v) ; 
        mergesort(meio+1 , fim , v) ; 
        merge(init , meio , fim , v) ; 
    }
}

