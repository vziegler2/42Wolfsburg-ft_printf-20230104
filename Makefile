SRCS	=	ft_printf.c ft_check.c ft_printc.c ft_prints.c ft_printi.c ft_printu.c ft_printp.c ft_printx.c
# Hier alle zu kompilierenden .c-Dateien erfassen
OBJS	=	${SRCS:.c=.o}
# Damit nur veränderte .c-Dateien in .o-Dateien kompiliert werden
NAME	=	libftprintf.a
# Name des kompilierten Programms
RM		=	rm -f
# -f (force) macht fclean jederzeit ausführbar (auch ohne .o-Dateien)
all:		${NAME}
# Die Standard-Regel wird per Konvention eingefügt (und in re genutzt)
${NAME}:	makelibft ${OBJS}
			ar rcs ${NAME} ${OBJS}
# Die .o-Dateien werden nur verlinkt, falls NAME noch nicht existiert
# rcs steht für replace/create, create silently und .o-Datei-Index
makelibft:
			make -C Libft
			cp Libft/libft.a ${NAME}
# Springt in den Ordner Libft und führt die dortige Makefile aus
# Kopiert anschließend die entstandene .a-Datei in den Überordner
clean:
			${RM} ${OBJS}
# Löscht die .o-Dateien
fclean:		clean
			${RM} ${NAME}
			make -C Libft fclean
# Löscht die .o- und exe-Dateien
# Springt in den Ordner Libft und führt fclean der dortigen Makefile aus
re:			fclean all
# Löscht und rekompiliert
.PHONY:		all clean fclean re
# Führt die Befehle aus, auch wenn eine gleichnamige Datei existiert