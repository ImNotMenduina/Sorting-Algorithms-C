#include<stdio.h>

void mergesort(int init , int fim , int* v) ; 
void merge(int init , int mid , int fim , int* v) ; 

int main()
{
    int v[] = {99 , 43 , 2 , 11 , 5 , 8} ; 
    int tam = 6 ; 

    mergesort(0 , tam , v) ;  // (0 , 5 , v) 

    return 0 ; 
}

void mergesort(int init , int fim , int*v)
{
    if(fim > 1)
    {
        int meio = (init + fim)/2 ; 
        mergesort(init , meio , v) ; 
        mergesort(meio , fim , v) ; 
        merge(init , meio , fim , v) ; 
    }
}
void merge(int init , int mid , int fim , int*  v)
{
    int a = init ; 
    int b = mid + 1 ; 
    int helper[fim] ; 
    int k = 0 ; 
    
    while(a <= mid && b < fim)
    {
        while(v[a] <= v[b]) helper[k++] = v[a++] ;   
        while(v[b] > v[a]) helper[k++] = v[b++]  ; 

    }

}

