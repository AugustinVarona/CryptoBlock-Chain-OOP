#ifndef CRYPTOBLOCK_H
#define CRYPTOBLOCK_H
#include <iostream>
#include <algorithm>
#include <ctime>
#include "Transaction.h"
using namespace std;

class CryptoBlock : public Transaction
{
public:
    CryptoBlock();//constructorul implicit al clasei CryptoBlock
    CryptoBlock(int,string, string, string, double);//constructorul explicit al clasei CryptoBlock
    int getIndex();//functia getter  pentru index
    string getTimeStamp();//functia getter pentru timeStamp
    string getPreviousBlockHash();//functia getter pentru previousBlockHash
    string getBlockHash();//functia getter pentru blockHash
    Transaction getTx();//functia getter de tip Transaction pentru tx
    friend ostream& operator<<(ostream& o, CryptoBlock& b)//supraincarcarea operatorului << pentru clasa CryptoBlock
    {
        o << "{" << endl << "BlockID:" << b.getIndex() << ", \nTime_Stamp:" << b.getTimeStamp() << ", \nPrevious_Block_Hash:" <<
        b.getPreviousBlockHash() << ", \nBlock_Hash:" << b.getBlockHash() << ", \nSender:" << b.getTxSender() << ", \nRecipient:" << b.getTxRecipient()
        << ", \nQuantity:" << b.getTxQuantity() << "\n},";
        return o;
    }
private:
    string calculateHash()//functia de calculare blockHash
    {
        hash<string> str_hash;
        return to_string(str_hash(timeStamp +  previousBlockHash + getTx().getTxSender() + getTx().getTxRecipient() + to_string(getTx().getTxQuantity())));
    }
    string now()//functia de determinare a timpului
    {
        time_t t = time(0);
        string str = ctime(&t);
        str.erase(std::remove(str.begin(), str.end(), '\n'), str.end());
        return str;
    }
    int index;//data membra
    string timeStamp;//data membra
    string previousBlockHash;//data membra
    string blockHash;//data membra
    Transaction tx;//data membra
};

#endif // CRYPTOBLOCK_H

