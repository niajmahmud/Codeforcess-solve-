#include<bits/stdc++.h>
using namespace std;
int countx(string a, int n){
int count = 0; 
    for(int i = 0; i<n; i ++){
        if(a[i] == 'X'){
count ++; 
        }
    }
    return count; 
}

int main()
{ string size1; 
    string size2;
    int s1, s2; 
    char m1, m2;
    int xcount1, xcount2;  
int n;
cin>>n;
    while(n > 0){
 
    cin>>size1; 
    cin>>size2; 
    s1 =  size1.length(); 
    s2 = size2.length();

    m1 = size1[s1-1];
    m2 = size2[s2-1]; 

    xcount1 = countx(size1, s1); 
    xcount2 = countx(size2, s2); 
    if(m1 == 'L' && m2 == 'L'){
        if(xcount1 > xcount2){
            cout<<">"<<endl;
        }
        else if(xcount1 < xcount2){
            cout<<"<"<<endl; 
        }
        else cout<<"="<<endl; 

    }
    else if(m1 == 'S' && m2 == 'S'){
        if(xcount1 > xcount2){
            cout<<"<"<<endl;
        }
        else if(xcount1 < xcount2){
            cout<<">"<<endl; 
        }
        else cout<<"="<<endl;
    }
    else if(m1 == 'M' && m2 == 'M'){
        cout<<"="<<endl;
    }

    else if(m1 == 'L' && m2 == 'M'){
        cout<<">"<<endl; 
    }
    else if(m1 == 'L' && m2 == 'S'){
        cout<<">"<<endl;
    }
    else if(m1 == 'M' && m2 == 'L'){
        cout<<"<"<<endl; 
    }
    else if(m1 == 'M' && m2 == 'S'){
        cout<<">"<<endl; 
    }
    else if(m1 == 'S' && m2 == 'M'){
        cout<<"<"<<endl; 
    }
    else if(m1 == 'S' && m2 == 'L') cout<<"<"<<endl; 
        

        n--; 
    }
  
        
        
    
}
    

    
    
