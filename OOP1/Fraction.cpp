class Fraction
{
    private:

        int numerator;
        int denominator;

    public:

        //So we want to restrict garbage assignment to numerator and denominator;
        Fraction(int numerator, int denominator)
        {
            this -> numerator = numerator;
            this -> denominator = denominator;
        }

        void print()
        {
            std::cout << this -> numerator << '/' << this -> numerator << '\n';
        }

        void add(Fraction f2)
        {
            
        }
};