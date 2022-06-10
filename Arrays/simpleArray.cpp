#include <iostream>
using namespace std;


int main(){

   int arr[5] = {10, 20, 30, 40, 50};
int getArrayLength = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0;i<getArrayLength;i++){
        cout<<arr[i]<<endl;
    }

}