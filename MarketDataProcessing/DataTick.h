//
//  DataTick.h
//  MarketDataProcessing
//
//  Created by test on 7/9/24.
//

#ifndef DataTick_h
#define DataTick_h

#include <string>
#include <chrono>
#include <sstream>

class DataTick {
public:
    DataTick(const std::string &symbol, double price, int volume);

    const std::string& getSymbol() const;
    double getPrice() const;
    int getVolume() const;
    std::chrono::system_clock::time_point getTimestamp() const;
    const std::string toString() const;

private:
    std::string symbol;
    double price;
    int volume;
    std::chrono::system_clock::time_point timestamp;
};

#endif /* DataTick_h */
