class Div:public operation
{  
private:  
    double number_A;
    double number_B;
public:  
    //Add(double r);  
    void getResult();
    void setValueA(double m_r);
    void setValueB(double m_r);
};  

void Div::getResult()  
{  
    double result;
    if (number_B == 0)
    {
        cout<<"The div data is not zero!!\n";
        return;
    }
    result = number_A / number_B;
    cout<<"The result is :"<<result<<endl;  
}
void Div::setValueA(double m_r)
{
    number_A= m_r;
}

void Div::setValueB(double m_r)
{
    number_B= m_r;
}
