# Nome do executável
EXEC = programa

# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Diretórios
SRCDIR = .
BUILDDIR = build

# Fontes e objetos
SRCS = $(SRCDIR)/main.cpp $(SRCDIR)/Ponto.cpp $(SRCDIR)/FiguraGeometrica.cpp $(SRCDIR)/Retangulo.cpp $(SRCDIR)/Circulo.cpp $(SRCDIR)/Triangulo.cpp
OBJS = $(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.o, $(SRCS))

# Regra principal
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Garante que a pasta build exista
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp | $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

# Limpar arquivos gerados
clean:
	rm -rf $(BUILDDIR) $(EXEC)