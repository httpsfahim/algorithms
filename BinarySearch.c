#include<stdio.h>
void binarysearch()
{
    int n,key;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
    {
        if(a[j]>a[j+1])
        {
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
    }
        printf("\n");
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    scanf("%d",&key);
   int low = 0 ,high = n-1;
   int found = 0;
   while(low<=high)
   {
       int mid = (low + high)/2;
       if(a[mid] == key)
       {
           printf("%d",mid);
           found = 1;
           break;
       }
       else if(a[mid]<key)
       {
            low = mid+1;
       }
       else
       {
            high = mid-1;
       }

   }
   if(!found)
   {
       printf("Not Found");
   }

}



int main()
{
binarysearch();
}
