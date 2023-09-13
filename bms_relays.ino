//https://docs.arduino.cc/built-in-examples/communication/SerialEvent
//https://reference.arduino.cc/reference/en/language/functions/communication/serial/serialevent/
//https://elcodigoascii.com.ar/
//https://www.youtube.com/watch?v=vHeG3Gt6STE
//https://learn.microsoft.com/en-us/visualstudio/ide/reference/toolbox?view=vs-2022
//https://www.youtube.com/watch?v=lY1Z0Hgo288
//https://www.youtube.com/watch?v=gi-Sruf8FNA
#define tiempo_apagados 3000
#define times 200
int Pines[]=  { 2, 3, 4, 5, 6, 7, 8, 9};
int Pines2[]= {10,11,12,A1,A2,A3,A4,A5};
char dato;

void setup() {
  configurar_pines();
  Pone_todo_cero();
  Serial.begin(9600);
    while (!Serial) {
      ; // wait for serial port to connect. Needed for native USB
    }
  
  
}

void loop() {
//MUERTO
  //ciclico();
}
void Pone_todo_cero(){
  for(int i=0;i<8;i++){
    digitalWrite(Pines[i], LOW);   // turn the LED on (HIGH is the voltage level)
  }
  for(int i=0;i<8;i++){
    digitalWrite(Pines2[i], LOW);   // turn the LED on (HIGH is the voltage level)
  }
}
void ciclico(){
  for(int i=0;i<8;i++){
    digitalWrite(Pines[i], HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(times);                       // wait for a second
    digitalWrite(Pines[i], LOW);    // turn the LED off by making the voltage LOW
    delay(times);
  }
  for(int i=0;i<8;i++){
    digitalWrite(Pines2[i], HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(times);                       // wait for a second
    digitalWrite(Pines2[i], LOW);    // turn the LED off by making the voltage LOW
    delay(times);
  }
}
void configurar_pines(){
  for(int i=0;i<8;i++){
    pinMode(Pines[i], OUTPUT);
  }
  for(int i=0;i<8;i++){
    pinMode(Pines2[i], OUTPUT);
  }
}


void serialEvent() {
  if (Serial.available() > 0) {
          dato = Serial.read();
                        Serial.println(dato);  
                        switch (dato) {
                        

                            case '0':  //apaga todo 
                              Serial.println("PAGAR todo: 0");
                              digitalWrite(Pines[0], LOW);//fuente
                              digitalWrite(Pines[1], LOW);
                              delay(tiempo_apagados);
                              digitalWrite(Pines[2], LOW);//debuger
                              digitalWrite(Pines[3], LOW);     
                              delay(tiempo_apagados);                        
                              break;

                            case '1':  //prender todo 
                              Serial.println("PRENDER todo: 1");
                              digitalWrite(Pines[3], HIGH);//debuger
                              digitalWrite(Pines[2], HIGH);
                              delay(tiempo_apagados);
                              digitalWrite(Pines[1], HIGH);//fuente
                              digitalWrite(Pines[0], HIGH);     
                              delay(tiempo_apagados);                        
                              break;




                            case 'A': 
                              Serial.println("RELAY 1 PRENDIDO");
                              digitalWrite(Pines[4], HIGH);
                              break;
                            case 'B':  
                              Serial.println("RELAY 2 PRENDIDO");
                              digitalWrite(Pines[5], HIGH);
                              break;
                            case 'C':  
                              Serial.println("RELAY 3 PRENDIDO");
                              digitalWrite(Pines[6], HIGH);
                              break;
                            case 'D': 
                              Serial.println("RELAY 4 PRENDIDO");
                              digitalWrite(Pines[7], HIGH);
                              break;    
                            case 'E': 
                              Serial.println("RELAY 5 PRENDIDO");
                              digitalWrite(Pines2[0], HIGH);
                              break;
                            case 'F':  
                              Serial.println("RELAY 6 PRENDIDO");
                              digitalWrite(Pines2[1], HIGH);
                              break;
                            case 'G':  
                              Serial.println("RELAY 7 PENDIDO");
                              digitalWrite(Pines2[2], HIGH);
                              break;
                            case 'H': 
                              Serial.println("RELAY 8 PRENDIDO");
                              digitalWrite(Pines2[3], HIGH);
                              break;
                            case 'I': 
                              Serial.println("RELAY 9 PRENDIDO");
                              digitalWrite(Pines2[4], HIGH);
                              break;
                            case 'J':  
                              Serial.println("RELAY 10 PRENDIDO");
                              digitalWrite(Pines2[5], HIGH);
                              break;
                            case 'K':  
                              Serial.println("RELAY 11 PRENDIDO");
                              digitalWrite(Pines2[6], HIGH);
                              break;
                            case 'L': 
                              Serial.println("RELAY 12 PRENDIDO");
                              digitalWrite(Pines2[7], HIGH); 
                              break;

                            case 'a':
                              Serial.println("RELAY 1 APAGADO");
                              digitalWrite(Pines[4], LOW);
                              break;
                            case 'b':
                              Serial.println("RELAY 2 APAGADO");
                              digitalWrite(Pines[5], LOW);
                              break;
                            case 'c':
                              Serial.println("RELAY 3 APAGADO");
                              digitalWrite(Pines[6], LOW);
                              break;
                            case 'd':
                              Serial.println("RELAY 4 APAGADO");
                              digitalWrite(Pines[7], LOW);
                              break;
                            case 'e':
                              Serial.println("RELAY 5 APAGADO");
                              digitalWrite(Pines2[0], LOW);
                              break;
                            case 'f':
                              Serial.println("RELAY 6 APAGADO");
                              digitalWrite(Pines2[1], LOW);
                              break;
                            case 'g':
                              Serial.println("RELAY 7 APAGADO");
                              digitalWrite(Pines2[2], LOW);
                              break;
                            case 'h':
                              Serial.println("RELAY 8 APAGADO");
                              digitalWrite(Pines2[3], LOW);
                              break;
                            case 'i':
                              Serial.println("RELAY 9 APAGADO");
                              digitalWrite(Pines2[4], LOW);
                              break;
                            case 'j':
                              Serial.println("RELAY 10 APAGADO");
                              digitalWrite(Pines2[5], LOW);
                              break;
                            case 'k':
                              Serial.println("RELAY 11 APAGADO");
                              digitalWrite(Pines2[6], LOW);
                              break;
                            case 'l':
                              Serial.println("RELAY 12 APAGADO");
                              digitalWrite(Pines2[7], LOW);
                              break;



                              
                            case 'P':  
                              Serial.println("APAGA TODO");
                              Pone_todo_cero();
                              break;  
                            case 'R':  
                              Serial.println("Power on reset");
                              digitalWrite(Pines[0], LOW);//fuente
                              digitalWrite(Pines[1], LOW);
                              delay(3000);
                              digitalWrite(Pines[1], HIGH);//fuente
                              digitalWrite(Pines[0], HIGH);   
                              break; 


                              
                            default:
                              
                              Serial.println(" no entiendo ");
                              break;
                          }

                  
                  
              
  }

  
}
