void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  T();
  O();
  N();
  Y();
}

void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

void T()
{
  dash();
}

void O()
{
  for(int i=0; i<3; i++)
  {
    dash();
  }
}

void N()
{
  dash();
  dot();
}

void Y()
{
  dash();
  dot();
  dash();
  dash();
}



    
