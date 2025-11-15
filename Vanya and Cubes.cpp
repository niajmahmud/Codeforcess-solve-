#include<iostream>
using namespace std;

int main()
{
    

   int sum = 0, cubes, level = 0; 
   cin>>cubes; 

   for(int i = 1; ; i ++){
    sum = sum + i; 
    cubes = cubes - sum; 
    if(cubes < 0){
        break; 
    }
    level++; 
    
   
    
   }

   cout<<level<<endl; 

  
   
    

}