#include<iostream>
using namespace std;

int BS(int arr[],int first,int last,int a){

    int mid=(first+last)/2;
    if(first==last+1){
        return -1;
    }
    if(arr[mid]==a){
        return 1;
    }
    else if(a<arr[mid]){
        last=mid;
        return BS(arr,first,last,a);
    }
    else if(a>arr[mid]){
        first=mid+1;
        return BS(arr,first,last,a);
    }
}

int main(){

    int arr[100];
    int n;
    cout<<"Enter the array limit: ";
    cin>>n;
    cout<<"Enter the array element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while (1)
    {
        int a;
        cout<<"Enter the number to search: ";
        cin>>a;
        if(a==-1){
            break;
        }
        int first=0,last=n-1;
        int ans=BS(arr,first,last,a);
        if(ans==1){
            cout<<"Found\n";

        }
        if(ans==-1){
            cout<<"Not Found\n";
        }
        
    }
    
}