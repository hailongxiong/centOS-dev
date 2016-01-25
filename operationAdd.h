class Add:public operation
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

void Add::getResult()  
{  
    double result;
    result = number_A + number_B;
    cout<<"The result is :"<<result<<endl;  
}
void Add::setValueA(double m_r)
{
    number_A= m_r;
}

void Add::setValueB(double m_r)
{
    number_B= m_r;
}
