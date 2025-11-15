#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n_friends, k_bottles, l_mili, c_lime,  d_slice, p_salt, nl_mili, np_salt;
    cin>> n_friends>>k_bottles>>l_mili>>c_lime>>d_slice>>p_salt>>nl_mili>>np_salt;
    
    int each_mili = (k_bottles * l_mili)/nl_mili;
    int a_slice = c_lime * d_slice; 
    int each_salt = p_salt/np_salt; 

    int ans = min({each_mili, a_slice, each_salt})/n_friends; 
    cout<<ans<<endl; 
}