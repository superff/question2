#ifndef INTGETER_H_INCLUDED
#define INTGETER_H_INCLUDED

#include "reader.h"

//question 2&3

class IntGeter:public Reader
{
private:
    bool arr[17];
public:
    void checkInputs();
    void checkInputsWhileLoop();
};

void IntGeter::checkInputsWhileLoop()
{
    cout << "Please type all the numbers between 8 and 23" << endl;
    int i = 8;
    while(i <= 23)
    {
        read();
        int n = getI();
        if(checkBetween(8,23))
        {
            if(!arr[n-8])
            {
                arr[n-8] = true;
                cout<< "OK" <<endl;
                i++;
            }
            else
            {
                cout<< "Duplicates" << endl;
            }
        }
        else
            cout<< "Out of scope" <<endl;
    }

    cout << "All OK" << endl;
}

void IntGeter::checkInputs()
{
    cout << "Please type all the numbers between 8 and 23" << endl;
    for(int i =8; i<= 23; i++)
    {
        read();
        int n = getI();
        if(checkBetween(8,23))
        {
            if(!arr[n-8])
            {
                arr[n-8] = true;
                cout<< "OK" <<endl;
                continue;
            }
            else
            {
                cout<< "Duplicates" << endl;
            }
        }
        else
            cout<< "Out of scope" <<endl;
        i--;
    }
    cout << "All OK" << endl;
}

#endif // INTGETER_H_INCLUDED
