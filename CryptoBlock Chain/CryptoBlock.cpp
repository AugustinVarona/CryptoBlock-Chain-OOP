#include <iostream>
#include <algorithm>
#include <ctime>
#include "CryptoBlock.h"
using namespace std;

CryptoBlock::CryptoBlock()//constructorul implicit al clasei CryptoBlock
{
    index = 0;
    Transaction();
    timeStamp = now();
    if(index == 0)
        previousBlockHash = "0";
    blockHash = calculateHash();

}
CryptoBlock::CryptoBlock(int ix,string prevHash, string sender, string recipient, double quantity):Transaction(sender, recipient, quantity)//constructorul explicit al clasei CryptoBlock
{
    index = ix;
    previousBlockHash = prevHash;
    blockHash = calculateHash();
    timeStamp = now();
}
int CryptoBlock::getIndex()//functia getter  pentru index
{
    return index;
}
string CryptoBlock::getTimeStamp()//functia getter pentru timeStamp
{
    return timeStamp;
}
string CryptoBlock::getPreviousBlockHash()//functia getter pentru previousBlockHash
{
    return previousBlockHash;
}
string CryptoBlock::getBlockHash()//functia getter pentru blockHash
{
    return blockHash;
}
Transaction CryptoBlock::getTx()//functia getter de tip Transaction pentru tx
{
    return tx;
}

