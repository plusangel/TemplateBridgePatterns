#include "Binance.h"
#include "Coinbase.h"
#include "MinMaxTrader.h"
#include "AverageTrader.h"

int main() {
  Binance binance_exchange;
  MinMaxTrader min_max_trading_bot(binance_exchange);
  min_max_trading_bot.CheckPrices("BitCoin");

  Coinbase coinbase_exchange;
  AverageTrader average_trading_bot(coinbase_exchange);
  average_trading_bot.CheckPrices("BitCoin");

  return 0;
}
