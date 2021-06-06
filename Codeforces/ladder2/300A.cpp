#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n], negative=0, positive=0, zero=0, n_index;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0){
            positive++;
        }else if(arr[i]<0){
            negative++;
        }else{
            zero++;
        }
    }

    sort(arr, arr+n);
    // cout<<positive<<negative<<zero<<endl;
    int i;
    if(negative%2!=0){
        if(positive==0){
            // cout<<"HI"<<endl;
            cout<<negative-2<<" ";
            for(i=0;i<negative-2;i++){
                cout<<arr[i]<<" ";
            }
            
            cout<<endl<<2<<" ";
            for(int j=i;j<i+2;j++){
                cout<<arr[j]<<" ";
            }
        }else{
            // cout<<"HI";
            cout<<negative<<" ";
            for(i=0;i<negative;i++){
                cout<<arr[i]<<" ";
            }
            i = i+zero;
            cout<<endl<<positive<<" ";
            for(int j=i;j<i+positive;j++){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl<<zero<<" ";
        for(int i=0;i<zero;i++){
            cout<<0<<" ";
        }
        cout<<endl;
           
    }
    
    else{
        if(positive>0){
            cout<<negative-1<<" ";
            for(i=0;i<negative-1;i++){
                cout<<arr[i]<<" ";
            }
            n_index=i;
            i=i+zero+1;
            cout<<endl<<positive<<" ";
            for(int j=i;j<i+positive;j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl<<zero+1<<" ";
            for(int i=0;i<zero;i++){
                cout<<0<<" ";
            }
            cout<<arr[n_index]<<endl;
        }else{
            cout<<negative-3<<" ";
            for(i=0;i<negative-3;i++){
                cout<<arr[i]<<" ";
            }
            n_index=i;
            i = i+zero+2;
            cout<<endl<<positive+2<<" ";
            cout<<arr[n_index]<<" "<<arr[n_index+1]<<endl;
            cout<<zero+1<<" ";
            for(int i=0;i<zero;i++){
                cout<<0<<" ";
            }
            cout<<arr[n_index+2]<<endl;
        }
        
        
    }

    

    

    return 0;
}