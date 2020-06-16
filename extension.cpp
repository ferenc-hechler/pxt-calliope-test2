#include "pxt.h"

namespace myblock {

//% blockId=myblock_getn
//% block="get |%n"
//% shim=myblock::getn
int getn() {
	return 432;
}

//% blockId=myblock_initjson
//% block="Json Init|string %json"
//% shim=myblock::initjson
void fcnnfromjson(String json) {

	const char *jsonStr = PXT_STRING_DATA(json);
    uBit.serial.send(jsonStr);
}


}
