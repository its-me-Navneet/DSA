#include <stdio.h>

void selection_Sort(int array[], int n)
{  int c, p ,d , t;

for (c = 0; c < (n - 1); c++)  
  {
    p = c;

    for (d = c + 1; d < n; d++)
    {
      if (array[p] > array[d])
        p = d;
    }
    if (p != c)
    {
      t = array[c];
      array[c] = array[p];
      array[p] = t;
    }
  }
}

void display_Array(int array[], int n)
{ 

    int i;
printf("Sorted array using selection sort : \n");
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
}
 
int main()
{
   int  array[100],n ,c ;
   printf("Enter the size of Array : ");
   scanf("%d", &n);
  
   if(n > 100){
     printf("Please enter the size of array less than or equal to 100.");
     return 0;
   }
   
printf("Enter the elements of Array : \n", n);
for (c = 0; c < n; c++){
       scanf("%d", &array[c]);
  }
   
selection_Sort(array,n);
display_Array(array,n);
  return 0;
}
