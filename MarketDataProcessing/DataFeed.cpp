//
//  DataFeed.cpp
//  MarketDataProcessing
//
//  Created by test on 7/9/24.
//

#include "DataFeed.h"
#include <random>

DataFeed::DataFeed(const std::vector<std::string> &symbols) : symbols(symbols) {}

DataTick DataFeed::generateTick() {
    static std::default_random_engine generator;
    static std::uniform_int_distribution<int> symbol_dist(0, (int) symbols.size() - 1);
    static std::uniform_real_distribution<double> price_dist(100.0, 500.0);
    static std::uniform_int_distribution<int> volume_dist(1, 10000);

    std::string symbol = symbols[symbol_dist(generator)];
    double price = price_dist(generator);
    int volume = volume_dist(generator);

    return DataTick(symbol, price, volume);
}

const std::string DataFeed::toString() const {
    std::ostringstream oss;
    int length = (int) symbols.size();
    for (int i = 0; i < length; i++) {
        if (i == length - 1) {
            oss << symbols.at(i);
        } else {
            oss << symbols.at(i) << ", ";
        }
    }
    return oss.str();
}
