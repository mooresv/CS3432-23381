PROGS = hello fahrenheit1 fahrenheit2 fahrenheit3 copy1 copy2 count1 count2 count3 count4 count5 power longest_line longest_line2

all: $(PROGS)

$(PROGS): %: %.c
	$(CC) $(CFLAGS) -o $@ $<
