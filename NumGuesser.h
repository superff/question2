#ifndef NUMGUESSER_H_INCLUDED
#define NUMGUESSER_H_INCLUDED

#include "reader.h"
#include <map>
//question 1
class NumberWin: public Reader
{
public:
    void ques1();
    void findTheSum();
    void findTheMin();
    void cubeSum();
    void ques7();
    void typeFib();
    void ques9();
    void ques10();
    void ques11();
    void ques12();
    void ques13();
    void ques14();
    void ques15();
    void ques16();
    void ques17();
    void ques18();
    void ques19();
    void ques20();
    void ques21();
    void ques22();
    void ques23();
    void ques24();
    void ques25();
};

void NumberWin::ques1()
{
    read();
    if(checkBetween(56,78))
        cout <<"You Win"<<endl;
    else
        cout<< "You Lose" <<endl;
}

void NumberWin::findTheSum()
{
    cout<< "please type 10 integers"<<endl;
    int sum = 0;

    for(int i =0; i<10 ; i++)
    {
        read();
        int n = getI();
        sum += n;
    }
    cout <<"Sum is " << sum <<endl;

}

void NumberWin::findTheMin()
{
    cout<< "please type 10 integers"<<endl;
    int min =0;
    for(int i =0; i<10 ; i++)
    {
        read();
        int n = getI();
        if(n < min || i == 0)
        {
            min = n;
        }
    }
    cout <<"Mininum is " << min <<endl;
}

void NumberWin::cubeSum()
{
    cout << "Please type an integer for cube sum" << endl;
    double sum =0;
    read();

    for(int i = 5; i<= getI(); i++)
    {
        sum += cube(i);
    }
    cout <<"sum is "  << sum <<endl;
}

void NumberWin::ques7()
{
    cout << "Type a number(question7)" << endl;
    read();
    cout << "result is " << u(getI()) <<endl;
}
void NumberWin::typeFib()
{
    cout << "Please type a positive number(question8)" <<endl;
    read();
    cout << "Result is " << fib(getI()) <<endl;
}

void NumberWin::ques9()
{
    cout << "Please inupt a number between 0 and 20" << endl;
    read();
    while(!checkBetween(0,20))
    {
        cout << "WRONG,Please inupt a number between 0 and 20" << endl;
        read();
    }
    cout << getI()+ 17<<endl;
}

void NumberWin::ques10()
{
    int num = 0,result = 0;
    int menuID;
    bool quit = false;

    while(!quit)
    {
        cout << "Please type 1-4"<<endl;
        read();
        menuID = getI();
        switch (menuID)
        {
        case 1:
            cout << "Add 1"<<endl;
            result = num+1;
            break;
        case 2:
            cout << "Mutiply by 2"<<endl;
            result = num*2;
            break;
        case 3:
            cout << "Substract 4" <<endl;
            result = num -4;
            break;
        case 4:
            cout << "Quit" <<endl;
            quit = true;
            break;
        default:
            cout << menuID <<" is not in 1-4"<<endl;
        }
    }
}

void NumberWin::ques11()
{
    int sum = 0,size = 0;
    cout << "Type a number,0 to quit" << endl;
    read();
    int i = getI();
    while(i != 0)
    {
        if(i > 0)
        {
            sum += i;
            size++;
        }
        else
        {
            cout <<"ERROR" <<endl;
        }
        cout << "Type a positive number,0 to quit" << endl;
        read();
        i = getI();
    }

    if(size == 0)
    {
        cout<<"No average"<<endl;
    }
    else
    {
        double avg = sum/size;
        cout<<"Average is " <<avg <<endl;
    }
}

void NumberWin::ques12()
{
    cout << "Type a number for q12" << endl;
    read();
    cout << func(getI()) <<endl;
}

void NumberWin::ques13()
{
    map<int,int> mymap;
    int n;

    for(int i =0; i < 10 ; i++)
    {
        cout << "Please type a number" << endl;
        read();
        n = getI();

        map<int,int>::iterator found = mymap.find(n);
        //find the element in map
        if(found != mymap.end())
            found->second ++;
        else
            mymap[n] = 1;
    }

    int max = 0;
    int node = 0;
    for(map<int,int>::iterator it = mymap.begin(); it != mymap.end(); it++)
    {
        if(it->second > max)
        {
            max = it->second;
            node = it->first;
        }
    }
    cout << "node is "<<node<< endl;
}

