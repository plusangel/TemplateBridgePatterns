//
// Created by angelos on 02/09/2021.
//

#ifndef TEMPLATEPATTERN__MINMAXTRADER_H_
#define TEMPLATEPATTERN__MINMAXTRADER_H_
#include "TradingBot.h"
#include <algorithm>

class MinMaxTrader : public TradingBot {
 public:
  explicit MinMaxTrader(Exchange& exchange) : TradingBot(exchange) {}

 protected:
  [[nodiscard]] bool ShouldBuy(const std::vector<int> &prices) const override {
    return (prices.back() == *std::min_element(std::begin(prices), std::end(prices)));
  }
  [[nodiscard]] bool ShouldSell(const std::vector<int> &prices) const override {
    return (prices.back() == *std::max_element(std::begin(prices), std::end(prices)));
  }
};

#endif//TEMPLATEPATTERN__MINMAXTRADER_H_
