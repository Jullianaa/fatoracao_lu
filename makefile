#all:		matriz.o main.o servicos.o validacao.o visao.o
#		g++ -o main matriz.o main.o servicos.o validacao.o visao.o
#
#matriz.o:	matriz.cpp matriz.hpp
#		g++ -c matriz.cpp
#		
#servicos.o:	servicos.cpp servicos.hpp
#		g++ -c servicos.cpp
#		
#validacao.o:	validacao.cpp validacao.hpp
#		g++ -c validacao.cpp
#
#visao.o:	visao.cpp visao.hpp
#		g++ -c visao.cpp
#
#main.o:		main.cpp matriz.hpp servicos.hpp validacao.hpp visao.hpp
#		g++ -c main.cpp matriz.hpp servicos.hpp validacao.hpp visao.hpp
#

all:	matriz.o main.o validacao.o visao.o servicos.o
		g++ -o main matriz.o main.o validacao.o visao.o servicos.o
matriz.o:	matriz.cpp matriz.hpp
		g++ -c matriz.cpp

validacao.o:	validacao.cpp validacao.hpp
		g++ -c validacao.cpp

visao.o:	visao.cpp visao.hpp
		g++ -c visao.cpp
		
servicos.o:	servicos.cpp servicos.hpp
			g++ -c servicos.cpp
			
main.o:		main.cpp matriz.hpp validacao.hpp visao.hpp servicos.hpp
		g++ -c main.cpp matriz.hpp validacao.hpp visao.hpp servicos.hpp

clean:
		rm -rf *.o

run:
		./main




