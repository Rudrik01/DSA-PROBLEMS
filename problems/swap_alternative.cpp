/**
██████╗░██╗░░░██╗██████╗░██████╗░██╗██╗░░██╗  ██████╗░░█████╗░████████╗███████╗██╗░░░░░
██╔══██╗██║░░░██║██╔══██╗██╔══██╗██║██║░██╔╝  ██╔══██╗██╔══██╗╚══██╔══╝██╔════╝██║░░░░░
██████╔╝██║░░░██║██║░░██║██████╔╝██║█████═╝░  ██████╔╝███████║░░░██║░░░█████╗░░██║░░░░░
██╔══██╗██║░░░██║██║░░██║██╔══██╗██║██╔═██╗░  ██╔═══╝░██╔══██║░░░██║░░░██╔══╝░░██║░░░░░
██║░░██║╚██████╔╝██████╔╝██║░░██║██║██║░╚██╗  ██║░░░░░██║░░██║░░░██║░░░███████╗███████╗
╚═╝░░╚═╝░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═╝╚═╝░░╚═╝  ╚═╝░░░░░╚═╝░░╚═╝░░░╚═╝░░░╚══════╝╚══════╝
Author:Rudrik Patel
Topic: Swap alternate number in an array
Note: Try the question for both case as follow:
      1)Take size of array as odd 
      2)Take size of array as even
*/

#include <iostream>

using namespace std;

void Print_result(int a[], int c){
    for(int i = 0;i<c;i++){
        cout << a[i] << " ";
    }cout << endl;
}
void Swap_alternative(int arr[] , int n){
    for(int i = 0;i<n;i+=2){
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int size;
    cout<<"Enter the size of your Array : ";
    cin >> size;
    int array[size];
    for(int i = 0;i<size;i++){
        cin >> array[i];
    }cout << endl;

    Swap_alternative(array,size);
    Print_result(array,size);
}