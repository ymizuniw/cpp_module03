TESTS = $(NAME_0)
OBJS = $(OBJS_0)

CXX = c++
CXXFLAGS = -std=c++98 -Wno-shadow -Wall -Wextra -Werror
INCS = -I.

ifeq ($(DEBUG),1)
	CXXFLAGS += -DDEBUG
	CXXFLAGS += -g
endif

NAME_0 := test00
SRCS_0 := ClapTrap.cpp \
ClapTrapLogs.cpp \
ClapTrapRangeCheck.cpp \
main.cpp
OBJS_0:=$(SRCS_0:%.cpp=%.o)

$(NAME_0): $(OBJS_0)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS_0)

all: $(TESTS)
clean:
	$(RM) -f $(OBJS)
fclean: clean
	$(RM) $(TESTS)
re: fclean all

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCS) -c $< -o $@