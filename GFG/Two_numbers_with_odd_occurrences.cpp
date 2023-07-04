/**
██████╗░██╗░░░██╗██████╗░██████╗░██╗██╗░░██╗  ██████╗░░█████╗░████████╗███████╗██╗░░░░░
██╔══██╗██║░░░██║██╔══██╗██╔══██╗██║██║░██╔╝  ██╔══██╗██╔══██╗╚══██╔══╝██╔════╝██║░░░░░
██████╔╝██║░░░██║██║░░██║██████╔╝██║█████═╝░  ██████╔╝███████║░░░██║░░░█████╗░░██║░░░░░
██╔══██╗██║░░░██║██║░░██║██╔══██╗██║██╔═██╗░  ██╔═══╝░██╔══██║░░░██║░░░██╔══╝░░██║░░░░░
██║░░██║╚██████╔╝██████╔╝██║░░██║██║██║░╚██╗  ██║░░░░░██║░░██║░░░██║░░░███████╗███████╗
╚═╝░░╚═╝░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═╝╚═╝░░╚═╝  ╚═╝░░░░░╚═╝░░╚═╝░░░╚═╝░░░╚══════╝╚══════╝
Author:Rudrik Patel
Topic: Two numbers with odd occurrences
link: https://practice.geeksforgeeks.org/problems/two-numbers-with-odd-occurrences5846/1
Time Complexity: O(N)
Auxiliary space: O(1)
*/

class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int N)  
    {
        // code here
        vector<long long int>ans;
        long long int XOR = 0,res1=0,res2=0;
        for(int i =0;i<N;i++){
            XOR = XOR^arr[i];
        }
        int s = XOR& ~(XOR-1);
        for(int i = 0;i<N;i++){
            if((arr[i]&s)!=0){
                res1 = res1^arr[i];
            }
            else{
                res2 = res2^arr[i];
            }
        }
        ans.push_back(max(res1,res2));
        ans.push_back(min(res1,res2));
        return ans;
        
    }
};


