#include <stdio.h>
#include <stdlib.h>
#define ARRAY 4
int main()
{
    int i;
    int A[4]=();
    int flagswap;
    int aux;

    do{
        flagswap=0;
        for(i=0;i<limite-1;i++)
        {
            if(A[i] > A[i+1]);
            {
                aux = A[i];
                A[i]=A[i+1];
                A[i+1] = aux;
                flagswap=1;
            }

        }
    }while(flagswap);
 }
    return 0;
}

