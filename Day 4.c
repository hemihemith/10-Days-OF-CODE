#include <stdio.h>
#define MAX_SIZE 100  

int main()
{
    int arr[MAX_SIZE];
    int size, i, toSearch, index;
    
    printf("Please Enter the size of array: ");
    scanf("%d", &size);
    
    printf("Please Enter the elements in array: ");
    
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf(" Please Enter the element to search: ");
    scanf("%d", &toSearch);
    
    index = 0; 
    for(i=0; i<size; i++)
    {
        if(arr[i] == toSearch)
        {
            index = 1;
            break;
        }
    }
    if(index == 1)
    {
        printf("%d is found in index %d ", toSearch, i + 1);
    }
    else
    {
        printf("%d is not found in the array", toSearch);
    }
    return 0;
}
