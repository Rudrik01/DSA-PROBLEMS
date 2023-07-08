/**
██████╗░██╗░░░██╗██████╗░██████╗░██╗██╗░░██╗  ██████╗░░█████╗░████████╗███████╗██╗░░░░░
██╔══██╗██║░░░██║██╔══██╗██╔══██╗██║██║░██╔╝  ██╔══██╗██╔══██╗╚══██╔══╝██╔════╝██║░░░░░
██████╔╝██║░░░██║██║░░██║██████╔╝██║█████═╝░  ██████╔╝███████║░░░██║░░░█████╗░░██║░░░░░
██╔══██╗██║░░░██║██║░░██║██╔══██╗██║██╔═██╗░  ██╔═══╝░██╔══██║░░░██║░░░██╔══╝░░██║░░░░░
██║░░██║╚██████╔╝██████╔╝██║░░██║██║██║░╚██╗  ██║░░░░░██║░░██║░░░██║░░░███████╗███████╗
╚═╝░░╚═╝░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═╝╚═╝░░╚═╝  ╚═╝░░░░░╚═╝░░╚═╝░░░╚═╝░░░╚══════╝╚══════╝
Author:Rudrik Patel
Topic: Move all zeroes to end of array
link: https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1
*/

/*
    -->Naive Solution
    Time Complexity: O(n^2)
    Auxiliary Space: O(1)

*/

void pushZerosToEnd(int arr[], int n) {
	    for (int  i = 0; i < n; i++)
        {
            if(arr[i] == 0){
                for (int j = i+1; i < n; j++)
                {
                    if(arr[j]!=0){
                        swap(arr[i],arr[j]);
                    }
                }
                
            }
        }
        
	}

/*
    -->Efficient solution
    Time Complexity: O(n)
    Auxiliary Space: O(1)
*/
void pushZerosToEnd(int arr[], int n) {
	    int count = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]!=0){
                swap(arr[i],arr[count]);
                count++;
            }
        }
        
}