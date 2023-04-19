namespace perext
{
    float percent(int sum)
    {
        return ((sum*100)/500);
    }

    float grade(float per)
    {
        if(per>=90)
            return (1);
        else if(per>=80)
            return (2);
        else if(per>=70)
            return (3);
        else if(per>=60)
            return (4);
        else if(per>=40)
            return (5);
        else if(per<40)
            return (6);
    }

}

