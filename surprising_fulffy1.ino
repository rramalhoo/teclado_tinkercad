// C++ code
//

#include <Keypad.h>

const byte numRows = 4; //numero de linhas
const byte numCols = 4; //numero de colunas

char keymap[numRows] [numCols] =
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'},
};

byte rowPins [numRows] = {12,11,10,9};
byte colPins [numCols] = {8,7,6,5};
  
Keypad myKeypad = Keypad(makeKeymap(keymap), rowPins, colPins, numRows, numCols);
  
  
void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  char keypressed = myKeypad.getKey();
  if (keypressed != NO_KEY){
  	Serial.println(keypressed);  
  };
}