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
  // Step 1.1: denominação do pinos de entrada
  pinMode(13, OUTPUT); //Pino-Vermelho
  pinMode(12, OUTPUT); //Pino-Aramarelo
  pinMode(11, OUTPUT); //Pino-Verde
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
  // Step 2.1: Bloco de acionamento da lâmpada que está ligada no pino 11 com delay 0.20s
  digitalWrite(11, HIGH);
  delay(200);
  digitalWrite(11, LOW);
  delay(200);
  
  // Step 2.2: Bloco de acionamento da lâmpada que está ligada no pino 12 com delay 0.20s
  digitalWrite(12, HIGH);
  delay(200);
  digitalWrite(12, LOW);
  delay(200);

  
  // Step 2.3: Bloco de acionamento da lâmpada que está ligada no pino 13 com delay 0.20s
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);
}