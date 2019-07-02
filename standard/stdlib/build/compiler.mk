include environment.mk

#---------------------------------------------------
# HIDING THE GCC COMPILATION
#---------------------------------------------------

MAKEFLAGS += --quiet

#---------------------------------------------------
# GNUCC PARAMETERS
#---------------------------------------------------

CFLAGS :=  -Wall -g -O3

#---------------------------------------------------
# OTHER PARAMETERS
#---------------------------------------------------

BINARY := $(BINARY_DIR)/stdlib

#---------------------------------------------------
# SOURCE FILES (*.c, *.o)
#---------------------------------------------------

SOURCES := $(wildcard $(SOURCE_DIR)/**/*.c $(SOURCE_DIR)/*.c)
OBJECTS := $(patsubst %.c, %.o, $(SOURCES))
