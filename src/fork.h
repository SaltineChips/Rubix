// Copyright (c) 2016-2019 The CryptoCoderz Team / Espers
// Copyright (c) 2018-2019 The Rubix project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_FORK_H
#define BITCOIN_FORK_H

#include "bignum.h"
#include "chainparams.h"

/** Genesis Block Height */                                                     
static const int64_t nGenesisHeight = 0;
/** Reserve Phase start block */ 
static const int64_t nReservePhaseStart = 1;
/** Reserve Phase end block */ 
static const int64_t nReservePhaseEnd = 3; // 
/** Velocity toggle block */
static const int64_t VELOCITY_TOGGLE = 120; // Implementation of the Velocity system into the chain.
/** Velocity retarget toggle block */
static const int64_t VELOCITY_TDIFF = 0; // Use Velocity's retargetting method.
/** Protocol 3.0 toggle */
inline bool IsProtocolV3(int64_t nTime) { return TestNet() || nTime > 1493596800; } // Mon, 01 May 2017 00:00:00 GMT
/** Protocol 3.1 toggle */
inline bool IsProtocolV3_1(int64_t nTime) { return TestNet() || nTime > 1535697055; } // Friday, August 31, 2018 6:30:55 AM

#endif // BITCOIN_FORK_H
