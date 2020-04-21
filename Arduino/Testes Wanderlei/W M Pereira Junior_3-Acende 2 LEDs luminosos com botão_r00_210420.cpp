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
  // Step 1.1: Denominação do pinos de entrada e do botão
  pinMode(10, OUTPUT); // Pino-Vermelho
  pinMode(9 , OUTPUT); // Pino-Verde
  pinMode(7 , INPUT);  // Botão
}


//
//
//=========================================================================%
// STEP 2: BLOCO DE ACENDIMENTO DO LED COM BOTÃO
//=========================================================================%
//
//
void loop()
{
  // Step 2.1: Declarando o estado do botão
  int estadoBotao;
  estadoBotao = digitalRead(7);
  
  // Step 2.1: Bloco de acionamento da lâmpada que está ligada no pino 11 com delay 0.20s
  digitalWrite(10 ,estadoBotao);
  digitalWrite(9  ,!estadoBotao);
}