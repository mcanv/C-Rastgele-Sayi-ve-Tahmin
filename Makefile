.POSIX:
CC = cc

PROG = sayi-tahmin
OBJ = main.o

all: $(PROG)
$(PROG): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $@ $(LDLIBS)

clean:
	rm -f $(PROG) $(OBJ)

.SUFFIXES: .c .o
.c.o:
	$(CC) -std=c99 $(CFLAGS) $(CPPFLAGS) -c $<
