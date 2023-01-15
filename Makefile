CPP = g++
SFML = -lsfml-graphics -lsfml-window -lsfml-system
INC_DIR = header/Cartes
SRC_DIR = body/Cartes
OBJ_DIR = object
SRCS = $(SRC_DIR)/Cartes.cpp $(SRC_DIR)/Partie.cpp $(SRC_DIR)/Joueur.cpp $(SRC_DIR)/Royaume.cpp $(SRC_DIR)/Victoire.cpp $(SRC_DIR)/Tresor.cpp $(SRC_DIR)/Adventurer.cpp $(SRC_DIR)/Artisan.cpp $(SRC_DIR)/Bandit.cpp $(SRC_DIR)/Bureaucrat.cpp $(SRC_DIR)/Celar.cpp $(SRC_DIR)/Chancellor.cpp $(SRC_DIR)/Chapel.cpp $(SRC_DIR)/CouncilRoom.cpp $(SRC_DIR)/Feast.cpp $(SRC_DIR)/Festival.cpp $(SRC_DIR)/Gardens.cpp $(SRC_DIR)/Harbinger.cpp $(SRC_DIR)/Laboratory.cpp $(SRC_DIR)/Library.cpp $(SRC_DIR)/Market.cpp $(SRC_DIR)/Merchant.cpp $(SRC_DIR)/Militia.cpp $(SRC_DIR)/Mine.cpp $(SRC_DIR)/Moat.cpp $(SRC_DIR)/Moneylender.cpp $(SRC_DIR)/Poacher.cpp $(SRC_DIR)/Remodel.cpp $(SRC_DIR)/Sentry.cpp $(SRC_DIR)/Smithy.cpp $(SRC_DIR)/Spy.cpp $(SRC_DIR)/Thief.cpp $(SRC_DIR)/ThroneRoom.cpp $(SRC_DIR)/Vassal.cpp $(SRC_DIR)/Village.cpp $(SRC_DIR)/Witch.cpp $(SRC_DIR)/Woodcutter.cpp $(SRC_DIR)/Workshop.cpp $(SRC_DIR)/main.cpp
OBJS = $(OBJ_DIR)/Cartes.o $(OBJ_DIR)/Partie.o $(OBJ_DIR)/Joueur.o $(OBJ_DIR)/Royaume.o $(OBJ_DIR)/Victoire.o $(OBJ_DIR)/Tresor.o $(OBJ_DIR)/Adventurer.o $(OBJ_DIR)/Artisan.o $(OBJ_DIR)/Bandit.o $(OBJ_DIR)/Bureaucrat.o $(OBJ_DIR)/Celar.o $(OBJ_DIR)/Chancellor.o $(OBJ_DIR)/Chapel.o $(OBJ_DIR)/CouncilRoom.o $(OBJ_DIR)/Feast.o $(OBJ_DIR)/Festival.o $(OBJ_DIR)/Gardens.o $(OBJ_DIR)/Harbinger.o $(OBJ_DIR)/Laboratory.o $(OBJ_DIR)/Library.o $(OBJ_DIR)/Market.o $(OBJ_DIR)/Merchant.o $(OBJ_DIR)/Militia.o $(OBJ_DIR)/Mine.o $(OBJ_DIR)/Moat.o $(OBJ_DIR)/Moneylender.o $(OBJ_DIR)/Poacher.o $(OBJ_DIR)/Remodel.o $(OBJ_DIR)/Sentry.o $(OBJ_DIR)/Smithy.o $(OBJ_DIR)/Spy.o $(OBJ_DIR)/Thief.o $(OBJ_DIR)/ThroneRoom.o $(OBJ_DIR)/Vassal.o $(OBJ_DIR)/Village.o $(OBJ_DIR)/Witch.o $(OBJ_DIR)/Woodcutter.o $(OBJ_DIR)/Workshop.o $(OBJ_DIR)/main.o
DEPS = $(INC_DIR)/Cartes.h $(INC_DIR)/Partie.h $(INC_DIR)/Joueur.h $(INC_DIR)/Royaume.h $(INC_DIR)/Victoire.h $(INC_DIR)/Tresor.h $(INC_DIR)/Adventurer.h $(INC_DIR)/Artisan.h $(INC_DIR)/Bandit.h $(INC_DIR)/Bureaucrat.h $(INC_DIR)/Celar.h $(INC_DIR)/Chancellor.h $(INC_DIR)/Chapel.h $(INC_DIR)/CouncilRoom.h $(INC_DIR)/Feast.h $(INC_DIR)/Festival.h $(INC_DIR)/Gardens.h $(INC_DIR)/Harbinger.h $(INC_DIR)/Laboratory.h $(INC_DIR)/Library.h $(INC_DIR)/Market.h $(INC_DIR)/Merchant.h $(INC_DIR)/Militia.h $(INC_DIR)/Mine.h $(INC_DIR)/Moat.h $(INC_DIR)/Moneylender.h $(INC_DIR)/Poacher.h $(INC_DIR)/Remodel.h $(INC_DIR)/Sentry.h $(INC_DIR)/Smithy.h $(INC_DIR)/Spy.h $(INC_DIR)/Thief.h $(INC_DIR)/ThroneRoom.h $(INC_DIR)/Vassal.h $(INC_DIR)/Village.h $(INC_DIR)/Witch.h $(INC_DIR)/Woodcutter.h $(INC_DIR)/Workshop.h

main: $(OBJS)
	$(CPP) -o $@ $^ $(SFML)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(CPP) -o $@ -c $<

run: main
	./main

clean: 