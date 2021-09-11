//
// Created by angelos on 02/09/2021.
//

#ifndef TEMPLATEPATTERN__COINBASE_H_
#define TEMPLATEPATTERN__COINBASE_H_
#include "Exchange.h"
#include <vector>
#include <string>
#include <iostream>

class Coinbase : public Exchange {
 public:
  void Connect() override {
    std::cout << "Connecting to Coinbase exchange..." << std::endl;
  }
  std::vector<int> GetMarketData(const std::string& coin) override {
    return {10, 11, 22, 23};
  }

};

#endif//TEMPLATEPATTERN__COINBASE_H_
