#include<stdio.h>
int binarySearch(int a[],int n,int data){
int L=0, r=n-1, mid;
while(L<=r)
{
    mid= (L+r)/2;
    if( data== a[mid])
    {
        return mid;
    }
    else if(data>a[mid])
    {
        L=mid+1;
    }
    else
    {
        r=mid-1;
    }
}
return -1;
}
int main()
{
    int t;
    while(1){
    int a[100],n,data;
    printf("how many elements: ");
    scanf("%d", &n);
    printf(" Enter sorted elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Data you want to search : ");
    scanf("%d",&data);
    int index= binarySearch(a,n,data);
    if(index != -1)
    {
        printf("Found at index: %d\n ",index);
    }
    else
    {
        printf("Data is not found in the Array list!!!!\n",index);
    }
    }
    t--;
    return 0;
}
/* Output:
how many elements: 5
 Enter sorted elements: 23 31 34 42 78
Enter the Data you want to search : 42
Found at index: 3
 how many elements: 3
 Enter sorted elements: 34 79 200
Enter the Data you want to search : 42
Data is not found in the Array list!!!!
how many elements: */
