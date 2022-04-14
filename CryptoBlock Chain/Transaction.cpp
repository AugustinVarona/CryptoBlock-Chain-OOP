#include <iostream>
#include "Transaction.h"
using namespace std;

Transaction::Transaction()//constructor implicit al clasei Transaction
{
    txSender = txRecipient = txQuantity = 0;
}
Transaction::Transaction(string sender, string recipient, double quantity)//constructorul explicit al clasei Transaction
{
    txSender = sender;
    txRecipient = recipient;
    txQuantity = quantity;
}
string Transaction::getTxSender()//functia getter pentru data txSender
{
    return txSender;
}
string Transaction::getTxRecipient()//functia getter pentru data txRecipient
{
    return txRecipient;
}
double Transaction::getTxQuantity()//functia getter pentru data txQuantity
{
    return txQuantity;
}
