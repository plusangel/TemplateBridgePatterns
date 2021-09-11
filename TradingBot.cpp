//
// Created by angelos on 02/09/2021.
//

#include "TradingBot.h"

void TradingBot::CheckPrices(const std::string& coin) {
  exchange_.Connect();
  std::vector<int> prices = exchange_.GetMarketData(coin);

  if (this->ShouldBuy(prices)) {
    std::cout << "You should buy " << coin << std::endl;
  } else if (this->ShouldSell(prices)) {
    std::cout << "You should sell " << coin << std::endl;
  } else {
    std::cout << "No action needed for " << coin << std::endl;
  }
}