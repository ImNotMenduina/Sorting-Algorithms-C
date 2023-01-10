#include<stdio.h>

void mergesort(int init , int fim , int* v) ; 
void merge(int init , int mid , int fim , int* v) ; 

int main()
{
    int v[] = {99 , 43 , 2 , 11 , 5 , 8} ; 
    int tam = 6; 

    mergesort(0 , tam , v) ;  // (0 , 5 , v) 

    for(int i=0 ; i<tam ; i++)
        printf("%d " , v[i]) ; 

    return 0 ; 
}

void mergesort(int init , int fim , int* v)
{
    if(init < fim-1)
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
            int b = mid ; 
            int helper[fim - init] ; 
            int k = 0 ; 
            
            while(a < mid && b < fim)
            {
                if(v[a] <= v[b]) helper[k++] = v[a++] ;   
                else helper[k++] = v[b++]  ; 
            }

            while(a < mid) helper[k++] = v[a++] ; 
            while(b < fim) helper[k++] = v[b++] ; 

            for(int i=init ; i<fim ; ++i)
            {
                v[i] = helper[i - init] ; 
            }   
}

