#include <iostream>
#include <string>

int main()
{
    std::string A,B;
    std::cin>>A>>B;

    std::cout<<A.length()<<" "<<B.length()<<std::endl;

    std::cout<<A+B<<std::endl;

    std::swap(A[0],B[0]);

    std::cout<<A<<" "<<B<<std::endl;

    return 0;
}
