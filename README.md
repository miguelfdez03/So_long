<h1 align="center">🎮 So_long</h1>
<h3 align="center">Un juego 2D minimalista en C</h3>

# 📝 Descripción
So_long es un pequeño juego 2D donde el jugador debe recolectar todos los coleccionables y llegar a la salida. El juego está desarrollado en C utilizando la librería MLX42 para gráficos.

## 🎯 Objetivos del Juego
- Recolectar todos los coleccionables del mapa
- Encontrar la salida una vez recolectados todos los objetos
- Completar el nivel con el menor número de movimientos posible

## 🔍 Funcionamiento

### Controles
- Flechas direccionales: Mover al jugador
- ESC: Salir del juego

### Elementos del Juego
- 🕷️ P: Jugador (Araña)
- 🕸️ C: Coleccionable (Telaraña)
- 🚪 E: Salida
- 🧱 1: Muro
- ⬜ 0: Espacio vacío

## ⚙️ Características
- Verificación completa de mapas
- Contador de movimientos
- Detección de victoria
- Animaciones fluidas
- Gestión de colisiones

## 🐛 Manejo de Errores
- Validación de argumentos
- Verificación de formato de mapa
- Control de recursos de memoria
- Gestión de archivos

## 🔧 Funciones Permitidas
- open, close, read, write
- malloc, free
- perror, strerror
- exit
- Funciones de la MLX42

## 🛠️ Compilación y Uso

### Requisitos
- GCC
- Make
- Biblioteca MLX42
- OpenGL

## 📋 Formato del Mapa
Los mapas deben:
- Tener extensión .ber
- Ser rectangulares
- Estar rodeados por muros ('1')
- Contener un jugador (P), una salida (E) y al menos un coleccionable (C)
- Tener un camino válido hasta todos los coleccionables y la salida

## 🛠️ Estructura del Proyecto
```
.
├── src/
│   ├── so_long.c       # Función main y lógica principal
│   ├── so_long.h       # Header con definiciones y estructuras
│   ├── map.c          # Gestión y lectura del mapa
│   ├── map_check.c    # Validación del mapa
│   ├── moves.c        # Control de movimientos
│   ├── text_img.c     # Gestión de texturas
│   ├── img_window.c   # Renderizado de ventana
│   └── utils.c        # Funciones auxiliares
├── sprites/           # Archivos de imagen para texturas
└── libs/             # Bibliotecas externas (MLX42, libft)
```

## 📋 Formato del Mapa
Los mapas deben:
- Tener extensión .ber
- Ser rectangulares
- Estar rodeados por muros ('1')
- Contener un jugador (P), una salida (E) y al menos un coleccionable (C)
- Tener un camino válido hasta todos los coleccionables y la salida

Ejemplo de mapa:
```
1111111111
1P00000001
100C00C001
1000E00001
1111111111
```

## Installation

1. Clone the repository:
```bash
git clone https://github.com/yourusername/So_long.git
```

2. Build the project:
```bash
make
```

## Usage

Run the game with a map file:
```bash
./so_long maps/map.ber
```


---


- LinkedIn: https://www.linkedin.com/in/miguelfdezmunoz

---

Nota: Este repositorio se sube con el propósito de compartir mi progreso y ofrecer un recurso orientativo para aquellos que necesiten ayuda en su aprendizaje. Espero que se utilice como base de estudio y no solo para copiar y pegar soluciones.

<p align="center">🚀 Never stop learning!</p>
<p align="center">🎮 ¡A jugar!</p>