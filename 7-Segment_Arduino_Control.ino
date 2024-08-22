int outputValue;                   // Initialize a global variable 'outputValue' to store result values

void setup() {

  Serial.begin(9600);              // Begin communication with serial monitor at 9600 baud rate

  // Set pins 3 to 9 as outputs to control different segments of a display or LEDs                
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  pinMode(2, INPUT_PULLUP);        // Set pin 2 as an input with an internal pull-up resistor enabled
}

void loop(){

  // Perform an addition and store the result in 'outputValue'
  outputValue = add(2, 1);
  showSegments();                  // Update the 7-segment display to visually show the value of 'outputValue'
  Serial.println(outputValue);             // Output the result to the serial monitor
  delay(1000);                     // Pause for 1000 milliseconds or 1 second

  // Perform a subtraction and store the result in 'outputValue'
  outputValue = sub(4, 0);
  showSegments();
  Serial.println(outputValue);
  delay(1000);

  // Perform a multiplication and store the result in 'outputValue'
  outputValue = mul(2, 3);
  showSegments();
  Serial.println(outputValue);
  delay(1000);

  // Perform a division and store the result in 'outputValue'
  outputValue = divis(16, 2);
  showSegments();
  Serial.println(outputValue);
  delay(1000);
}

// Function to add two numbers and return the result
int add(int a, int b){
  int addresult = a+b;
  return addresult;
}

// Function to subtract 'b' from 'a' and return the result
int sub(int a, int b){
  int subresult = a-b;
  return subresult;
}

// Function to multiply two numbers and return the result
int mul(int a, int b){
  int mulresult = a*b;
  return mulresult;
}

// Function to divide 'a' by 'b' and return the result
int divis(int a, int b){
  
  int divresult = a/b;
  return divresult;
}

// Function to visually display the current value of 'outputValue' using LEDs or Segments
void showSegments(){

   // Depending on the value of 'outputValue', control which LEDs or Segments light up
   switch (outputValue){
    

    case 0:
    // Turn on required LEDs for case '0'
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);

    delay(1000);                   // Hold the lights for 1000 milliseconds or 1 second
    
    // Then, turn them all off
    digitalWrite(3, LOW);          
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    break;
    
    case 1:
    // Light up specific LEDs for case '1'
    digitalWrite(4, HIGH); 
    digitalWrite(5, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    break;
    
    case 2:
    // Light up specific LEDs for case '2'
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    break;
    
    case 3:
    // Light up specific LEDs for case '3'
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    break;
    
    case 4:
    // Light up specific LEDs for case '4'
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    break;
    
    case 5:
    // Light up specific LEDs for case '5'
    digitalWrite(3, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    break;
    
    case 6:
    // Light up specific LEDs for case '6'
    digitalWrite(3, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    break;
    
    case 7:
    // Light up specific LEDs for case '7'
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    break;
    
    case 8:
    // Light up specific LEDs for case '8'
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    break;
    
    case 9:
    // Light up specific LEDs for case '9'
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    break;
  }
}