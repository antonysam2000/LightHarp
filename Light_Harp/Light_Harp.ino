#define NOTE_C3 131
#define NOTE_CS3 139
#define NOTE_D3 147
#define NOTE_DS3 156
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_GS3 208
#define NOTE_A3 220
#define NOTE_AS3 233
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_CS4 277
#define NOTE_D4 294
#define NOTE_DS4 311
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494
#define NOTE_C5 523

int r0 = 0;      //value of select pin at the 4051 (s0)
int r1 = 0;      //value of select pin at the 4051 (s1)
int r2 = 0;      //value of select pin at the 4051 (s2)
int count = 0;   //which y pin we are selecting 

void setup()
{ 
  Serial.begin(9600);
  pinMode(2, OUTPUT);    // s0
  pinMode(3, OUTPUT);    // s1
  pinMode(4, OUTPUT);    // s2
}

void loop () 
{ 
  for (count=0; count<=7; count++) 
  {
    r0 = bitRead(count,0);    
    r1 = bitRead(count,1);      
    r2 = bitRead(count,2);     

    digitalWrite(2, r0);
    digitalWrite(3, r1);
    digitalWrite(4, r2);
    
    
    if(count == 0)
    {
      
      
      while(analogRead(0) < analogRead(4))
      {
        tone(8, NOTE_C3);
            Serial.println(analogRead(4));
      }

      while(analogRead(1) < analogRead(4))
      {
        tone(8, NOTE_GS3);    
        Serial.println(analogRead(4));
      }
      
      while(analogRead(2) < analogRead(4))
      {
        tone(8, NOTE_E4);
            Serial.println(analogRead(4));
      }
    }
     
    if(count == 1)
    {
      while(analogRead(0) < analogRead(4))
      {
        tone(8, NOTE_CS3);

      }
      
      while(analogRead(1) < analogRead(4))
      {
        tone(8, NOTE_A3);

      }

      while(analogRead(2) < analogRead(4))
      {
        tone(8, NOTE_F4);
      }
    }

    if(count == 2)
    {
      while(analogRead(0) < analogRead(4))
      {
        tone(8, NOTE_DS3);
      }
      
      while(analogRead(1) < analogRead(4))
      {
        tone(8, NOTE_AS3);
      }
      
      while(analogRead(2) < analogRead(4))
      {
        tone(8, NOTE_FS4);
      }
    }
    
    noTone(8);
    
    if(count == 3)
    {
      while(analogRead(0) < analogRead(4))
      {
        tone(8, NOTE_D3);
      }
      
      while(analogRead(1) < analogRead(4))
      {
        tone(8, NOTE_B3);
      }
      
      while(analogRead(2) < analogRead(4))
      {
        tone(8, NOTE_G4);
      }
    }
    
    noTone(8);
    
    if(count == 4)
    {
      while(analogRead(0) < analogRead(4))
      {
        tone(8, NOTE_E3);
      }
      
      while(analogRead(1) < analogRead(4))
      {
        tone(8, NOTE_C4);
      }
      
      while(analogRead(2) < analogRead(4))
      {
        tone(8, NOTE_GS4);
      }
    }

    if(count == 5)
    {
      while(analogRead(0) < analogRead(4))
      {
        tone(8, NOTE_F3);
      }
      
      while(analogRead(1) < analogRead(4))
      {
        tone(8, NOTE_CS4);
      }
      
      while(analogRead(2) < analogRead(4))
      {
        tone(8, NOTE_A4);
      }
    }
    
    if(count == 6)
    {
      while(analogRead(0) < analogRead(4))
      {
        tone(8, NOTE_FS3);
      }
      
      while(analogRead(1) < analogRead(4))
      {
        tone(8, NOTE_D4);
      }
      
      while(analogRead(2) < analogRead(4))
      {
        tone(8, NOTE_AS4);
      }
    }
    
    if(count == 7)
    {
      while(analogRead(0) < analogRead(4))
      {
        tone(8, NOTE_G3);
      }
      
      while(analogRead(1) < analogRead(4))
      {
        tone(8, NOTE_DS4);
      }
      
      while(analogRead(2) < analogRead(4))
      {
        tone(8, NOTE_B4);
      } 
      
      while(analogRead(3) < analogRead(4))
      {
        tone(8, NOTE_C5);
      }
    }

     noTone(8);

  } 
}
