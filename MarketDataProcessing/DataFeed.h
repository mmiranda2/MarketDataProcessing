//
//  DataFeed.hpp
//  MarketDataProcessing
//
//  Created by test on 7/9/24.
//

#ifndef DataFeed_h
#define DataFeed_h

#include "DataTick.h"
#include <vector>
#include <string>

class DataFeed {
public:
    DataFeed(const std::vector<std::string> &symbols);
    DataTick generateTick();
    const std::string toString() const;

private:
    std::vector<std::string> symbols;
};

#endif /* DataFeed_h */
