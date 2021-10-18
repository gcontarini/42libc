CC = gcc
CFLAGS = -Wall -Wextra -Werror

FTT = $(wildcard *_test.c)
BFTT = $(wildcard *_bonus.c)
BIN = $(FTT:.c=)
BBIN = $(BFTT:.c=)
LOG = log
LIB = ../libft.a
INC = ../
RDIR = results/

test: $(BIN) | $(LOG)
	for file in $^ ; do \
		echo "---- Test $$file function ----" >> $(LOG) ; \
		./$$file > test ; \
		diff test $(RDIR)$$file >> $(LOG) ; \
		echo "---- END TEST $$file function" >> $(LOG) ; \
	done
	rm test

test_bonus: $(BBIN) | $(LOG)
	for file in $^ ; do \
		echo "---- Test $$file function ----" >> $(LOG) ; \
		./$$file > test ; \
		diff test $(RDIR)$$file >> $(LOG) ; \
		echo "---- END TEST $$file function" >> $(LOG) ; \
	done
	rm test

test_all: test test_bonus

create_answers: $(BIN) $(BBIN)
	for file in $^ ; do \
		touch $(RDIR)$$file ; \
		./$$file > $(RDIR)$$file ; \
	done

.c: $(FTT)
	$(CC) $(CFLAGS) -I$(INC) $^ $(LIB) -o $@

$(LOG):
	touch $(LOG)

clean:
	rm -f $(BIN) $(BBIN) $(LOG)

.PHONY: test_all test test_bonus clean create_answers
