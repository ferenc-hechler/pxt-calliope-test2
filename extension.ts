//% weight=70 icon="\u237E" color=#74DF00 block="MyBlock"
namespace myblock {

    //% blockId=myblock_getn
    //% block="getn"
    //% shim=myblock::getn
    export function getn(): number {
    	basic.showString("sim-getn")
        return 123
    }

    //% blockId=myblock_initjson
    //% block="Json Init|string %json"
    //% shim=myblock::initjson
    export function initjson(json: string): void {
    	basic.showString("sim:initjson")
    }
}


