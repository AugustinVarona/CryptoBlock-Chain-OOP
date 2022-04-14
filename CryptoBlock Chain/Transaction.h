#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <iostream>
using namespace std;

class Transaction//clasa Transaction
{
public:
    Transaction();//constructor implicit al clasei Transaction
    Transaction(string, string, double);//constructorul explicit al clasei Transaction
    string getTxSender();//functia getter pentru data txSender
    string getTxRecipient();//functia getter pentru data txRecipient
    double getTxQuantity();//functia getter pentru data txQuantity
private:
    string txSender;//data membra
    string txRecipient;//data membra
    double txQuantity;//data membra
};
#endif // TRANSACTION_H
