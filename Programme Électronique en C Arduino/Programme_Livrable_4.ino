char nom[17] = {'A', 'B', 'C', 'D', 'E', 'F','G','H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q'}; // L'agent G n'existe pas
int card_id[16] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
int i, J, x, s, b, c, p, M, A, h, n, q, j,Z, z, Read, nombre, e, y;
int U = 1;
int V = 1;
int w = 1;
int O = 1;
int G = 1;
int BA = 13;
int BB = 12;
int BC = 11;
int BD = 10;
int BE = 9;
int boutonstate1;
int boutonstate2;
int boutonstate3;
int boutonstate4;
int boutonstate5;
int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;
int led5 = 2;
int led6 = 3;
int d = 1;

int L = 1;

void setup() {
  Serial.begin(9600);
  pinMode(BA, INPUT);
  pinMode(BB, INPUT);
  pinMode(BC, INPUT);
  pinMode(BD, INPUT);
  pinMode(led6, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led1, OUTPUT);
}
void led (boolean Valled1, boolean Valled2, boolean Valled3, boolean Valled4, boolean Valled5, boolean Valled6){
  digitalWrite(led1,Valled1);
    digitalWrite(led2,Valled2);
    digitalWrite(led3,Valled3); 
    digitalWrite(led4,Valled4);
    digitalWrite(led5,Valled5);
}
void lecteur(){
 x= Serial.read();
  x=x%48;
  if(c=0){
    b=1;
    c=Serial.available();
  }
   if(c=1){
    b=x;
    e=e+1;
  }
  y=y*d+b;
  d=10;
}
  void reboot(){
    d=1;
    y=0;
    e=0;
  }
