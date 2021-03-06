#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

#include <string>

// Define Bitcoin-Qt message queue name for mainnet
#define BITCOINURI_QUEUE_NAME_MAINNET "ColossusCoinURI"
// Define Bitcoin-Qt message queue name for testnet
#define BITCOINURI_QUEUE_NAME_TESTNET "ColossusCoin-testnet"

extern std::string strBitcoinURIQueueName;

void ipcScanRelay(int argc, char *argv[]);
void ipcInit(int argc, char *argv[]);

#endif // QTIPCSERVER_H
