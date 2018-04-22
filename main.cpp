//
//  main.cpp
//  cs33
//
//  Created by Ruban Rengaraju on 4/18/18.
//  Copyright © 2018 Ruban Rengaraju. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <bitset>
using namespace std;

int main(){
    
    int n = -2147483647;
    cout << n<< endl;
    cout << bitset<32>(n)<<endl;
    
    int j = ~n+1;
    cout<< j<<endl;
    cout << bitset<32>(j)<< endl;
    
    int i = 2147483647;
    cout<<i<<endl;
    cout << bitset<32>(i)<<endl;
    
    uint32_t q = 2147483648+2147483647;
    cout<<q<<endl;
    cout << bitset<32>(q)<<endl;
    
}





