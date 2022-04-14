# CryptoBlock-Chain-OOP

Blockchain is a technology that provides support for
transactions between users without the intervention of a central authority. One of the most well-known applications of blockchain technology is bitcoin, a digital currency that allows products and services to be exchanged just like an ordinary currency, except it is not issued by a bank. A blockchain consists of a sequence of blocks that contain a header and a list of transactions between two parties. The blocks are chained by 
cryptographic keys, and the first block in the chain is called the genesis block.

Transaction class represents a transaction from a txSender to a 
txRecipient with value txQuantity, where quantity is expressed in units of 
cryptocurrency.
The CryptoBlock class models a block in the blockchain and has as its member data 
an order number of the block represented by index, date and time it was created the block represented by timeStamp, the hash value of the previous block in the blockchain, and the hash value of the current block, previousBlockHash and blockHash, respectively transaction tx, taking into account that we are implementing blocks containing a single transaction. The functions calculateHash() which generates a hash key and now() which returns the current time are private.
The CryptoBlockchain class models a blockchain whose blocks are 
stored in the chain vector. The constructor of this class inserts block 0 on the first position in the chain for which index 0 is set, the hash of the previous block 0, and transaction details are set to default 0. The indices of the following blocks will be calculated as the index of the last block in the chain plus the value 1. 
Overload the << operator for the CryptoBlock and 
CryptoBlockchain classes.

