CC=g++
INCLUDE_FLAGS=-Iinclude
DEBUG_FLAGS=
CFLAGS=-g -std=c++1y
OBJ_DIR=obj

OBJ = $(OBJ_DIR)/ATM.o \
	  $(OBJ_DIR)/Bank.o \
	  $(OBJ_DIR)/BaseDisplay.o \
	  $(OBJ_DIR)/Account.o

LIB_NAME = ATM_Cpp14_lib

.PHONY = clean all
	
all : lib

lib : $(OBJ_DIR) $(LIB_NAME).a
$(LIB_NAME).a: $(OBJ)
	$(AR) rcv $@ $^
	ranlib $@


$(OBJ_DIR) :
	mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o : src/%.cxx
	$(CC) $(CFLAGS) $(INCLUDE_FLAGS) -o $@ -c $^ 

clean:
	rm -rf $(OBJ_DIR) $(LIB_NAME).a
