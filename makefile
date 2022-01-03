a.exe:list_app.o list_imp.o
	c++ list_app.o list_imp.o -o a.exe
list_app.o:list_app.cpp
	c++ -c list_app.cpp
list_imp.o:list_imp.cpp
	c++ -c list_imp.cpp