CFLAGS = -Wall -std=c++11
LDFLAGS = 

target = _main
srcs = main.cpp
objs = $(srcs:.cpp=.o)
headers = $(wildcard *.h)


.PHONY: all
all: $(target)

$(target): $(objs) $(headers) FORCE
	$(CXX) -o $@ $(objs) $(LDFLAGS)

$(objs):%.o:%.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<

.PHONY: FORCE
FORCE: 

clean:
	rm -f $(target) a.out *.o

