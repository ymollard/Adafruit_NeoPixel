#include <Adafruit_NeoPixel.h>
// Quel est le numéro du connecteur où sont branchés vos pixels ?
#define PIN            6

// Combien de pixels sont branchés sur votre Arduino ?
#define NUMPIXELS      16

// On créé un objet pour discuter avec les pixels (ne pas toucher)
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN);

int delayval = 500; // Variable de délai en millisecondes

// La fonction setup() initialise toutes les variables et fonctions au démarrage du programme
void setup() {
  pixels.begin();
}

// La fonction loop() sera appelée en boucle pour mettre à jour votre animation
void loop() {

  // Cette boule for() parcoure chaque pixel entre le numéro 0 et le numéro NUMPIXELS
  for(int i=0; i<NUMPIXELS; i=i+1){

    // Cette fonction attribue une couleur (R, G, B) au pixel numéro i
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));  // Ici c'est vert

    // Valide l'ensemble des couleurs attribuées précédemment 
    pixels.show();

    // On attend 500ms avant de traiter le pixel suivant
    delay(delayval);
  }

  for(int i=0; i<NUMPIXELS; i=i+1){
    // Cette fois-ci on attribue la couleur noir (= éteint)
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));
  }
  
  // On valide les couleurs noires toutes en meme temps, après attribution des valeurs de chaque pixel
  pixels.show();
  delay(delayval);
}
