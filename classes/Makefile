CXXFLAGS =	-O2 -g -Wall -fmessage-length=0
#List of dependencies...
OBJS =		first_class.o second_class.o main.o
LIBS =
TARGET =	main.out
$(TARGET):	$(OBJS)
		$(CXX) -o $(TARGET) $(OBJS) $(LIBS)
all:		$(TARGET)
clean:
		rm -f $(OBJS) $(TARGET)
run:		$(TARGET)
		./$(TARGET)
