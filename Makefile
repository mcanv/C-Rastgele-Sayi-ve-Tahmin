.POSIX:
CC = cc

PROG = sayi-tahmin
all: $(PROG)
$(PROG): main.c
	$(CC) -std=c99 $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) main.c $(LDLIBS) -o $@

clean:
	rm -f $(PROG)
