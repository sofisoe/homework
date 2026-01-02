#include <bitset>
#include <iostream>

int main ()
{
    std::bitset<4> bit{0b0000};
    std::cout<<bit<<"\n";
    enum cond {sad, mad, sleeping, eating};
    std::cout<<bit.test(sad)<<"\n";
    std::cout<<bit.set(mad)<<"\n";
    std::cout<<bit.reset(sleeping)<<"\n";
    std::cout<<bit.flip(eating)<<"\n";
    
}