void NumberWin::ques14()
{
    cout <<"Type a number" <<endl;
    read();
    cout << Nfactorial(getI())<< endl;
}

void NumberWin::ques15()
{
    cout << "Type a number" <<endl;
    read();

    while(getI()< 0)
    {
        cout << "Type a positive number" <<endl;
        read();
    }

    if(!isPrime(getI()))
        cout << "Not a prime number" <<endl;
    else
        cout << "Is a prime number" <<endl;
}

void NumberWin::ques16()
{
    cout << "Type a number" << endl;
    read();
    cout << "The number of prime number less than equal to " << getI()
         << " is " << numOfPrimeLessThanEqualTo(getI()) <<endl;
}

void NumberWin::ques17()
{
    cout << "Type number a positive number n ,will return Nst prime" << endl;
    read();
    int n = getI();
    cout << "the "<< n <<"st prime is "  << findNstPrime(n) <<endl;
}

void NumberWin::ques18()
{
    cout << "Type a value of N for question 18" << endl;
    read();
    int N = getI();
    while(N <= 0)
    {
        cout << "Type a value of N larger than 0" << endl;
        read();
        N = getI();
    }

    for(int i = 1; i<= N; i++)
    {
        cout << "N=" << i<<endl;
        for(int m = i; m>= 1 ; m--)
        {
            for(int n = m; n>=1; n--)
            {
                cout << "*";
            }
            cout <<endl;
        }
    }
}

void NumberWin::ques19()
{
    cout << "Type a value of N for question 19" << endl;
    read();
    int N = getI();

    while(N <= 0)
    {
        cout << "Type a value of N larger than 0" << endl;
        read();
        N = getI();
    }

    for(int i = 1; i<= N; i++)
    {
        cout << "N=" << i<<endl;
        for(int m = i; m>= 1 ; m--)
        {
            for(int n = i - m; n >= 1 ; n--)
            {
                cout <<" ";
            }
            for(int n = m; n>=1; n--)
            {
                cout << "*";
            }
            cout <<endl;
        }
    }
}

void NumberWin::ques20()
{
    cout << "Question 20" <<endl;
    cout << "Part I" <<endl;
    read();
    findN(getI());
    cout <<endl;
    cout << "Part II" <<endl;
    int pos = 0;
    read();
    int M = getI();
    int N = findMaxN(M,pos);
    cout << "A is " << pos  << " and N is " << N <<endl;

}

void NumberWin::ques21()
{
    cout << "Type an number, quit when type -999" << endl;
    read();

    while(getI() != -999)
    {
        cout << "Triple value is: " << getI()*3<< endl;
        cout << "Type an number, quit when type -999" << endl;
        read();
    }
}

void NumberWin::ques22()
{
    cout << "Please type positive numbers , quit when type nagetive and 0" << endl;
    read();
    int num =0 ;
    while(getI() >0)
    {
        num++;
        cout << "Please type positive numbers , quit when type nagetive and 0" << endl;
        read();
    }
    cout << "number of positive numbers is " << num << endl;
}

void NumberWin::ques23()
{
    cout << "Please type positive numbers , quit when type smaller than 1" << endl;
    read();
    int sum =0 ;
    int num = 0;
    while(getI() >= 1)
    {
        num++;
        sum += getI();
        cout << "Please type positive numbers , quit when type smaller than 1" << endl;
        read();
    }
    cout << "Average is " <<  sum*1.0/num << endl;
}

void NumberWin::ques24()
{
    cout << "Please type positive numbers , quit when type 0" << endl;
    read();
    int num = 0;
    while(getI() != 0)
    {
        if(checkBetween(100,200))
            num++;

        cout << "Please type positive numbers , quit when type 0" << endl;
        read();
    }
    cout << "Number of Numbers between 100 and 200 is " <<  num << endl;
}

void NumberWin::ques25()
{
    double a = 50, b= 70;
    int i = 0;
    while(a < b)
    {
        a = a*(1.03);
        b = b*(1.02);
        i++;
    }
    cout <<"Year is " << i <<endl;
}

#endif // NUMGUESSER_H_INCLUDED
