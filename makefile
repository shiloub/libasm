NAME = libasm.a
NASM = nasm
LD = ld
NASM_FLAGS = -f elf64 -g -F dwarf
LD_FLAGS = -g
SRC = ft_strlen.s\
		ft_strcpy.s\
		
OBJ = $(SRC:.s=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar crs $@ $^

%.o : %.s
	$(NASM) $(NASM_FLAGS) $< -o $@

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all