/**
██████╗░██╗░░░██╗██████╗░██████╗░██╗██╗░░██╗  ██████╗░░█████╗░████████╗███████╗██╗░░░░░
██╔══██╗██║░░░██║██╔══██╗██╔══██╗██║██║░██╔╝  ██╔══██╗██╔══██╗╚══██╔══╝██╔════╝██║░░░░░
██████╔╝██║░░░██║██║░░██║██████╔╝██║█████═╝░  ██████╔╝███████║░░░██║░░░█████╗░░██║░░░░░
██╔══██╗██║░░░██║██║░░██║██╔══██╗██║██╔═██╗░  ██╔═══╝░██╔══██║░░░██║░░░██╔══╝░░██║░░░░░
██║░░██║╚██████╔╝██████╔╝██║░░██║██║██║░╚██╗  ██║░░░░░██║░░██║░░░██║░░░███████╗███████╗
╚═╝░░╚═╝░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═╝╚═╝░░╚═╝  ╚═╝░░░░░╚═╝░░╚═╝░░░╚═╝░░░╚══════╝╚══════╝
Author:Rudrik Patel
Topic: Rotate Array
link: https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1
*/

/*
    -->Efficient,Reversal algorithm
    Time Complexity:
          O(d+n-d+n)
          O(2n)
          O(n)  
    Auxiliary Space: O(1)
*/


void leftrotate(int arr[],int n,int d){
    d%=n;
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

void reverse(int arr[],int low,int high){
    while (low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}