<h1>Button Library for Arduino</h1>
<div>
  <h2>Declare button</h2>
  <p>
    <b>Button B(2, HIGH, 500);</b>
  </p>
  <h2>Parameters</h2>
  <p>
    <b>byte pin</b> - Pin number <br>
    <b>bool pushed_when</b> - Voltage when button is pushed in <br>
    <b>unsigned long time_delay = 0</b> - Time delay, Release Mode when time_delay = 0 <br>
  </p>
  <h2>pinModes are set manually </h2>
  <p>
    <b>void setup( ) {<br>
    &emsp;pinMode(2, INPUT);<br>
    }</b>
  </p>
  <h2>Button is refreshed in loop</h2>
  <p>
    <b>void loop( ) {<br>
    &emsp;B.refresh( );<br>
    }
  </p>
</div>
