namespace calculator
{
    int add(int num1,int num2)
    {
        return(num1+num2);
    }

    int sub(int num1,int num2)
    {
        return(num1-num2);
    }

    int mul(int num1,int num2)
    {
        return(num1*num2);
    }

    float divi(float num1,float num2)
    {
        if(num1>num2)
        {
            return(num1/num2);
        }

        else return(num2/num1);
    }
}
