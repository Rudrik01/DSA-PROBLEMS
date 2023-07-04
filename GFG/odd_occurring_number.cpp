/**
██████╗░██╗░░░██╗██████╗░██████╗░██╗██╗░░██╗  ██████╗░░█████╗░████████╗███████╗██╗░░░░░
██╔══██╗██║░░░██║██╔══██╗██╔══██╗██║██║░██╔╝  ██╔══██╗██╔══██╗╚══██╔══╝██╔════╝██║░░░░░
██████╔╝██║░░░██║██║░░██║██████╔╝██║█████═╝░  ██████╔╝███████║░░░██║░░░█████╗░░██║░░░░░
██╔══██╗██║░░░██║██║░░██║██╔══██╗██║██╔═██╗░  ██╔═══╝░██╔══██║░░░██║░░░██╔══╝░░██║░░░░░
██║░░██║╚██████╔╝██████╔╝██║░░██║██║██║░╚██╗  ██║░░░░░██║░░██║░░░██║░░░███████╗███████╗
╚═╝░░╚═╝░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═╝╚═╝░░╚═╝  ╚═╝░░░░░╚═╝░░╚═╝░░░╚═╝░░░╚══════╝╚══════╝
Author:Rudrik Patel
Topic: odd occurring number or Party of Couples
link: https://practice.geeksforgeeks.org/problems/alone-in-couple5507/1
*/

/*
--> Naive solution
Time complexity: O(n^2)
*/

for(int i = 0;i<n;i++){
    int count = 0;
    for(int j = 0;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }
    if(count%2!=0)
    {
        cout<<arr[i];
    }
}

/*
-->Efficient Solution:
Idea: Using XOR
Time complexity: O(N)
Auxiliary space: O(1)
*/

int findodd(int arr[],int n){
    int res=0;
    for(int i = 0;i<n;i++)
    {
        res = res^arr[i];
    }
    return res;
}