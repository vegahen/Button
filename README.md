<h1>Button Library for Arduino</h1>
<div>
  <h5>Declare button</h5>
  <p>
    Button B(2, HIGH, 500);
  </p>
  <h5>Parameters</h5>
  <p>
    <b>byte pin</b> - Pin number <br>
    <b>bool pushed_when</b> - Voltage when button is pushed in <br>
    <b>unsigned long time_delay = 0</b> - Time delay, Release Mode when time_delay = 0 <br>
  </p>
  <h5>pinModes are set manually </h5>
  <p>
    <b>void setup(){<br>
    &nbsp;pinMode(2, INPUT);<br>
    }</b>
  </p>
</div>
