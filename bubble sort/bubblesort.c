#include<stdio.h>

void bubble_C(int* v , int tam) ; 
void bubble_D(int* v , int tam) ; 
void printBubble(int* v , int tam) ; 

int main()
{
    int arr[] = {4 , 3 , 1 , 2 , 7 , 5} ; 
    int tam = 6  ; 

    //crescente:
    printf("crescente : ") ; 
    bubble_C(arr , tam) ; 
    printBubble(arr , tam) ; 
    //

    //decrescente:
    printf("decrescente :") ; 
    bubble_D(arr , tam) ; 
    printBubble(arr , tam) ; 
    //

    return 0 ; 
}

void bubble_C(int* v , int tam)
{
    for(int i=0 ; i<tam ; i++)
    {
        for(int j=1 ; j<tam ; j++)
        {
            if(v[j-1] > v[j])
            {
                int temp ; 
                temp = v[j-1] ; 
                v[j-1] = v[j] ; 
                v[j] = temp ; 
            }
        }
        tam-- ; 
    }
}

void bubble_D(int* v , int final)
{
    for(int i=0 ; i<final ; i++)
    {
        for(int j=final-1 ; j>0 ; j--)
        {
            if(v[j] > v[j-1])
            {
                int temp ; 
                temp = v[j] ; 
                v[j] = v[j-1] ; 
                v[j-1] = temp ; 
            }
        }
    }
}

void printBubble(int* v , int tam)
{
    for(int i=0 ; i<tam ; i++)
        printf("%d " , v[i]) ; 

    printf("\n\n") ; 
}

//att
