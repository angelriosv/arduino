#include <LiquidCrystal.h>
//LCD pin to Arduino
const int pin_RS = 8; 
const int pin_EN = 9; 
const int pin_d4 = 4; 
const int pin_d5 = 5; 
const int pin_d6 = 6; 
const int pin_d7 = 7; 
const int pin_BL = 10; 
LiquidCrystal lcd( pin_RS,  pin_EN,  pin_d4,  pin_d5,  pin_d6,  pin_d7);

 



const int RELAY_PIN = 2;  // the Arduino pin, which connects to the IN pin of relay

int pinBuzzer = 12;
  int Estado = LOW;



int C_ =  261/2;
int Cs_=  277/2;
int D_ =  293/2 ;
int Ds_=  311/2;
int E_ =  329/2 ;
int F_ =  349/2 ;
int Fs_=  369/2;
int G_ =  391/2 ;
int Gs_=  415/2;
int A_ =  440/2 ;
int As_=  466/2;
int B_ =  493/2 ;


int Sil = 5;
int C =  261;
int Cs=  277;
int D =  293 ;
int Ds=  311;
int E =  329 ;
int F =  349 ;
int Fs=  369;
int G =  391 ;
int Gs=  415;
int A =  440 ;
int As=  466;
int B =  493 ;



int C2   =524;
int Cs2  =555;
int D2   =588;
int Ds2  =623;
int E2   =660;
int F2   =699;
int Fs2  =740;
int G2   =784;
int Gs2  =831;
int A_2   = 880;
int As2  =933;
int B2   =988;

int C3  =1047;
int Cs3  =555*2;
int D3   =588*2;
int Ds3  =623*2;
int E3   =660*2;
int F3   =699*2;
int Fs3  =740*2;
int G3   =784*2;
int Gs3  =831*2;
int A_3   = 880*2;
int As3  =933*2;
int B3   =988*2;



int tempo = 104*2;
int negra=60000/tempo;
int semi = negra/4;

//int semi =86;
int corch = 2*semi;
//int negra = corch*2;
int np = corch*3;

int blanca = negra*2;
int redonda = blanca*2;
int rep = 3*negra;
int bnp = 3*negra+3*corch;

int retardo = 100;

void nota(int nota, int duracion){
  tone(pinBuzzer,nota, duracion);
  delay(duracion);
  noTone(pinBuzzer);
  delay(duracion);
}


byte corchea[8] = {
  0b00100,
  0b00110,
  0b00101,
  0b00101,
  0b00100,
  0b01100,
  0b11100,
  0b01000

};

byte corazonI[8] = {
0b01100,
  0b10010,
  0b10001,
  0b10000,
  0b01000,
  0b00100,
  0b00010,
  0b00001

};

byte corazonD[8] = {
 0b00110,
  0b01001,
  0b10001,
  0b00001,
  0b00010,
  0b00100,
  0b01000,
  0b10000
};


void setup() {
 // initialize digital pin as an output.

 lcd.begin(16, 2);
 
 lcd.setCursor(0,0);
 lcd.print("  Rosas         ");
 lcd.setCursor(0,1);
 lcd.print(" LODVG          ");

lcd.createChar(7, corazonI);
 lcd.createChar(8, corazonD);
 

  pinMode(RELAY_PIN, Estado);


  
 



  delay(1900);

}

