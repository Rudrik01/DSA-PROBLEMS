/**
██████╗░██╗░░░██╗██████╗░██████╗░██╗██╗░░██╗  ██████╗░░█████╗░████████╗███████╗██╗░░░░░
██╔══██╗██║░░░██║██╔══██╗██╔══██╗██║██║░██╔╝  ██╔══██╗██╔══██╗╚══██╔══╝██╔════╝██║░░░░░
██████╔╝██║░░░██║██║░░██║██████╔╝██║█████═╝░  ██████╔╝███████║░░░██║░░░█████╗░░██║░░░░░
██╔══██╗██║░░░██║██║░░██║██╔══██╗██║██╔═██╗░  ██╔═══╝░██╔══██║░░░██║░░░██╔══╝░░██║░░░░░
██║░░██║╚██████╔╝██████╔╝██║░░██║██║██║░╚██╗  ██║░░░░░██║░░██║░░░██║░░░███████╗███████╗
╚═╝░░╚═╝░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═╝╚═╝░░╚═╝  ╚═╝░░░░░╚═╝░░╚═╝░░░╚═╝░░░╚══════╝╚══════╝
Author:Rudrik Patel
Topic: 42. Trapping Rain Water
link: https://leetcode.com/problems/trapping-rain-water/
*/


/*
    --> Naive Solution
    Time complexity: O(n^2)
    Auxiliary space: O(1)
*/

int getwater(int arr[],int n){
    int res=0;
    for (int i = 1; i < n-1; i++)
    {
        int lmax=arr[i];
        for (int j = 0; j < i; j++)
        {
            lmax=min(arr[j],lmax);
        }
        int rmax=arr[i];
        for (int k = i+1; k<n; k++)
        {
            rmax=min(arr[j],rmax);
        }
        res = res + (min(lmax,rmax) - arr[i]);
        
        
    }
    return res;
    
}




/*
    --> Efficient Solution
    Time complexity: O(n)
    Auxiliary space: O(n)
*/

int getwater(int arr[],int n){
    int res=0;
    int lmax[n],rmax[n];

    lmax[0]=arr[0];
    for (int j = 1; j < n; j++)
    {
        lmax[j]=max(arr[j],lmax[i-1]);
    }
    rmax[n-1]=arr[n-1];
    for (int k = n-2; k>=0; k--)
    {
        rmax=max(arr[k],rmax[k+1]);
    }
    for (int i = 1; i < n-1; i++)
    {
        res = res + (min(lmax,rmax) - arr[i]);  
    }
    return res;
    
}






