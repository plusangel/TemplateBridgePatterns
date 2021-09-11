//
// Created by angelos on 02/09/2021.
//

#ifndef TEMPLATEPATTERN__EXCHANGE_H_
#define TEMPLATEPATTERN__EXCHANGE_H_
#include <vector>
#include <string>

class Exchange {
 public:
  virtual void Connect() = 0;
  virtual std::vector<int> GetMarketData(const std::string& coin) = 0;
};

#endif//TEMPLATEPATTERN__EXCHANGE_H_
