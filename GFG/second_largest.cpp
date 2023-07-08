/**
██████╗░██╗░░░██╗██████╗░██████╗░██╗██╗░░██╗  ██████╗░░█████╗░████████╗███████╗██╗░░░░░
██╔══██╗██║░░░██║██╔══██╗██╔══██╗██║██║░██╔╝  ██╔══██╗██╔══██╗╚══██╔══╝██╔════╝██║░░░░░
██████╔╝██║░░░██║██║░░██║██████╔╝██║█████═╝░  ██████╔╝███████║░░░██║░░░█████╗░░██║░░░░░
██╔══██╗██║░░░██║██║░░██║██╔══██╗██║██╔═██╗░  ██╔═══╝░██╔══██║░░░██║░░░██╔══╝░░██║░░░░░
██║░░██║╚██████╔╝██████╔╝██║░░██║██║██║░╚██╗  ██║░░░░░██║░░██║░░░██║░░░███████╗███████╗
╚═╝░░╚═╝░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═╝╚═╝░░╚═╝  ╚═╝░░░░░╚═╝░░╚═╝░░░╚═╝░░░╚══════╝╚══════╝
Author:Rudrik Patel
Topic:Second Largest Element In Array 
link: https://practice.geeksforgeeks.org/problems/second-largest3735/1

Time Complexity: O(n)
Auxiliary Space: O(1)
*/

/*
    --> Naive Solution
*/
int secode_largest(int arr[],int n){
    int largest = getlargest(int arr[],int n);
    int res = -1;
    for(int i = 0;i<n;i++){
        if(arr[i]!=arr[largest]){
            if(res==-1){
                res = i;
            }
            else if(arr[i]>arr[res]){
                res = i;
            }
        }
    } 
    return res;
}


/*
    --> Efficient Solution
*/

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int res = -1,largest=0;
        for(int i = 0;i<n;i++){
        if(arr[i] > arr[largest]){
            res = largest;
            largest = i;

        }
        else if(arr[i] != arr[largest]){
            if(res == -1 || arr[i] > arr[res]){
                res = i;
                }
            }
        }
        if(res == -1){
            return -1;
        }
        return arr[res];
	}
};