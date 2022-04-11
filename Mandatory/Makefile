# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 22:14:42 by mmohamme          #+#    #+#              #
#    Updated: 2022/03/15 22:14:45 by mmohamme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INC = minitalk.h

SERVER_SRCS = server.c minitalk_utils.c
CLIENT_SRCS = client.c minitalk_utils.c

SERVER_OBJS = $(SERVER_SRCS:.c=.o)
CLIENT_OBJS = $(CLIENT_SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: server client

client:$(CLIENT_OBJS)
	@$(CC) $(CFLAGS) $(CLIENT_OBJS) -o client
	@echo "Client Created Successfully"

server:$(SERVER_OBJS)
	@$(CC) $(CFLAGS) $(SERVER_OBJS) -o server
	@echo "Server Created Successfully"

%.o:%.c $(INC)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(SERVER_OBJS) $(CLIENT_OBJS)
	@echo "Object Files Removed Successfully"

fclean:clean
	@$(RM) client server
	@echo "Client & Server Removed Successfully"
