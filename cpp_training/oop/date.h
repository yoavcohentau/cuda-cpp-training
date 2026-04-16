class Date{
    int day, month, year;

public:
    Date(int dd, int mm, int yy);

    void init(int dd, int mm, int yy);
    void addDay();
    Date operator ++ ();
    Date operator ++ (int notused);
    Date operator += (int n);
    operator int* () const;

    int getDay() const;
    int getMonth() const;
    int getYear() const;

    void printDate() const;
};