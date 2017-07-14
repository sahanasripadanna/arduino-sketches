void setup() {
  //set up pin for each note
  pinMode(13, OUTPUT); //first note "twinkle"
  pinMode(12, OUTPUT); //second note "twinkle"
  pinMode(7, OUTPUT); //third note "little"
  pinMode(4, OUTPUT); //fourth note "star"
}

void loop() {

  //array for the pattern
  //which pins(LEDs) turn on in sequence
  int pattern [] = {13, 12, 7, 4, 13, 4, 7, 12};

  for (int count = 0; count < 8; count++){
   //pattern[count] gives me the note in pattern
   //i counted to by now
    digitalWrite(pattern[count], HIGH);   
    delay(50);              
    digitalWrite(pattern[count], LOW);
    delay(50); 
  }
  
}

