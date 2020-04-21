// ######################################################################
// UNIVERSIDADE FEDERAL DE CATALÃO (UFCat)
// DEPARTAMENTO DE ENGENHARIA CIVIL
// Autores
// Wanderlei Malaquias Pereira Junior
// Daniel Reis Machado Rezende
// colaboradores
// Walter Albergaria
// ######################################################################

// TESTES DE FUNCIONAMENTO ARDUINO

//
//
//=========================================================================%
// STEP 1: DECLARANDO OS PINOS NAS SAÍDAS DIGITAIS
//=========================================================================%
//
//
void setup()
{
  pinMode(2, OUTPUT);
}
//
//
//=========================================================================%
// STEP 2: BLOCO DE ACENDIMENTO DO LED 
//=========================================================================%
//
//
void loop()
{
  
  // Step 2.1: Bloco de acionamento da lâmpada que está ligada no pino 11 com delay 0.15s
  digitalWrite(11, HIGH);
  delay(150); 
  digitalWrite(11, LOW);
  delay(150);
  
  // Step 2.1: Bloco de acionamento da lâmpada que está ligada no pino 12 com delay 0.15s
  digitalWrite(12, HIGH);
  delay(150); 
  digitalWrite(12, LOW);
  delay(150);
  
  // Step 2.1: Bloco de acionamento da lâmpada que está ligada no pino 13 com delay 0.15s
  digitalWrite(13, HIGH);
  delay(150); 
  digitalWrite(13, LOW);
  delay(150);
}