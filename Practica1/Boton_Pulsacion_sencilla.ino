
/*
 En la siguiente practoca, el led se encendera al prrsionar el pulsador,
 y se mantendrá encendido hasta que vuelva a ser pulsado el botón.
  
*/

// definimos los pines que vamos a utilizar (mirar dibujo para que coincidan)
const int pulsadorPin = 4;     // pin asignado para el pulsador (const es xq no se va a cambiar el valor de dicha variable, sino s epode funviona igual)
const int ledPin =  8;      // pin asignado para el control del led

// definimos las  variables a utilizar.
boolean estado_luz;         // esta variable guarda el estado actual del pulsador (0 apagado, 1 encendido) y lo inicializamos a 0 (no haria falta).

void setup() {
  // declaramos el pin conectado al led como salida:
  pinMode(ledPin, OUTPUT);      
  // declaramos el pin conmectado al pulsador como entrada:
  pinMode(pulsadorPin, INPUT); 
  estado_luz=false; //inicializo el estado de la luz a apagado.    
}

void loop(){


  // comprobamos que el estado del pulsador: .
  // Si el estado es alto (HIGH, 1):
 if (digitalRead(pulsadorPin)==HIGH)
    {   
      /* despues de comprobar que el pulsador ha sido presionado, esperamos 100 mS,  
       *  miramos si el estado del pulsador es ahora LOW, 
       *  con esto nos aseguramos de que  no se encenderá la luz, hasta que el pulsador haya dejado de presionarse.
       *  
       */
        delay(100);
        
        if (digitalRead(pulsadorPin)==LOW)
        { 
              
        
            if (estado_luz==false)
            {
                digitalWrite(ledPin, HIGH);
                estado_luz=true;
            }
            else
            {
                digitalWrite(ledPin, LOW);
               estado_luz=false;
            }
        }
    }
}