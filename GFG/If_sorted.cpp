/**
██████╗░██╗░░░██╗██████╗░██████╗░██╗██╗░░██╗  ██████╗░░█████╗░████████╗███████╗██╗░░░░░
██╔══██╗██║░░░██║██╔══██╗██╔══██╗██║██║░██╔╝  ██╔══██╗██╔══██╗╚══██╔══╝██╔════╝██║░░░░░
██████╔╝██║░░░██║██║░░██║██████╔╝██║█████═╝░  ██████╔╝███████║░░░██║░░░█████╗░░██║░░░░░
██╔══██╗██║░░░██║██║░░██║██╔══██╗██║██╔═██╗░  ██╔═══╝░██╔══██║░░░██║░░░██╔══╝░░██║░░░░░
██║░░██║╚██████╔╝██████╔╝██║░░██║██║██║░╚██╗  ██║░░░░░██║░░██║░░░██║░░░███████╗███████╗
╚═╝░░╚═╝░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═╝╚═╝░░╚═╝  ╚═╝░░░░░╚═╝░░╚═╝░░░╚═╝░░░╚══════╝╚══════╝
Author:Rudrik Patel
Topic: Check If array is sorted?
link: https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
*/

/*
    -->Naive Solution
    Time Complexity: O(n^2)
    Auxiliary Space: O(1)

*/

bool issorted(int arr[],int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[j]<arr[i]){
                return false;
            }
        }
    }
    return true;
}


/*
    -->Efficient solution
    Time Complexity: O(n)
    Auxiliary Space: O(1)
*/

bool isorted(int arr[],int n){
    for(int i = 1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
