# Top level makefile, the real shit is at src/Makefile

default: all

# 如果没有匹配的规则，就执行这个。这里all就没有匹配的规则，所以make all 或者 make都会触发这个规则。这里就是cd src && make all
.DEFAULT:
	cd src && $(MAKE) $@

dep:
	cd deps && $(MAKE) hiredis && $(MAKE) jemalloc && $(MAKE) linenoise && $(MAKE) lua

install:
	cd src && $(MAKE) $@

.PHONY: install
