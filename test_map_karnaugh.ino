
// pins de entradas
int n  = 7;
int v  = 6;
int a  = 5;
int az = 4;

// pins de salidas

int s = 13;


// valores de entradas

int nv  = 0;
int vv  = 0;
int av  = 0;
int azv = 0;

// valores de salida 
int sv = 0;



void setup() {
  // put your setup code here, to run once:
  pinMode(n,  INPUT);
  pinMode(v,  INPUT);
  pinMode(a,  INPUT);
  pinMode(az, INPUT);

  pinMode(s,  OUTPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  nv  = digitalRead(n);
  vv  = digitalRead(v);
  av  = digitalRead(a);
  azv = digitalRead(az);

  Serial.print("Valor de n: ");
  Serial.println(nv);

  Serial.print("Valor de v: ");
  Serial.println(vv);

  Serial.print("Valor de a: ");
  Serial.println(av);

  Serial.print("Valor de az: ");
  Serial.println(azv);
  
  sv = !(nv) && vv || azv && !(av);

  Serial.print("Valor de s = !(nv) && vv || azv && !(av): ");
  Serial.println(sv);
  
  if(sv){
    digitalWrite(s, HIGH);  
  } else {
    digitalWrite(s, LOW);
    
  }

  delay(1000);

}
