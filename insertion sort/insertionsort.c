#include<stdio.h>

void printfArr(int* v , int tam) ; 

int main()
{
    int arr[] = {99 , 3 , 1 , 4, 7 , 2 , 5} ; 
    int tam = 7 ;
    
    //Crescente : 

    for(int j = 1 ; j < tam ; j++)
    {
        int k = j ; 
        while(k != 0 && (arr[k-1] > arr[k]))
        {
                int temp ; 
                temp = arr[k] ; 
                arr[k] = arr[k-1] ; 
                arr[k-1] = temp ;
                k-- ; 
        }
    }
    printf("crescente : ") ; 
    printfArr(arr , tam) ; 

    // 

    //Decrescente : 
    
    for(int i = tam-1 ; i > 0 ; i--)
    {
        int j = i ; 
        while(j < tam && arr[j-1] < arr[j])
        {
            int temp ; 
            temp = arr[j-1] ; 
            arr[j-1] = arr[j] ; 
            arr[j] = temp ; 
            j++ ; 
        }
    }
    printf("decrescente : ") ; 
    printfArr(arr , tam) ; 

    //

    return 0 ; 
}

void printfArr(int* v, int tam)
{
    for(int i=0 ; i<tam ; i++)
        printf("%d " , v[i]) ; 
    
    printf("\n\n") ; 
}