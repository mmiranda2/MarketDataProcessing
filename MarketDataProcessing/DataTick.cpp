//
//  DataTick.cpp
//  MarketDataProcessing
//
//  Created by test on 7/9/24.
//

#include "DataTick.h"

DataTick::DataTick(const std::string &symbol, double price, int volume)
    : symbol(symbol), price(price), volume(volume), timestamp(std::chrono::system_clock::now()) {}

const std::string& DataTick::getSymbol() const {
    return symbol;
}

double DataTick::getPrice() const {
    return price;
}

int DataTick::getVolume() const {
    return volume;
}

std::chrono::system_clock::time_point DataTick::getTimestamp() const {
    return timestamp;
}

const std::string DataTick::toString() const {
    std::ostringstream oss;
    oss << "Symbol: " << getSymbol()
        << ", Price: " << getPrice()
        << ", Volume: " << getVolume()
        << ", Timestamp: " << std::chrono::system_clock::to_time_t(getTimestamp());
    return oss.str();
}
