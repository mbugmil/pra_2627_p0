CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

TARGET = robot
OBJS = main.o RoboticArm.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

main.o: main.cpp Roboticarm.h
	$(CXX) $(CXXFLAGS) -c main.cpp

RoboticArm.o: RoboticArm.cpp RoboticArm.h
	$(CXX) $(CXXFLAGS) -c RoboticArm.cpp

test: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
