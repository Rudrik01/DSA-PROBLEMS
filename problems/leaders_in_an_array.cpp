/**
██████╗░██╗░░░██╗██████╗░██████╗░██╗██╗░░██╗  ██████╗░░█████╗░████████╗███████╗██╗░░░░░
██╔══██╗██║░░░██║██╔══██╗██╔══██╗██║██║░██╔╝  ██╔══██╗██╔══██╗╚══██╔══╝██╔════╝██║░░░░░
██████╔╝██║░░░██║██║░░██║██████╔╝██║█████═╝░  ██████╔╝███████║░░░██║░░░█████╗░░██║░░░░░
██╔══██╗██║░░░██║██║░░██║██╔══██╗██║██╔═██╗░  ██╔═══╝░██╔══██║░░░██║░░░██╔══╝░░██║░░░░░
██║░░██║╚██████╔╝██████╔╝██║░░██║██║██║░╚██╗  ██║░░░░░██║░░██║░░░██║░░░███████╗███████╗
╚═╝░░╚═╝░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═╝╚═╝░░╚═╝  ╚═╝░░░░░╚═╝░░╚═╝░░░╚═╝░░░╚══════╝╚══════╝
Author:Rudrik Patel
Topic: Leaders in an array
link: 

*/


/*
    -->Naive solution
    Time Complexity: O(n^2)
    Auxiliary Space: O(1)
*/

void leaders(int arr[],int n){
    for(int i = 0;i<n;i++){
        bool flag = false;
        for(int j = i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                flag = true;
                break;
            }
        }
        if(flag==false){
            cout << arr[i];
        }
    }
}


/*
    -->Efficient Solution
    Time Complexity: O(n)
    Auxiliary Space: O(1)
*/

void leaders(int arr[],int n){
    int curr = arr[n-1];
    cout << curr;
    for(int i = n-2;i>=0;i--){
        if(arr[i] > curr){
            curr = arr[i];
            cout << curr;
        }
    }
}