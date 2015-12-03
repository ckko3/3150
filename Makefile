CC=gcc
CFLAGS=-Wall

EXE=\
    2014_1a_A \
    2014_1a_B \
    2014_2_A \
    2014_2_b \
    2012_5

all: ${EXE}

clean:
        rm -f ${EXE}
