#include<iostream>
#include<string>
using namespace std;

#include "operation.h"
#include "operationAdd.h"
#include "operationSub.h"
#include "operationMul.h"
#include "operationDiv.h"
#include "operationFactory.h"

int main()
{
    Factory *q = new Factory();

    //class Add
    cout<<"class Add example:\n";
    operation *p_add= q->create(1);  
    double number_A, number_B;  
    cout<<"please input number_A value:";  
    cin>>number_A;  
    p_add->setValueA(number_A);
    cout<<"please input number_B value:";  
    cin>>number_B;  
    p_add->setValueB(number_B);
    p_add->getResult();
    delete p_add;
    p_add = NULL;

    //class Sub
    cout<<"class Sub example:\n";
    operation *p_sub = q->create(2);   
    cout<<"please input number_A value:";  
    cin>>number_A;  
    p_sub->setValueA(number_A);
    cout<<"please input number_B value:";  
    cin>>number_B;  
    p_sub->setValueB(number_B);
    p_sub->getResult();
    delete p_sub;
    p_sub = NULL;

    //class Mul
    cout<<"class Mul example:\n";
    operation *p_mul = q->create(3);   
    cout<<"please input number_A value:";  
    cin>>number_A;  
    p_mul->setValueA(number_A);
    cout<<"please input number_B value:";  
    cin>>number_B;  
    p_mul->setValueB(number_B);
    p_mul->getResult();
    delete p_mul;
    p_mul = NULL;

    //class Div
    cout<<"class Div example:\n";
    operation *p_Div = q->create(4);   
    cout<<"please input number_A value:";  
    cin>>number_A;  
    p_Div->setValueA(number_A);
    cout<<"please input number_B value:";  
    cin>>number_B;  
    p_Div->setValueB(number_B);
    p_Div->getResult();
    delete p_Div;
    p_Div = NULL;
    return 1;
}
