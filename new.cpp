// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    // int rowcount,colcount;
    // cin>>rowcount;
    // cin>>colcount;
   
    //hollow rectangle

    // for(int row =0; row<rowcount;row++){
    //     if( row==0||row==rowcount-1){
    //         for(int col =0; col<colcount;col++){
    //             cout<<"*";
    //         }
        
    //     }
    //     else{
    //         cout<<"*";

    //         for(int i=0; i<colcount-2;i++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<"\n";
    // }

    // for(int row =rowcount; row>0; row--){
    //     for(int col =row; col>0; col--){
    //         cout<<"* ";

    // }
    // cout<<"\n";
    // }

    // int n;
    // cin>>n;

    // for(int row=0; row<n; row++){

    //     for(int col=0; col<n-row;col++){
    //         cout<<col+1<<" ";
    //     }
    //     cout<<"\n";
    // }

    // for(int row=0; row<n;row++){

    //     for(int col=0; col<n-row;col++){
    //         cout<<col+1<<" ";
    //     }
    //     cout<<"\n";
    // }

    // for(int row=0; row<n; row++){

        
    //     for( int i=0; i<row; i++){

    //         cout<<" ";
    //     }
        

       
    // }



//Problem -2

  int n;
  cin>>n;
  
  for(int i=0; i<n;i++){
  int k =0;
    for(int j=0; j<((2*n)-1);j++){
      
        if(j<(n-i-1)){
        cout<<" ";
        }
          else if(k<(2*i+1)){
            cout<<"*";
            k++;
          }
        else{
          cout<<" ";
        }

    }
      
  
    cout<<"\n";
}
  

    
    return 0;
}