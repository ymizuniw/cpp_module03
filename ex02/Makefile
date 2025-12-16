TESTS = $(NAME_0) $(NAME_1) $(NAME_2)
OBJS = $(OBJS_0) $(OBJS_1) $(OBJS_2)

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
INCS = -I.

ifeq ($(DEBUG),1)
	CXXFLAGS += -DDEBUG
	CXXFLAGS += -g
endif

#NAME_0
NAME_0 := test00
SRCS_0 := ClapTrap.cpp \
ClapTrapLogs.cpp \
ClapTrapRangeCheck.cpp \
ScavTrap.cpp \
main0.cpp
OBJS_0:=$(SRCS_0:%.cpp=%.o)

#NAME_1
NAME_1 := test01
SRCS_1 := ClapTrap.cpp \
ClapTrapLogs.cpp \
ClapTrapRangeCheck.cpp \
ScavTrap.cpp \
main1.cpp
OBJS_1:=$(SRCS_1:%.cpp=%.o)

NAME_2 := test02
SRCS_2 := ClapTrap.cpp \
ClapTrapLogs.cpp \
ClapTrapRangeCheck.cpp \
ScavTrap.cpp \
FragTrap.cpp \
main2.cpp
OBJS_2:=$(SRCS_2:%.cpp=%.o)

all: $(TESTS)

$(NAME_0): $(OBJS_0)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS_0)
$(NAME_1): $(OBJS_1)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS_1)
$(NAME_2): $(OBJS_2)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS_2)

clean:
	$(RM) -f $(OBJS)
fclean: clean
	$(RM) $(TESTS)
re: fclean all

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCS) -c $< -o $@