#include<iostream>
using namespace std;

int BS(int arr[],int n,int first,int last,int a){
    while(first<=last){
        int mid=(first+last)/2;
        if(arr[mid]==a){
            return 1;
        }
        else if(arr[mid]<a){
            first=mid+1;
        }
        else if(arr[mid]>a){
            last=mid-1;
        }
    }
    return -1;
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

    
    for(int i=0;;i++){

        int a;
        int first=0,last=n-1;
        cout<<"Enter the number to search: ";
        cin>>a;

        if(a==-1){
            break;

        }
        
        int ans=BS(arr,n,first,last,a);
        if(ans==1){
            cout<<"Found\n";
        }
        else {
            cout<<"Not Found\n";
        }
        
        


    }



}