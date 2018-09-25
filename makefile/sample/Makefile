$(info wildcard: $(wildcard *.cpp))
$(info patsubst: $(strip $(patsubst %.cpp,%.o,$(wildcard *.cpp))))
$(info readlink: $(shell readlink -f 1.cpp))
$(foreach n,$(sort $(wildcard *.cpp)),$(info foreach cpp: $(n)))
define func1
srcs=$(wildcard *.cpp)
endef
define func2
t1 t2 t3
endef
define test1_rules
@echo original rules!!
@echo exec rules!!
endef
$(eval $(call func1))
val1=xxx
ifneq ($(strip $(val1)),)
  $(info val1 is not empty!!)
endif
%:
	@echo $@
all: $(call func2)
	@echo srcs=$(srcs)
	@g++ -Wall -o 1 1.cpp
	@g++ -Wall -o 2 2.cpp
clean:
	@rm -rf 1 2
test1:
	$(call test1_rules)
define test1_rules
@echo replaced rules!!
@echo exec rules!!
endef
