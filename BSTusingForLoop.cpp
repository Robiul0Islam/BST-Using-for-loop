#include<iostream>
using namespace std;
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
        
        while (1)
        {
            
            int mid=(first+last)/2;
            if(first==last+1){
                cout<<"Not Found\n";
                break;
            }
            if(a==arr[mid]){
                cout<<"Found\n";
                break;
            }
            else if(a<arr[mid]){
                last=mid;
             
            }
            else if (a>arr[mid]){
                first=mid+1;
                
            }
            
        }
        


    }



}