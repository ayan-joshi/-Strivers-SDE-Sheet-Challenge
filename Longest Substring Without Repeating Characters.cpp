#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
     int n = input.length();
    int maxi=INT_MIN;;
    int i=0,j=0;
    unordered_set<char>s;
    while(j<n){
        while(s.find(input[j])!=s.end()){
            
                s.erase(input[i]);
                i++;
            
        }
        maxi=max(maxi,j-i+1);
        s.insert(input[j]);
        j++;
    }
    return maxi;
}
