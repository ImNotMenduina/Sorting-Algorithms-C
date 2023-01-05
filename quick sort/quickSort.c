#include<stdio.h>
void quicksort(int* v , int tam)  ; 
int main()
{

    int arr[] = {9 , 1 , 8 , 4 , 3 , 2} ;  
    int tam = 6 ; 

    quicksort(arr , tam) ; 

    for(int i=0 ; i<tam ; i++)
        printf("%d " , arr[i]) ; 

    return 0 ; 
}

void quicksort(int* v , int tam) 
{
    if(tam > 1)
    {
        int a = 1 ; 
        int b = tam - 1 ; 
        int pivo = v[0] ; 

        do
        {
            while(v[a] > pivo) a++ ; 
            while(v[b] < pivo) b-- ; 

            if(a < b)
            {
               int temp ; 
               temp = v[b] ; 
               v[b] = v[a] ; 
               v[a] = temp ; 
               a++ ; b-- ; 
            }

        }while(a < b) ; 

        v[0] = v[b] ;
        v[b] = pivo  ; 

        quicksort(v , b) ; 
        quicksort(&v[a] , tam-a) ;  
    }
}