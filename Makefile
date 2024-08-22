# Directories for header files and libraries
INCLUDE_DIRS = -Ilibs/sdl2/include -Ilibs/lua/include -Ilibs/
LIBRARY_DIRS = -Llibs/sdl2/lib -Llibs/lua/lib

# Libraries to link against
LIBS = -lmingw32 -lSDL2main -lSDL2 -llua

# Compiler and linker flags
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Output executable
TARGET = gameengine

# Source files
SRCS = $(wildcard src/*.cpp)

build:
	$(CXX) $(CXXFLAGS) $(INCLUDE_DIRS) $(LIBRARY_DIRS) -o $(TARGET) $(SRCS) $(LIBS)

run:
	./$(TARGET).exe

clean:
	rm -f $(TARGET).exe
	
