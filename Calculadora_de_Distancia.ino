const float gravity = 9.86;   // M/s²
const double angle = 0.785398163;    // Radians
const float velocity = 10; // M/s
const float initialHeight = 2.5; // Meters

//////////////////////////////////////////////////////////////////////////////////////////////////

float distance; // Meters
float part1, part2, part3, part4, part5;

void setup() {
    Serial.begin(9600);
    part1 = (velocity * cos(angle)) / gravity;
    part2 = velocity * sin(angle);
    part3 = sq(velocity * sin(angle));
    part4 = 2 * gravity * initialHeight;
    part5 = part2 + sqrt(part3 + part4);

    distance = part1 * part5;
    
    
    Serial.print("Inicial Velocity: ");
    Serial.print(velocity);
    Serial.println(" Meters/second.");
    
    Serial.print("Initial Height: ");
    Serial.print(initialHeight);
    Serial.println(" Meters");
    
    
    Serial.print("Parabola starting angle: ");
    Serial.print(angle);
    Serial.println(" Radians");
    
    Serial.println("Air Resistance/Drag: Null");
    
    Serial.println("\n -------------------------------------------------------------------- \n");
    
    Serial.print("Total horizontal distance: ");
    Serial.print(distance);
    Serial.println(" Meters");
    
}

void loop() {
  // put your main code here, to run repeatedly:

}
