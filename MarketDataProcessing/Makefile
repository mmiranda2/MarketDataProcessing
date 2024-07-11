CXX = g++
CXXFLAGS = -std=c++11 -Wall
SRC = main.cpp DataTick.cpp DataFeed.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = a.out

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

