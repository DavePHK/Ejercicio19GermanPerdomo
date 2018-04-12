segunda: error_segundoorden.pdf


error_segundoorden.pdf: errorSO.py datos1902.txt
	python errorSO.py

datos1902.txt: Ej1902
	./Ej1902 > datos1902.txt

Ej1902: Ej1902.cpp
	c++ Ej1902.cpp -o Ej1902


primera: error_primerorden.pdf

error_primerorden.pdf: errorPO.py datos1901.txt
	python errorPO.py

datos1901.txt: Ej1901
	./Ej1901 > datos1901.txt	

Ej1901: Ej1901.cpp
	c++ Ej1901.cpp -o Ej1901
