//
//  main.cpp
//  MarketDataProcessing
//
//  Created by test on 7/9/24.
//

#include <iostream>
#include "DataTick.h"
#include "DataFeed.h"

int main() {
    std::cout << "Starting..." << std::endl;

    std::vector<std::string> symbols = {"AAPL", "GOOGL", "MSFT", "AMZN"};
    DataFeed feed(symbols);

    std::cout << "Generating ticks for: " << feed.toString() << std::endl;
    for (int i = 0; i < 10; i++) {
        DataTick tick = feed.generateTick();
        std::cout << tick.toString() << std::endl;
    }

    std::cout << "Done." << std::endl;
    return 0;
}
