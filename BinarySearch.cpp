#include<bits/stdc++.h>
using namespace std;

// ****** Binary Search *****

int BinarySearch(int arr[],int x, int n){
    int left, right, mid, last =0;
    left = 0;
    right = n-1;

    while(left <= right){
        mid = (left+right)/2;
        //printf("%d\n", mid);
        //printf("%d\n", arr[mid]);
        //printf("%d\n", x);
        //printf("%d\n", x);

        if(arr[mid] > x)
        {
            right = mid-1;

        }
        else if(arr[mid] < x)
        {
            left = mid+1;
        }
        else
        {
            return mid;
        }
    }

    return -1;

}
int main()
{
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int x,n;
    scanf("%d",&x);

    n =10;
    int p;
    p = BinarySearch(a,x,n);

    if(p!=-1){
        printf("It is Found at %d th Index of the Array\n",p);
    } else{
        printf("NOT FOUND !!\n",p);
    }

    return 0;
}

