<h1>Button Library for Arduino</h1>

<h5>Declare button</h5>
<div>
  Button B(2, HIGH, 500);
</div>

<h5>Parameters</h5>
<div>
  byte pin <br> Pin number <br>
  bool pushed_when <br> Voltage when button is pushed in <br>
  unsigned long time_delay = 0 <br> Time delay, Release Mode when time_delay = 0 <br>
</div>

<h5>pinModes are set manually </h5>
<div>
  void setup(){<br>
  <ensp> pinMode(2, INPUT);<br>
  }
</div>
