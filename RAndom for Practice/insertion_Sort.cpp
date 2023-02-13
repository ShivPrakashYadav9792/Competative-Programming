#include<iostream>
using namespace std;
int main(){
int arr[10];
cout<<"Enter the Elements"<<endl;
for( int i=0;i<5;i++){
    cin>>arr[i];
    }
    for(int i=0;i<5;i++){
            int min=i;
            for(int j=i+1;j<5;j++){
                if(arr[j]<arr[min])
                    min =j;
            }
            if(min !=i){
                int temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
            }
    }
cout<<"Aftr the insertion sort"<<endl;
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}

}

