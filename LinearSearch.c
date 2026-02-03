#include<stdio.h>
void linearSearch()
{
    int n,key;
    int index = 0;
    printf("Size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your Array :");
    for(int i = 0; i < n ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nPlease provide your key ");
    scanf("%d",&key);
        for(int i = 0; i < n ; i++)
    {
        if(arr[i] == key)
        {
            printf("Key found in %d position",i+1);
            index = i+1;
        }
        else if(i == n-1 && index == 0)
        {
            printf("Key not found");
        }
    }


}
int main()
{
   linearSearch();
   return 0;
}