void MA1() {
  if (L == 1) {
    Serial.println("Quelle ville est en France?");
    Serial.println("1:LONDRES");
    Serial.println("2:ROUEN");
    Serial.println("3:NEW YORK");
    Serial.println("4:PEKIN");
    L = L + 1;
    }
  if (L == 2) {
    if ( Serial.available() > 0) {
      if (Serial.read() == 50) {
        Serial.println("Dans quelle ville se trouve l'Elysee?");
        Serial.println("1:PARIS");
        Serial.println("2:MARSEILLE");
        Serial.println("3:TOULOUSE");
        Serial.println("4:LILLE");
        L = L + 1; }
      else {
        Serial.println("Erreur");
        digitalWrite(led6,HIGH); }}}
  if (L == 3) {
    if (Serial.available() > 0) {
      if (Serial.read() == 49) {
        Serial.println("Sur quelle planete vit-on?");
        Serial.println("1:MARS");
        Serial.println("2:JUPITER");
        Serial.println("3:SATURNE");
        Serial.println("4:TERRE");
        L = L + 1;
      }
      else {
        Serial.println("Erreur");
        digitalWrite(led6,HIGH);
}}}
  if (L == 4) {
    if (Serial.available() > 0) {
      if (Serial.read() == 52) {
        Serial.println("Valide");
        L = L + 1;
        z = z+1;
      }
      else {
        Serial.println("Erreur");
        digitalWrite(led6,HIGH);
}}}}
void MA2(){
  if (V == 1) {
    Serial.println("Quel jour est-il? (01, 02,03, etc...");
    V = V + 1;}
  if (V==2){
  if(Serial.available() > 0) { 
    lecteur();
      J=y;
    if(e==2){
    V=V+1;
    }}}
    if(V==3){
      if (J < 32 && b > -1) {
        Serial.println(y);
        Serial.println("En quelle mois somme-nous ? (numero,ex: 01,02,...12)");
       reboot();
        V=V+1;
      }
      else {
      Serial.println("Erreur");
        digitalWrite(led6,HIGH);
      i = 20;
    }}
        if (V == 4) {
           if(Serial.available() > 0) { 
    lecteur();
      M=y;
    if(e==2){
    V=V+1;
    }}
        if(V==5){
        M = y;
        if (M == 1) {
          if (J < 0 || J > 31) {
            Serial.println("Erreur");
            digitalWrite(led6,HIGH);
            i = 20;
          }}
        if (M == 2) {
          if (J < 0 || J > 29) {
            Serial.println("Erreur");
            digitalWrite(led6,HIGH);
            i = 20;
          }}
        if (M == 3) {
          if (J < 0 || J > 31) {
            Serial.println("Erreur");
            digitalWrite(led6,HIGH);
            i = 20;
          }}
        if (M == 4) {
          if (J < 0 || J > 30) {
            Serial.println("Erreur");
            digitalWrite(led6,HIGH);
            i = 20;
          }}
        if (M == 5) {
          if (J < 0 || J > 31) {
            Serial.println("Erreur");
            digitalWrite(led6,HIGH);
            i = 20;
          }}
        if (M == 6) {
          if (J < 0 || J > 30) {
            Serial.println("Erreur");
            digitalWrite(led6,HIGH);
            i = 20;
          }}
        if (M == 7) {
          if (J < 0 || J > 31) {
            Serial.println("Erreur");
            digitalWrite(led6,HIGH);
            i = 20;
          }}
        if (M == 8) {
          if (J < 0 || J > 31) {
            Serial.println("Erreur");
            digitalWrite(led6,HIGH);
            i = 20;
          }}
        if (M == 9) {
          if (J < 0 || J > 30) {
            Serial.println("Erreur");
            digitalWrite(led6,HIGH);
            i = 20;
          }}
        if (M == 10) {
          if (J < 0 || J > 31) {
            Serial.println("Erreur");
            digitalWrite(led6,HIGH);
            i = 20;
          }}
        if (M == 11) {
          if (J < 0 || J > 30) {
            Serial.println("Erreur");
            digitalWrite(led6,HIGH);
            i = 20;
          }}
        if (M == 12) {
          if (J < 0 || J > 31) {
            Serial.println("Erreur");
            digitalWrite(led6,HIGH);
            i = 20;
          }}
        V = V + 1;
      }}
  if (V == 6) {
      if (M < 13 && M > 0) {
        Serial.println(y);
        Serial.println("En quelle annee somme-nous ?");
       reboot();
        V = V + 1;
      }
      else {
        Serial.println("Erreur");
        digitalWrite(led6,HIGH);
        i = 20;
  }}
  if (V == 7) {
     if(Serial.available() > 0) { 
    lecteur();
      A=y;
    if(e==4){
    V=V+1;
    }}}
    if(V==8){
      Serial.println(y);
      Serial.println("Veuillez indiquer le mot de passe :");
       reboot();
      Serial.println();
      V=V+1;
      }
  if (V==9){
    if(Serial.available() > 0) {
    j = Serial.read();
    if(j == 67){
      Serial.print("C");
      V=10;
     }
    else{
      Serial.println("erreur");
      Serial.println("Mot de passe invalide");
      digitalWrite(led6,HIGH);
      V=0;
    }}}
  if(V==10){
    if(Serial.available()> 0){
      j = Serial.read();
      if(j == 69){
      Serial.print("E");
      V=11;
      }
      else{
      Serial.println("erreur");
      Serial.println("Mot de passe invalide");
        digitalWrite(led6,HIGH);
        V=0;
    }}}
    if(V==11){
    if(Serial.available()> 0){
      j = Serial.read();
      if(j == 83){
      Serial.print("S");
      V=12;
      }
      else{
      Serial.println("erreur");
      Serial.println("Mot de passe invalide");
        digitalWrite(led6,HIGH);
        V=0;
    }}}
    if(V==12){
    if(Serial.available()> 0){
      j = Serial.read();
      if(j == 73){
      Serial.print("I");
      V=13;
      }
      else{
      Serial.println("erreur");
      Serial.println("Mot de passe invalide");
        digitalWrite(led6,HIGH);
        V=0;
    }}}
  if(V==13){
    if(Serial.available()> 0){
      j = Serial.read();
      if(j == 82){
      Serial.print("R");
      V=14;
      }
      else{
      Serial.println("erreur");
      Serial.println("Mot de passe invalide");
        digitalWrite(led6,HIGH);
        V=0;
    }}}
  if(V==14){
    if(Serial.available()> 0){
      j = Serial.read();
      if(j == 79){
      Serial.print("O");
      V=15;
      }
      else{
      Serial.println("erreur");
      Serial.println("Mot de passe invalide");
        digitalWrite(led6,HIGH);
        V=0;
    }}}
  if(V==15){
    if(Serial.available()> 0){
      j = Serial.read();
      if(j == 85){
      Serial.print("U");
      V=16;
      }
      else{
      Serial.println("erreur");
      Serial.println("Mot de passe invalide");
        digitalWrite(led6,HIGH);
        V=0;
    }}}
  if(V==16){
    if(Serial.available()> 0){
      j = Serial.read();
      if(j == 69){
      Serial.print("E");
      V=17;
      }
      else{
      Serial.println("erreur");
      Serial.println("Mot de passe invalide");
        digitalWrite(led6,HIGH);
        V=0;
    }}}
  if(V==17){
    if(Serial.available()> 0){
      j = Serial.read();
      if(j == 78){
      Serial.print("N");
      V=18;
      }
      else{
      Serial.println("erreur");
      Serial.println("Mot de passe invalide");
        digitalWrite(led6,HIGH);
        V=0;
   }}}
  if(V==18){
  if(Serial.available()> 0){
    j = Serial.read();
    J = J*2;
    if(j = J){
    Serial.print(j);
    Serial.print("/");
    V=19;
    }
    else{
      Serial.println("erreur");
      Serial.println("Mot de passe invalide");
      digitalWrite(led6,HIGH);
        V=0;
}}}
  if(V==19){
  if(Serial.available()> 1){
      j = Serial.read();
      M=M*3;
      if(j = M){
        Serial.print(j);
        Serial.print("/");
    V=20;
        }
    else{
      Serial.println("erreur");
      Serial.println("Mot de passe invalide");
      digitalWrite(led6,HIGH);
        V=0;
}}}
  if(V==20){
  if(Serial.available()> 2){
      j = Serial.read();
      if(j = A){    
        Serial.println(j);
    Serial.println("Mot de passe valide");
   V=21;    
}
    else{
      Serial.println("erreur");
      Serial.println("Mot de passe invalide");
      digitalWrite(led6,HIGH);
        V=0;
    }}}
  if(V==21){
    if(Serial.available()>3){
    Serial.println();
    z=z+1;
    }}}
