//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

///Punto de entrada a la aplicación///
int main() {
	//////Variables//////
	Texture textureFondo;
	Sprite fondo;

	//Cargamos la textura del archivo
	textureFondo.loadFromFile("imagenes/fondo.jpg");

	//Cargamos el material del sprite
	fondo.setTexture(textureFondo);

	//Escalamos la imagen para que entre en la ventana
	fondo.setScale(0.7812, 0.7812);

	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(800, 600, 32),
		"Que ventana horrible");
	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		//Dibujamos la escena
		App.draw(fondo);

		// Mostramos la ventana
		App.display();
	}
	return 0;
}