void loop() {



  // bemoles
  // A B E
  //
  // sostenidos
  // G A D
  //  // 1
  
 
textopan("Por eso esperaba","              :(");
PorEsoEsperaba();

textopan("con la carita   ","empapada        ");
ConLacaritaEmpapada();

textopan("que llegaras con","rosas           ");
QueLlegarasConRosas();

textopan("con mil rosas   ","para mi         ");
ConMilRosasParaMi();

textopan("Porque ya sabes ","que me encantan ");
PorqueYaSabes();

textopan("Esas cosas      ","                ");
  lcd.setCursor(14, 1); lcd.write(byte(7)); 
  lcd.setCursor(15, 1); lcd.write(byte(8)); 


EsasCosas();

textopan("Que no importa  ","si es muy tonto ");
QueNOImportaSiesMuyTonto();

textopan("Soy asi       :P","                ");
SoyAsi();

textopan("Y aun me parece ","mentira         ");
YaunMePareceMentira();

textopan("que se escape mi","vida...         ");
QueSeEscapeMivida();

textopan("imaginando que  ","vuelves...      ");
ImaginandoQueVuelves();

textopan("a pasarte por   ","aqui...         ");
APasartePorAqui();    


textopan("Donde los       ","viernes         ");
DondeLosViernes();

textopan("cada tarde, como","siempre         ");
CadaTardeComoSiempre();

textopan("la esperanza    ","dice 'quieta'   ");
LaEsperanzaDiceQuieta();


textopan("'hoy quizas si' ","              :)");

HoyQuizasSi();

//DondeLosViernes();
 delay(1000);


}
//C D F G


void PorEsoEsperaba(){
  
    nota(Cs2,  corch);  

// 19
                        suenaRele();    
    nota(A_2,  corch);  
    nota(A_2,  corch);  
                        suenaRele();        
    nota(A_2,  corch);  
   
    nota(A_2,  negra); 
                        suenaRele();    
    nota(A_2,  corch);  


}
void ConLacaritaEmpapada(){ 
                        suenaRele();    
    nota(Fs2,  corch);  
    nota(Gs2,  corch);      
                        suenaRele();        
    // 20
    nota(A_2,  corch);  
    nota(A_2,  corch);  
                        suenaRele();        
    nota(A_2,  corch);  
    nota(Gs2,  corch);  
    
    
    nota(A_2,  corch);  
                        suenaRele();            
    nota(A_2,  corch);  
                        suenaRele();        
}
void QueLlegarasConRosas(){    
    nota(A_2,  corch);  
    nota(B2,  corch);  
    
    // 21
                            suenaRele();        
    nota(Gs2,  corch);  
    nota(Gs2,  corch);  
                            suenaRele();        
    nota(Gs2,  corch);  
    nota(Gs2,  negra);  
                            suenaRele();        
    nota(Gs2,  corch);
                        suenaRele();        

}
void ConMilRosasParaMi(){
    nota(Gs2,  corch);  
    nota(B2,  corch);  
    // __ 25
                        suenaRele();        
    nota(B2,  negra);  
                        suenaRele();                
    nota(A_2,  negra);  

    nota(Gs2,  corch);  
    
                        suenaRele();            
    nota(Fs2,  corch );  
                            suenaRele();        
    nota(Sil,  corch );  

    nota(E2,  corch );  
                          suenaRele();        
    nota(Sil,  corch );  


}
// 23
void PorqueYaSabes(){

    nota(Cs2,  corch);  
                              suenaRele();        
    nota(E2,  corch);      
    nota(Cs2,  corch);  
    
    
    
    nota(E2,  corch);  
                                  suenaRele();    
    nota(E2,  corch);  
                                  suenaRele();    
    nota(Cs2,  corch);  
    nota(D2,  corch);  
                              suenaRele();    

// 29
    nota(E2,  corch);  
    nota(E2,  corch);  
                                  suenaRele();    
}
void EsasCosas(){
    nota(E2,  corch);  
    nota(E2,  corch);  
    nota(E2,  corch);  
                              suenaRele();       
    nota(E2,  corch);
                              suenaRele();   
}
void QueNOImportaSiesMuyTonto(){     
   
    nota(E2,  corch);     
    nota(Fs2,  corch);  
                              suenaRele();   
// 30
   nota(E2,  corch);     
   nota(D2,  corch);  
                                 suenaRele();      
   nota(D2,  corch);  
   nota(D2,  corch);  
   nota(D2,  corch);  
                              suenaRele();      
   nota(D2,  corch);  
                              suenaRele();         
}
void SoyAsi(){   
   nota(D2,  corch);     
// 31 
  nota(Fs2,  corch);  
                                suenaRele();         
  nota(Sil,  corch);  
    
  nota(E2, corch);  
                                suenaRele();         
  nota(Sil,  corch);  
    nota(Sil,  corch);  
    nota(Sil,  corch);  
                                suenaRele();             
    nota(Sil,  corch);  
                                suenaRele();             

}



