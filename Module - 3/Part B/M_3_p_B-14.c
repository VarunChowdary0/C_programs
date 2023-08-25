/*
Explain call by value and
call by reference with
example.
*/
/*
Call by Value : 
    This mechanism is used to store the value returned by the function , So the orginal value of the
    variable is not effected.
    Ex :=>
    {
        int Fun(n)
        {
            return n+5;
        }
        int main(void)
        {
            int n=10,x;
            x=Fun(n);
            printf("%d",n);     // 10
            printf("\n%d",x);     // incremented n value -> /./-> 15
        }
    }    
Call by reference : 
    This mechanism is used to directly update the value of a variable from returned value.
    Ex :=>
    {
        int Fun(n)
        {
            return n+10;
        }
        int main(void)
        {
            int n=10;
            Fun(n);
            printf("%d",n); // results 20
        }
    }
*/