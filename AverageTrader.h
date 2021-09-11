//
// Created by angelos on 02/09/2021.
//

#ifndef TEMPLATEPATTERN__AVERAGE_H_
#define TEMPLATEPATTERN__AVERAGE_H_
#include "TradingBot.h"
#include <numeric>

class AverageTrader : public TradingBot {
 public:
  explicit AverageTrader(Exchange& exchange) : TradingBot(exchange) {}
  float ListAverage(const std::vector<int> &prices) const {
    return std::accumulate(prices.begin(), prices.end(), 0)/prices.size();
  }

 protected:
  [[nodiscard]] bool ShouldBuy(const std::vector<int> &prices) const override {
    return (prices.back() == ListAverage(prices));
  }
  [[nodiscard]] bool ShouldSell(const std::vector<int> &prices) const override {
    return (prices.back() == ListAverage(prices));
  }
};

#endif//TEMPLATEPATTERN__AVERAGE_H_
