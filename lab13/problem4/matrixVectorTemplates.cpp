#include <iostream>
#include "MatVecTemplate.h"
using namespace std;

int main(int argc, const char * argv[])
{
    {  Mat<float> a ( Mat<float>::Identity );
        Mat<float> b ( 1.0f, 2.0f, 1.0f, 4.0f );
        Vec<float> v (1,2);
        
        Vec<float> u = v*(((a + b) - (4.0f*a)) + a*b);
        cout << u;
    }
    
    {  Mat<int> a ( Mat<int>::Identity );
        Mat< int > b (1,2,1,4);
        Vec< int > v (1,2);
        
        Vec< int > u = v*(((a + b) - (4*a)) + a*b);
        cout << u;
    }
    
    return 0;
}

