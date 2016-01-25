class Factory
{
    public:
    operation* create(int type)
    {
        switch (type)
        {
        case 1:
            return new Add();
        case 2:
            return new Sub();
        case 3:
            return new Mul();
        case 4:
            return new Div();
        default:
            return NULL;
        }
    }
};

