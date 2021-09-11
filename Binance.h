//
// Created by angelos on 02/09/2021.
//

#ifndef TEMPLATEPATTERN__BINANCE_H_
#define TEMPLATEPATTERN__BINANCE_H_
#include "Exchange.h"
#include <vector>
#include <string>
#include <iostream>

class Binance : public Exchange {
 public:
  void Connect() override {
    std::cout << "Connecting to Binance exchange..." << std::endl;
  }
  std::vector<int> GetMarketData(const std::string& coin) override {
    return {10, 11, 12, 13};
  }

};

#endif//TEMPLATEPATTERN__BINANCE_H_
