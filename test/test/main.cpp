//
//  main.cpp
//  test
//
//  Created by 이장훈 on 2016. 12. 14..
//  Copyright © 2016년 이장훈. All rights reserved.
//

#include <iostream>
#include <cstdlib>

int main() {
    // insert code here...
   // int a = srand(10);
    int test_array[10]; //배열 선언
    srand((unsigned int)time(0));
    
    //각각의 배열 안에 난수를 발생 시켜 할당한다.
    for (int i=0; i<10; i++) {
        test_array[i]=rand();
       // std::cout<<rand()<<std::endl;
    }
    
    // 각각의 배열에 들어 있는 값을 확인해 본다.
    for (int j=0;j<10; j++) {
        std::cout<<test_array[j]<<std::endl;
    }
    
    std::cout<<test_array[0]<<std::endl;
    return 0;
}
