#include <stdio.h>
int main()
{
    int array[25], position, c, n, value;
    printf("Enter number of elements in the array\n");
    scanf("%d", &n);   
    printf("Enter %d elements\n", n);   
    for (c = 0; c < n; c++)    
        scanf("%d", &array[c]);    
    printf("Please enter the location where you want to insert an new element\n");
    scanf("%d", &position);   
    printf("Please enter the value\n");
    scanf("%d", &value);
    for (c = n - 1; c >= position - 1; c--)    
        array[c+1] = array[c];
    array[position-1] = value; 
    printf("Array is\n");  
    for (c = 0; c <= n; c++)    
        printf("%d\n", array[c]);   
		 printf("Enter the location where you wish to delete element\n");
    scanf("%d", &position);  
    if ( position >= n+1 )    
    printf("Deletion not possible.\n");  
    else
    {    
        for ( c = position - 1 ; c < n - 1 ; c++ ) 
        array[c] = array[c+1];        
        printf("Resultant array is\n"); 
        for( c = 0 ; c < n - 1 ; c++ )        
        printf("%d\n", array[c]);        
    }    
    return 0;
}
