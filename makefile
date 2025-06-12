# Makefile

SRC_DIR := src
BIN_DIR := bin
TARGET := $(BIN_DIR)/hash_table
SRC_FILES := main.c hash_table.c

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(addprefix $(SRC_DIR)/, $(SRC_FILES))
	mkdir -p $(BIN_DIR)
	gcc -o $@ $^

clean:
	rm -f $(TARGET)
