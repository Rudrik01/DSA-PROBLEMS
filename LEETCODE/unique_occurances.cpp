/**
██████╗░██╗░░░██╗██████╗░██████╗░██╗██╗░░██╗  ██████╗░░█████╗░████████╗███████╗██╗░░░░░
██╔══██╗██║░░░██║██╔══██╗██╔══██╗██║██║░██╔╝  ██╔══██╗██╔══██╗╚══██╔══╝██╔════╝██║░░░░░
██████╔╝██║░░░██║██║░░██║██████╔╝██║█████═╝░  ██████╔╝███████║░░░██║░░░█████╗░░██║░░░░░
██╔══██╗██║░░░██║██║░░██║██╔══██╗██║██╔═██╗░  ██╔═══╝░██╔══██║░░░██║░░░██╔══╝░░██║░░░░░
██║░░██║╚██████╔╝██████╔╝██║░░██║██║██║░╚██╗  ██║░░░░░██║░░██║░░░██║░░░███████╗███████╗
╚═╝░░╚═╝░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═╝╚═╝░░╚═╝  ╚═╝░░░░░╚═╝░░╚═╝░░░╚═╝░░░╚══════╝╚══════╝
Author:Rudrik Patel
Topic: 1207. Unique Number of Occurrences
link: https://leetcode.com/problems/unique-number-of-occurrences/description/
*/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int,int>m;
       for(int i = 0;i<arr.size();i++){
           m[arr[i]]++;
       }
       unordered_map<int,int>mp;
       for(auto it=m.begin();it!=m.end();it++){
           mp[it->second]++;
       }
    for(auto it=mp.begin();it!=mp.end();it++){
        if((it->second) > 1){
            return false;
        }
    }
    return true;
    }
};