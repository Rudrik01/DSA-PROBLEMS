/**
██████╗░██╗░░░██╗██████╗░██████╗░██╗██╗░░██╗  ██████╗░░█████╗░████████╗███████╗██╗░░░░░
██╔══██╗██║░░░██║██╔══██╗██╔══██╗██║██║░██╔╝  ██╔══██╗██╔══██╗╚══██╔══╝██╔════╝██║░░░░░
██████╔╝██║░░░██║██║░░██║██████╔╝██║█████═╝░  ██████╔╝███████║░░░██║░░░█████╗░░██║░░░░░
██╔══██╗██║░░░██║██║░░██║██╔══██╗██║██╔═██╗░  ██╔═══╝░██╔══██║░░░██║░░░██╔══╝░░██║░░░░░
██║░░██║╚██████╔╝██████╔╝██║░░██║██║██║░╚██╗  ██║░░░░░██║░░██║░░░██║░░░███████╗███████╗
╚═╝░░╚═╝░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═╝╚═╝░░╚═╝  ╚═╝░░░░░╚═╝░░╚═╝░░░╚═╝░░░╚══════╝╚══════╝
Author:Rudrik Patel
Topic: left rotate an array by d
link: 
*/

/*
    -->Solution-1 (naive)
    Time Complexity: O(n*d)
    Auxiliary Space: O(1)
    idea: left rotate by 1-->d times
*/

void leftrotateone(int arr[],int n){
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    
}

void leftrotate(int arr[],int n,int d){
    for (int i = 0; i < d; i++)
    {
        leftrotateone(arr,n);
    }
    
}


/*
    -->Solution-2 (better)
    Time Complexity:
          O(d+n-d+d)
          O(n+d)
          O(n)  
    Auxiliary Space: O(d)
*/

void leftrotate(int arr[],int n,int d){
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i]=arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i-d] = arr[i];
    }
    for (int i = 0;i < d; i++)
    {
        arr[n-d+i] = temp[i];
    } 
}


/*
    -->Solution-3 (Efficient,Reversal algorithm)
    Time Complexity:
          O(d+n-d+n)
          O(2n)
          O(n)  
    Auxiliary Space: O(1)
*/


void leftrotate(int arr[],int n,int d){
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