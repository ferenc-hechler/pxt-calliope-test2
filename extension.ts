//% weight=70 icon="\u237E" color=#74DF00 block="MyBlock"
namespace myblock {

    //% blockId=myblock_getn
    //% block="getn"
    export function getn(): number {
    	basic.showString("sim:getn")
        return 123
    }

    //% blockId=myblock_setstr
    //% block="setstr|%str"
    export function setstr(str: string): void {
    	basic.showString("sim:setstr")
    	basic.showString(str)
    }
}


