
#include <Encoder.h>
#include <EncoderWrapper.h>

EncoderWrapper w = EncoderWrapper(3, 4);

void setup(void)
{
  Serial.begin(115200);
  
}

void loop(void)
{
  Serial.println("-----------------------------");
  Serial.println(w.getPosition(), HEX);
  Serial.println(w._encoder.read(), HEX);
  delay(100);
}

