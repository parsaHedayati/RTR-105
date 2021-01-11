#include <stdio.h> 
 
int main() 
{ int n; 
    printf("How many charachters and numbers you want to sort?");
    scanf("%d",&n);
    int i,temp,swapped,min,max;
    float median;
    char arr[n];
    printf("Enter %d elements:\n",n); 
    for(i=0;i<n;++i) //inputing the value
        scanf(" %c", &arr[i]); 
 
    for(i=0;i<n;++i){//bubble sorting
 arr[i] = arr[i];}
 printf("orginal list\n");
 for(i=0;i<n;++i){
     printf("%c with value of:%i\n", arr[i], arr[i]);
   
 }
 while(1){
     swapped = 0;
     for(i=0;i < n - 1;++i){
         if(arr[i]<arr[i+1]){
             int temp = arr[i];
             arr[i] = arr[i+1];
             arr[i+1] = temp;
             swapped = 1;
         }
     }if(swapped == 0){ break;}
 }
 printf("sorted list\n");
 for(i=0;i<n;++i){
  printf("%c with value of:%i\n", arr[i], arr[i]);
 }
 min=max=arr[0];//min & max value calculation
    for(i=1; i<n; i++)
    {
         if(min>arr[i])
		  min=arr[i];   
		   if(max<arr[i])
		    max=arr[i];       
    }
     printf("minimum of array is : %i",min);
     printf("\nmaximum of array is : %i with the value of\n",max);
     if(n % 2 == 0){//calculation for median
    int i = (n/2);
	  median = arr[i];
	printf("median value is : %c (value = %f)\n",(int)median,median);
	  
     }
 	else
	{
	  int i = (n/2)-1;
	  median = ((float)arr[i]+(float)arr[i+1])/2;
	printf("  median value is : %c with the value of %f\n",(int)median,median);
	}
	int mod[n],j, m=1;//calculation for mode
	for(j=0 ; j < n; j++)
	 if(arr[j]==arr[j+1])
	 {
	  mod[m] = arr[j];
	  m++;
	  }
	for(j=1;j<m;j++)
	  if(mod[j]==mod[j+1])
	printf("mod is : %c\n",mod[j]);
    return 0; 
} 
