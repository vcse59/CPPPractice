#ifndef __SAMPLE_CLASS_H__
#define __SAMPLE_CLASS_H__

class CSampleClass
{
    public:
        CSampleClass();
        ~CSampleClass();

        int getNum() const;
        void setNum(int pNum);

        // Binary Operator
        CSampleClass operator+(const CSampleClass& arg1) const;
        CSampleClass operator-(const CSampleClass& arg1) const;
        CSampleClass operator*(const CSampleClass& arg1) const;
        CSampleClass operator/(const CSampleClass& arg1) const;
        CSampleClass operator%(const CSampleClass& arg1) const;
        CSampleClass operator^(const CSampleClass& arg1) const;
        CSampleClass operator&(const CSampleClass& arg1) const;
        CSampleClass operator|(const CSampleClass& arg1) const;

        // Unary Operator
        CSampleClass operator~() const;
        CSampleClass operator+() const;
        CSampleClass operator-() const;
        CSampleClass operator!() const;
        
        CSampleClass& operator=(const CSampleClass& arg1);

        void print();

    private:
        int mNum;
        CSampleClass(const CSampleClass& arg1);
};
#endif