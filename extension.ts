//% weight=70 icon="\u237E" color=#74DF00 block="MyBlock"
namespace myblock {

    //% blockId=myblock_getn
    //% block="getn"
    //% shim=myblock::getn
    export function getn(): number {
    	basic.showString("sim-getn")
        return 123
    }

}