void YaunMePareceMentira(){ 
  
  
  nota(Fs2,  corch);  
  nota(Gs2,  corch);  
                                  suenaRele();         

// 28
    nota(A_2,  corch);  
    nota(A_2,  corch);  
                                    suenaRele();         
    nota(A_2,  corch);  
   
    nota(Gs2,  corch); 
    nota(A_2,  corch); 
                                suenaRele();         
    nota(A_2,  corch);  
                                    suenaRele();         
}


void QueSeEscapeMivida(){
    nota(Fs2,  corch);  
    nota(Gs2,  corch);      
                                suenaRele();             
    // 33
    nota(A_2,  corch);  
    nota(A_2,  corch);  
                                suenaRele();             
    nota(Gs2,  corch);  
  
    nota(A_2,  negra);
                                suenaRele();             
    nota(A_2,  corch);  
                                suenaRele();         
}

void ImaginandoQueVuelves(){    
    nota(A_2,  corch);  
    nota(B2,  corch);  
                                suenaRele();             
    // 34
    nota(Gs2,  corch);  
    nota(Gs2,  corch);  
                                suenaRele();             
    nota(Gs2,  corch);  
    nota(Gs2,  negra);  
                                suenaRele();             
    nota(Gs2,  corch);  
                                suenaRele();             
}
void APasartePorAqui(){    
    nota(Gs2,  corch);  
    nota(B2,  corch);  
                                suenaRele();             
    // __ 35
    nota(B2,  negra);  
                                suenaRele();             
    nota(A_2,  negra);  
    nota(Gs2,  corch);  
                                suenaRele();             
    nota(Fs2,  corch);  
                                suenaRele();         
    nota(Sil,  corch);  
    nota(E2,  corch );  
}
// 36


void DondeLosViernes(){
                                suenaRele();              
    nota(Sil,  corch); 
    nota(Cs2,  corch);  
                                suenaRele();     
    nota(E2,  corch);  
    nota(Cs2,  corch);              
    nota(E2,  corch);  
                                suenaRele();             
    nota(E2,  corch);  
                                suenaRele();         
}

void CadaTardeComoSiempre(){

    nota(Cs2,  corch);  
    nota(D2,  corch);  
                                suenaRele();             

// 37

    nota(E2,  corch);  
    nota(E2,  corch);  
                                suenaRele();                 
    nota(E2,  corch); 

    nota(E2,  corch);  
    nota(E2,  corch);  
   
                                   suenaRele();             
    nota(E2,  corch); 
                                    suenaRele();             
}

void LaEsperanzaDiceQuieta(){
    nota(E2,  corch); 
    nota(Fs2,  corch);  
                                    suenaRele();             
    nota(E2,  corch);  
  
    nota(D2,  corch);  
    nota(D2,  corch);  
    nota(D2,  corch);  
  
// 38
   nota(D2,  corch);  
}
void   HoyQuizasSi(){   
   nota(A,  corch);  


   nota(A,  corch);  
   
   nota(B,negra);  
   nota(A,  negra);  

   
    nota(Sil,  corch);  
   
}

void textopan(String S1,String S2){
  
 lcd.setCursor(0,0);
 lcd.print(S1);
 lcd.setCursor(0,1);
 lcd.print(S2);

  
  }

  void textoAbajo(String S2){
 
 lcd.setCursor(0,1);
 lcd.print(S2);

  
  }
  void ImprimeCorcheaAbajo(int i){

  lcd.setCursor( i, 1); //put it on line 3, column 19.
  lcd.write(byte(7)); //print our custom char backslash

  
  }


  void  suenaRele(){
  
  
  if ( Estado == LOW ){  
    Estado = HIGH;
    
  }  
  else {
    Estado = LOW;
  }
  pinMode(RELAY_PIN, Estado);

  
  }
