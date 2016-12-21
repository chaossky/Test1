//
//  main.cpp
//  function
//
//  Created by 이장훈 on 2016. 12. 18..
//  Copyright © 2016년 이장훈. All rights reserved.
//

#include <iostream>
int sum_add(int x, int y){
    int total=x+y;
    return total;
}
int main() {
    int result=sum_add(11,123);
    std::cout<<result<<std::endl;
    
    return 0;
}
