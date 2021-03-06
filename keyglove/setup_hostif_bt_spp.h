// Keyglove controller source code - Special hardware setup file
// 7/17/2011 by Jeff Rowberg <jeff@rowberg.net>

/* ============================================
Controller code is placed under the MIT license
Copyright (c) 2011 Jeff Rowberg

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
===============================================
*/



#ifndef _SETUP_HOSTIF_BT_SPP_H_
#define _SETUP_HOSTIF_BT_SPP_H_

#include "iWRAP.h"
#include "setup_hostif_bt.h"

void setup_hostif_bt_spp() {
}

void update_bluetooth_serial() {
    while (Uart.available() > 0) {
        bluetooth.parse(Uart.read());
    }
    while (Serial.available() > 0) {
        uint8_t bs = Serial.read();
        //Serial.print(bs, BYTE);
        Uart.write(bs);
    }
}  

#endif // _SETUP_HOSTIF_BT_SPP_H_