void MA3(){
  if (G == 1) {
    Serial.println("Mettez votre oeil sur le scanner");
    G = G + 1;
  }
  if (G == 2) {
    if (Serial.available() > 0) {
      if (Serial.read() == 49) {
        Serial.println("Valide");
        G = G + 1;
        z = z+1;
      }
      else {
        Serial.println("erreur");
        digitalWrite(led6,HIGH);
        G = G + 1;
}}}}
void MA4(){
  if (w == 1) {
    Serial.println("Veuillez mettre votre doigt sur le scanner");
    w = w + 1;
  }
  if (w == 2) {
    if (Serial.available() > 0) {
      if (Serial.read() == 49) {
        Serial.println("Valide");
        w = w + 1;
        z = z+1;
      }
      else {
        Serial.println("Erreur");
        digitalWrite(led6,HIGH);
        w = w + 1;
}}}}
void MA5() {
  if(O == 1) {
    Serial.println("Veuillez indiquer votre lettre d'agent (en majuscule) :"); //L'agent G n'existe pas
    O = O + 1;
  }
  if(O == 2) {
        while(Serial.available() >0 ) {
          n=Serial.read();
          n=n%65;
        if (n>16||n<0||n==6) {
        Serial.println("Erreur");
          digitalWrite(led6,HIGH);
          Serial.print(nom[n]);
          Serial.println(" est inconnue");
        i = 20;       
    }
  else { 
    Serial.print("Bonjour Agent ");
    Serial.println(nom[n]);
    delay(1000);
    Serial.println("Veuillez indiquer les 2 derniers numeros de votre CARD_ID (01,02,...17) parmi : "); // Le mot de passe 7 n'existe pas car il correspond à l'agent g
    delay(1000);
    O = O + 1;
  }}}
  if(O == 3) {
    while(q < 16) {
      Serial.print("Rz5P6O9TF0");
      Serial.println(card_id[q]); 
      q = q+1;
      delay(200);
    }
    reboot();
    O = O + 1;
  }
 if (O == 4) {  
   if(Serial.available() > 0) { 
    lecteur();
     if(e==2){
       O=O+1;
     }}
   if(O==5){
     if(n+1 == y){
   Serial.println("Code valide");
       z = z+1;
 }
   else {
    Serial.println("Code invalide");
     digitalWrite(led6,HIGH);
   }
     reboot();
     O = O+1;
   }}}
