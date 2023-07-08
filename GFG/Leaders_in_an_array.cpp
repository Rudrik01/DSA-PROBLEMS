/**
██████╗░██╗░░░██╗██████╗░██████╗░██╗██╗░░██╗  ██████╗░░█████╗░████████╗███████╗██╗░░░░░
██╔══██╗██║░░░██║██╔══██╗██╔══██╗██║██║░██╔╝  ██╔══██╗██╔══██╗╚══██╔══╝██╔════╝██║░░░░░
██████╔╝██║░░░██║██║░░██║██████╔╝██║█████═╝░  ██████╔╝███████║░░░██║░░░█████╗░░██║░░░░░
██╔══██╗██║░░░██║██║░░██║██╔══██╗██║██╔═██╗░  ██╔═══╝░██╔══██║░░░██║░░░██╔══╝░░██║░░░░░
██║░░██║╚██████╔╝██████╔╝██║░░██║██║██║░╚██╗  ██║░░░░░██║░░██║░░░██║░░░███████╗███████╗
╚═╝░░╚═╝░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═╝╚═╝░░╚═╝  ╚═╝░░░░░╚═╝░░╚═╝░░░╚═╝░░░╚══════╝╚══════╝
Author:Rudrik Patel
Topic:Leaders in an array
link: https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
Time Complexiety: 0(n)
Space Complexiety: 0(n)
*/

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        // Code here
        int curr_ldr = arr[n-1];
        vector<int> ans;
        ans.push_back(curr_ldr); 
        
        for(int i = n-2;i>=0;i--){
            if(arr[i] >= curr_ldr){
                curr_ldr = arr[i];
                ans.push_back(curr_ldr);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

