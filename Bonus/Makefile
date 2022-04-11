# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 22:16:03 by mmohamme          #+#    #+#              #
#    Updated: 2022/03/15 22:16:04 by mmohamme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INC = minitalk_bonus.h

SERVER_SRCS = server_bonus.c minitalk_utils_bonus.c
CLIENT_SRCS = client_bonus.c minitalk_utils_bonus.c

SERVER_OBJS = $(SERVER_SRCS:.c=.o)
CLIENT_OBJS = $(CLIENT_SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: bonus

bonus:$(CLIENT_OBJS) $(SERVER_OBJS)
	@$(CC) $(CFLAGS) $(CLIENT_OBJS) -o client
	@$(CC) $(CFLAGS) $(SERVER_OBJS) -o server
	@echo "Server Created Successfully"
	@echo "Client Created Successfully"

%.o:%.c $(INC)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(SERVER_OBJS) $(CLIENT_OBJS)
	@echo "Object Files Removed Successfully"

fclean:clean
	@$(RM) client server
	@echo "Client & Server Removed Successfully"
