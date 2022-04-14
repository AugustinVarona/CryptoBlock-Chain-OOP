#ifndef CRYPTOBLOCKCHAIN_H
#define CRYPTOBLOCKCHAIN_H
#include <iostream>
#include <vector>
#include "CryptoBlock.h"
using namespace std;

class CryptoBlockchain
{
public:
    CryptoBlockchain();//constructor care creeaza blocul 0 numit si „genesis block”
    void addNewBlock(string, string, double);//functia care creeaza un nou block
    vector<CryptoBlock> getChain();//functia getter pentru vectorul chain
    friend ostream& operator<<(ostream& o, CryptoBlockchain& bc)//supraincarcarea operatorului << pentru clasa CryptoBlockchain
    {
       for(int i=0;i<bc.chain.size();i++)//se itereaza vectorul chain si se afiseaza detaliile fiecarui bloc
        {
            o << "{" << endl << "BlockID:" << bc.chain[i].getIndex() << ", \nTime_Stamp:" << bc.chain[i].getTimeStamp() << ", \nPrevious_Block_Hash:" <<
        bc.chain[i].getPreviousBlockHash() << ", \nBlock_Hash:" << bc.chain[i].getBlockHash() << ", \nSender:" << bc.chain[i].getTxSender() << ", \nRecipient:" << bc.chain[i].getTxRecipient()
        << ", \nQuantity:" << bc.chain[i].getTxQuantity() << "\n},\n";

        }
        return o;
    }
private:
    string getLastHash();//functia getter pentru returnarea blockHash-ului ultimului block din chain
    int getLastIndex();//functia getter pentru returnarea indexului ultimului block din chain
    vector<CryptoBlock> chain;//vectorul chain de tip CryptoBlock

};

#endif // CRYPTOBLOCKCHAIN_H
