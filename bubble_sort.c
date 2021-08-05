
// creating bubble sort own and also make bubble sort adaptive  //

#include<stdio.h>

int printArray( int *arr,int N)
{
    for(int i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}



int bubble_sort(int *arr, int N)
{   
    int temp;
    int isSorted=0; // initialising a variable

    for(int i=0;i<N-1;i++) // No. of pasess
    {   
        printf("working on pass number %d\n",i+1);
        isSorted=1; // changing the value of variable so to get the 
        for(int j=0;j<N-1-i;j++) 
        {
            if(arr[j] > arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSorted=0;
            }

           
            
        }

        if(isSorted)
        {
            return isSorted;
        }
       
    }
}


int main()
{
    int N;
    printf("Enter the size of array ");
    scanf("%d",&N);

    // taking the input from the user 
    int arr[N];
    printf("Enter the elements of array :");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Before sorting ");
    printArray(arr,N); // calling the function before sorting 
    
    bubble_sort(arr,N); // calling the bubble sort function 

    printf("After sorting ");

    printArray(arr,N); // calling the function after sorting


    return 0;
}