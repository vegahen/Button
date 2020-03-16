<h1>Button Library for Arduino</h1>

<h5>Declare button</h5>
Button B(2, HIGH, 500);

<h5>Parameters</h5>
byte pin			\t\t\tPin number\n
bool pushed_when		\t\tVoltage when button is pushed in\n
unsigned long time_delay = 0	\tTime delay, Release Mode when time_delay = 0\n

<h5>pinModes are set manually </h5>
void setup(){\n
  pinMode(2, INPUT);\n
}