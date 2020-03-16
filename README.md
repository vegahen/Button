<h1>Button Library for Arduino</h1>

<h5>Declare button</h5>
Button B(2, HIGH, 500);

<h5>Paramters</h5>
byte pin			Pin number
bool pushed_when		Voltage when button is pushed in
unsigned long time_delay = 0	Time delay, Release Mode when time_delay = 0

<h5>pinModes are set manually </h5>
void setup(){
  pinMode(2, INPUT);
}