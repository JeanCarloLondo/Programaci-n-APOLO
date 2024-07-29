# Definimos los compiladores y opciones
CXX = g++
CXXFLAGS = -std=c++17 -O2

# Nombres de los ejecutables
TAIL_EXEC = factorial_tail
SIMPLE_EXEC = factorial_simple

# Archivo fuente para la recursión de cola
TAIL_SRC = tailrecursion.cpp

# Archivo fuente para la recursión simple
SIMPLE_SRC = simplerecursion.cpp

# Regla por defecto
all: $(TAIL_EXEC) $(SIMPLE_EXEC)

# Regla para compilar el ejecutable de recursión de cola
$(TAIL_EXEC): $(TAIL_SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regla para compilar el ejecutable de recursión simple
$(SIMPLE_EXEC): $(SIMPLE_SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regla para ejecutar y medir tiempos
run: all
	@echo "Ejecutando factorial con recursión de cola:"
	@time ./$(TAIL_EXEC)
	@echo
	@echo "Ejecutando factorial con recursión simple:"
	@time ./$(SIMPLE_EXEC)

# Regla para limpiar los archivos generados
clean:
	rm -f $(TAIL_EXEC) $(SIMPLE_EXEC)