#ifndef _ITEM_H_
#define _ITEM_H_
class CItem
{
    public:
        CItem(unsigned int pValue);
        ~CItem();

        unsigned int getValue() const;

    private:

        unsigned int mValue;
};
#endif
