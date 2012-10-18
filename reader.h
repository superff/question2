#ifndef READER_H_INCLUDED
#define READER_H_INCLUDED
#include "math.h"

using namespace std;
class Reader
{
private:
    int i;
public:
    Reader() {}
    void read();
    int getI();
    bool checkBetween(int a, int b);
    double cube(int a);
    double u(int n);
    double fib(int n);
    double Nfactorial(int n);
    double func(int n);
    bool isPrime(int n);
    int numOfPrimeLessThanEqualTo(int num);
    int findNstPrime(int n);
    int u(int n,int a);
    int findN(int a);
    int findNValue(int a);
    int findMaxN(int M,int &pos);
};


int Reader::findNstPrime(int n)
{
    if(n <=0)
        return  -1;

    int i = 0;
    int beg_num = 3;
    while(i <n)
    {
        if(isPrime(beg_num))
        {
            i++;
        }
        beg_num++;
    }
    beg_num--;
    return beg_num;
}

bool Reader::isPrime(int n)
{
    for(int i = 2; i<= sqrt(n); i++)
    {
        if(n %i == 0)
        {
            return false;
        }
    }
    return true;
}

int Reader::numOfPrimeLessThanEqualTo(int num)
{
    if(num <=2)
        return 0;
    int N =0;
    for(int i = num ; i>= 3; i--)
    {
        if(isPrime(i))
        {
            N++;
        }
    }

    return N;
}

double Reader::u(int n)
{
    if(n <= 0)
        return 3;
    else
        return 3*u(n-1) + 4;
}

double Reader::func(int n)
{
    if(n == 0)
        return 3;
    if(n == 1)
        return 2;

    double a = 3, b = 2;

    for(int i=2; i<n; i++)
    {
        double tmp = b;
        b = i*b+(i+1)*a+i;
        a = tmp;
    }
    return b;
}

double Reader::fib(int n)
{
    if(n <=0)
        return 0;
    else if(n==1)
        return 1;

    double a = 0,b = 1;

    for(int i = 2; i<= n ; i++)
    {
        double tmp = b;
        b = a+ b;
        a = tmp;
    }
    return b;
}

double Reader::Nfactorial(int n)
{
    if(n <= 0)
        return 1;
    else
        return n*Nfactorial(n-1);
}

double Reader::cube(int a)
{
    return a*a*a;
}

bool Reader::checkBetween(int a, int b)
{
    if(i >= a && i <= b)
        return true;
    return false;

}
int Reader::getI()
{
    return i;
}

void Reader::read()
{
    cout<< "Please type a number"<<endl;
    int n;
    cin >> n;
    i = n;
}

int Reader::u(int n,int a)
{
    if(n <= 0)
        return a;
    int result = a;
    for(int i = 1; i<= n; i++)
    {
        //check whether is odd.
        if(result & 1 == 1)
            result = 3*result + 1;
        else
            result = result >> 1;
    }
    return result;
}

int Reader::findN(int a)
{
    int n =0;
    int r = 0;
    while( r != 1)
    {
        r = u(n++,a);
        cout << " " << r;
    }
    n--;
    return n;
}

int Reader::findNValue(int a)
{
    int n =0;
    while(u(n++,a)!= 1){}
    n--;
    return n;
}

int Reader::findMaxN(int M,int &pos)
{
    int max = 0;
    for(int i = 2; i<= M;i++)
    {
        int N = findNValue(i);
        if(N > max)
        {
            max = N;
            pos = i;
        }
    }
    return max;
}

#endif // READER_H_INCLUDED
