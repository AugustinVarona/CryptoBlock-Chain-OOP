#include <iostream>
#include <vector>
#include "CryptoBlockchain.h"
using namespace std;

CryptoBlockchain::CryptoBlockchain()//constructor care creeaza blocul 0 numit si „genesis block”
{
    chain.push_back(CryptoBlock());//folosim functia push_back pentru a introduce "genesis block" in vectorul chain
}
void CryptoBlockchain::addNewBlock(string sender, string recipient, double quantity)//functia care creeaza un nou block
{
    int ix = getLastIndex();
    string prevHash = getLastHash();
    chain.push_back(CryptoBlock(++ix, prevHash, sender, recipient, quantity));
}
vector<CryptoBlock> CryptoBlockchain::getChain()//functia getter pentru vectorul chain
{
    return chain;
}
string CryptoBlockchain::getLastHash()//functia getter pentru returnarea blockHash-ului ultimului block din chain
{
    return chain[getLastIndex()].getBlockHash();
}
int CryptoBlockchain::getLastIndex()//functia getter pentru returnarea indexului ultimului block din chain
{
    return (chain.size() - 1);//returnarea indexului ultimului block din chain
}

