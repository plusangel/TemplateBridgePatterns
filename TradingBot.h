//
// Created by angelos on 02/09/2021.
//

#ifndef TEMPLATEPATTERN__TRADINGBOT_H_
#define TEMPLATEPATTERN__TRADINGBOT_H_
#include <vector>
#include <string>
#include <iostream>
#include "Exchange.h"

class TradingBot {
 public:
  explicit TradingBot(Exchange& exchange) : exchange_{exchange} {}
  void CheckPrices(const std::string& coin);

 protected:
  [[nodiscard]] virtual bool ShouldBuy(const std::vector<int>& prices) const = 0;
  [[nodiscard]] virtual bool ShouldSell(const std::vector<int>& prices) const = 0;
  Exchange& exchange_;
};

#endif//TEMPLATEPATTERN__TRADINGBOT_H_
