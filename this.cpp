#include<iostream>
using namespace std;
class demo
{
private:
    int num;
    char ch;
public:
    demo& s(int num)
    {
        this->num=num;
        return *this;
    }
    demo& s(char ch)
    {
        this->num++;
        this->ch=ch;
        return *this;
    }
    void d()
    {
        cout<<num<<endl;
        cout<<ch<<endl;
    }
};
int main()
{
    demo obj;
    obj.s(100).s('A');
    obj.d();

}