void niveau1(){
  if (z == 0) {
    MA1();
  }
  if (z == 1) {
    MA3();
}
if(z==2){
    Serial.println("Ouverture du coffre");
    digitalWrite(led5,HIGH);
    delay(3000);
    z=z+1;
  }}
void niveau2(){
  if (z == 0) {
    MA1();
  }
  if (z == 1) {
    MA4();
  }
    if(z==2){
    Serial.println("Ouverture du coffre");
    digitalWrite(led5,HIGH);
    delay(3000);
    z=z+1;
}}
void niveau3(){
  if (z == 0) {
    MA5();
}
  if (z == 1) {
    MA2();
  }
if(z==2){
    Serial.println("Ouverture du coffre");
  digitalWrite(led5,HIGH);
    delay(3000);
    z=z+1;
  }}
void niveau4(){
  if (z == 0) {
    MA3();
  }
  if (z == 1){
    MA4();
}
  if (z == 2) {
    MA2();
  }
  if(z==3){
    Serial.println("Ouverture du coffre");
    digitalWrite(led5,HIGH);
    delay(3000);
    z=z+1;
  }}
void niveau5(){
  if (z == 0) {
    MA1();
  }
  if (z == 1){
    MA3();
  }
  if (z == 2) {
    MA5();
}
if (z == 3) {
    MA2();
  }
  if(z==4){
    Serial.println("Ouverture du coffre");
    digitalWrite(led5,HIGH);
    delay(3000);
    z=z+1;
  }}

