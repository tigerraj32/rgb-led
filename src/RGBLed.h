#ifndef RgbLed_h
    #define RgbLed_h

    #include "Arduino.h"

    struct Color {
  	const uint8_t red;
  	const uint8_t green;
  	const uint8_t blue;

	Color(uint8_t red, uint8_t green, uint8_t blue);
    };

    enum Type {
	CATHODE,
	ANODE
    };

    class RGBLed {
    	public:
            RGBLed(Type type, uint8_t redPin, uint8_t greenPin, uint8_t bluePin);

	    void alternate(Color colors[], int interval, int times);
	    void alternate(Color colors[], int interval);
	    void blink(Color color, int interval, int times);
	    void blink(Color color, int interval);
	    void on(Color color) const;
	    void setup() const;
	    void off();

    	private:
            const uint8_t RED;
            const uint8_t GREEN;
            const uint8_t BLUE;
            const uint8_t OFFSET;
    };

#endif
