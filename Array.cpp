#include<iostream>
using namespace std;
void printArray(int arr[], int size) {
    cout<< "printing the array"<< endl;
    for(int i=0; i<size;i++){
        cout<< arr[i] << " ";
    }
    cout<< "printing DONE" <<endl;
}

  int main(){
    int number[15];
    cout <<"value at 14 index" << number [14] <<endl;

    int second[3] = {5,7,11};
    cout<< "value at 2 index"<< second[2]<<endl;
    int third[15] = {2,7};
    int n = 15;
    //printArray(third,15);
    int fourth[10] ={0};
    n = 10;
   // printArray(fourth,10);
    int fifth[10] = {1};
    n = 10;
   // printArray(fifth,10);
    int fifthSize =sizeof(fifth)/sizeof(int);
    cout<< "size of fifth is" << fifthSize <<endl;
     char ch[5] ={'a','b','c','r','p'};
     cout << ch[3] << endl;







    return 0;
  }