void loop() {
  boutonstate1 = digitalRead(BA);
  boutonstate2 = digitalRead(BB);
  boutonstate3 = digitalRead(BC);
  boutonstate4 = digitalRead(BD);


  if(boutonstate1 == HIGH && boutonstate2 == LOW && boutonstate3 == HIGH && boutonstate4 == HIGH){
    led(HIGH, LOW, LOW, LOW, LOW, LOW);
    niveau3();  //Modele 1 carte 12
    }     
        else if(boutonstate1 == LOW && boutonstate3 == LOW){
          led(LOW, LOW, LOW, LOW, LOW, LOW);
        }
        if(boutonstate1 == HIGH && boutonstate2 == LOW && boutonstate3 == HIGH && boutonstate4 == LOW){
          led(LOW, LOW, LOW, HIGH, LOW, LOW);
          niveau3(); //Modele 1 carte 11
        }
  else if(boutonstate2 == HIGH){
    led(LOW, LOW, LOW, LOW, LOW, LOW);
  }  
  if(boutonstate1 == LOW && boutonstate2 == LOW && boutonstate3 == LOW && boutonstate4 == HIGH){
          led(LOW, HIGH, LOW, LOW, LOW, LOW);
          niveau5(); //Modele 2, carte 2
        }
  else if(boutonstate1 == HIGH || boutonstate2 == HIGH || boutonstate3 == HIGH || boutonstate4 == HIGH){
    led(LOW, LOW, LOW, LOW, LOW, LOW);
  }
  if(boutonstate1 == HIGH && boutonstate2 == HIGH && boutonstate3 == HIGH && boutonstate4 == LOW){
          led(HIGH, HIGH, LOW, LOW, LOW, LOW);
          niveau1();//modele 3 carte 15
        }
  if(boutonstate1 == HIGH && boutonstate2 == HIGH && boutonstate3 == LOW && boutonstate4 == HIGH){
        led(HIGH, HIGH, LOW, LOW, LOW, LOW);
        niveau1();//Modele 3 carte 14
}
  if (boutonstate1 == LOW && boutonstate2 == HIGH && boutonstate3 == HIGH && boutonstate4 == HIGH){
    led(HIGH, HIGH, LOW, LOW, LOW, LOW);
    niveau1();//Modele 3 carte 8
       }
  if (boutonstate1 == LOW && boutonstate2 == LOW && boutonstate3 == LOW && boutonstate4 == LOW){
        led(LOW, LOW, HIGH, LOW, LOW, LOW);
     niveau5();//modele 4 carte 1 //////////////////////////////////////////////
       }
  else if (boutonstate4 == HIGH ){
    led(LOW, LOW, LOW, LOW, LOW, LOW);
  }
  if (boutonstate1 == LOW && boutonstate2 == HIGH && boutonstate3 == LOW && boutonstate4 == LOW){
    led(LOW, LOW, HIGH, LOW, LOW, LOW);
      niveau5();//Modele 4 carte 5
}
  if (boutonstate1 == HIGH && boutonstate2 == LOW && boutonstate3 == LOW && boutonstate4 == LOW){
    led(LOW, LOW, LOW, HIGH, LOW, LOW);
    niveau5();//Modele 4 carte 9
}
  if (boutonstate1 == HIGH && boutonstate2 == LOW && boutonstate3 == LOW && boutonstate4 == HIGH){
         led(HIGH, LOW, HIGH, LOW, LOW, LOW);
         niveau4();//Modele 5 carte 10
       }
  if (boutonstate1 == LOW && boutonstate2 == LOW && boutonstate3 == HIGH && boutonstate4 == LOW){
         led(LOW, HIGH, HIGH, LOW, LOW, LOW);
         niveau2();//Modele 6 carte 3
       }
  else if (boutonstate2 == HIGH && boutonstate1 == HIGH && boutonstate3 == HIGH){
    led(LOW, LOW, LOW, LOW, LOW, LOW);
  }
  if (boutonstate1 == HIGH && boutonstate2 == HIGH && boutonstate3 == LOW && boutonstate4 == LOW){
         led(LOW, HIGH, HIGH, LOW, LOW, LOW);
         niveau2();//Modele 6 carte 13
       }
  else if(boutonstate3 == HIGH){
    led(LOW, LOW, LOW, LOW, LOW, LOW);
  }
  if (boutonstate1 == HIGH && boutonstate2 == HIGH && boutonstate3 == HIGH && boutonstate4 == HIGH){
         led(LOW, HIGH, HIGH, LOW, LOW, LOW);
         niveau2();//Modele 6 carte 16
       }
  if (boutonstate1 == LOW && boutonstate2 == HIGH && boutonstate3 == LOW && boutonstate4 == HIGH){
         led(LOW, LOW, LOW, HIGH, LOW, LOW);
         niveau3();//Modele 7 carte 6
       }
  else if (boutonstate2 == LOW){
    led(LOW, LOW, LOW, LOW, LOW, LOW);
  }
  if (boutonstate1 == LOW && boutonstate2 == HIGH && boutonstate3 == HIGH && boutonstate4 == LOW){
         led(LOW, LOW, LOW, HIGH, LOW, LOW);
         niveau3();//Modele 7 carte 7
       }
  else if(boutonstate4 == HIGH){
    led(LOW, LOW, LOW, LOW, LOW, LOW);
  }
  else if(boutonstate3 == LOW){
    led(LOW, LOW, LOW, LOW, LOW, LOW);
  }
  if(boutonstate1 == LOW && boutonstate2 == LOW && boutonstate3 == HIGH && boutonstate4 == HIGH ){
         led(LOW, LOW, HIGH, HIGH, LOW, LOW);
         niveau4();//Modele 8 carte 4
       }
  else if (boutonstate3 == LOW){
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
}}  
