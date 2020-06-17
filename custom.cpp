#include "pxt.h"

namespace custom {


//% shim=custom::fib
int fib(int n) {
    uBit.serial.send("fib called\r\n");
	return 131;
}

//% shim=custom::initnums
void initnums(int inputs, RefCollection &hidden, int outputs) {
    uBit.serial.send("initnums: [");
    int len = hidden.length();
    for (int i=0; i<len; i++) {
   	    uBit.serial.send( (i==0) ? "[" : ", " );
	    TNumber tn = hidden.getAt(i);
		float f = toFloat(tn);
		ManagedString str(f);
	    uBit.serial.send(str);
    }
    uBit.serial.send("]\r\n");
}


//% shim=custom::foo
void foo(StringData* s, int f, int e) {
    uBit.serial.send("foo called\r\n");
    ManagedString str(s);
    uBit.serial.send(str);
    uBit.serial.send("foo finished\r\n");
}


}
