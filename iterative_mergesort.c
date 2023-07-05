#include<stdio.h>
#include<stdlib.h>

void merge(int* arr, int l, int mid, int r)
{   
    int n1=mid-l+1;
    int n2=r-mid;
    int k2=l;
    int* arr1=(int*) calloc(n1,sizeof(int));
    int* arr2=(int*) calloc(n2,sizeof(int));
    for(int i=0; i<mid; i++){
        arr1[i]=arr[k2++];
    }
    for(int i=0; i<n2; i++){
        arr2[i]=arr[k2++];
    }

    int i=0, j=0,k=0;
    while(i<mid-l+1 && j<r-mid){
        if(arr1[i]<arr2[j]){
            arr[k++]=arr1[i++];
        }else{
            arr[k++]=arr2[j++];
        }
    }

    while(i<mid-l+1){
        arr[k++]=arr1[i++];
    }
    while(j<r-mid){
        arr[k++]=arr2[j++];
    }
    free(arr1);
    free(arr2);
}

void mergesort(int* arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

    merge(arr,s,mid,e);
}

int main(){
    int n;
    scanf("%d",&n);
    int* arr=(int *) calloc(n,sizeof(int));    

    for(int i=0; i<n; i++){
        scanf("%d",arr+i);
    }

    mergesort(arr,0,n-1);

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}