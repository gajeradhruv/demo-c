#include<iostream>
using namespace std;

int getMax(int num[],int n){
    int max = INT_MAIN;

    for(int i=0;i<n; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}


int main(){
    int size;
    cin >> size;

    int num[100];
    for(int i = 0; i<size;i++){
        cin >> num[i];
    }
     cout <<"Maximum value is " <<getMax(num,size)  <<endl;
     cout <<"Maximum value is " <<getMain(num,size)  <<endl;


    return 0; 
}