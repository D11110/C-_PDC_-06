#include <iostream>
using namespace std;
class F
{
public:
    F(int m = 1, int d = 1, int a = 1900, int h = 24, int min = 60, int s = 60)
    {
        this->m = m;
        this->a = a;
        this->d = d;
        this->h = h;
        this->min = min;
        this->s = s;
    }
    int getH(){
        return this->h;
    };
    F &operator++(int)
    {
        d++;
        return *this;
    }
    F operator-(F a){
        if(this->getH() > a.getH()){
            this->a - a.a;
            this->m - a.m;
            this->d - a.d;
            this->h - a.h;
            this->min - a.min;
            this->s - s;
        }
    };
    F operator--()
    {
        d--;
        return *this;
    }

private:
    unsigned int m, d, a;
    unsigned int h, min, s;
    friend int main();
};
int main()
{
    F f;
    f++;
    cout << f.d << endl;
    --f;
    cout << f.d << endl;
    return 0;
}