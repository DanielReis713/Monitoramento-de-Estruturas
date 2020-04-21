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
  
  // Step 2.1: Bloco de acionamento da lâmpada que está ligada no pino 2 com delay 0.15s
  digitalWrite(2, HIGH);
  delay(150); 
  digitalWrite(2, LOW);
  delay(150);
}