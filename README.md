# sangria
Raspberry Pi Zero based handheld computer

It's basically a TI's USB 1s lithium battery charger to provide both buck and boost switching functions, to simplify the power design. The LCD is connected default SPI arrangement (SPI0), and keyboard is a USB HID device to provide user input.

## Initial commit
This version has a working keyboard based on BBQ10 with RP2040 by running modified version firmware from https://github.com/solderparty/i2c_puppet

### Known Issues:
- BQ25616 needs OTG pin stobe to GND to initialized battery charge, as this pin has already pulled high, thus to boost battery voltage to 5V.
- USB traces are inverted, the simbol for RPI part has the pin number inverted, thus a PCB trace rework is required.

### What's next
- Add a USB hub chip to hook more RP2040 with B2B connector to house peripherals
- Add a nrf52840 to house Meshtastic device, with small OLED and GPS
- Replace BQ25616 and drop a DC/DC to PMID output, to prevent fry your Pi Zero, and you can hook a 4s model lithum battery pack
- Add a jog dial to keyboard chip, to implement tab/up arrow/down arrow key, as command line auto completion and history function

## How to build firmware
Refer to i2c-puppet building guide. As pico SDK is included in the repo, git pull will consume 900M traffic, you have been warned. After pulling the repo, replace files in `app` folder, and add new file in `boards` directory. cmake command is changed to:

`cmake -DPICO_BOARD=bbq10kbd_breakout -DCMAKE_BUILD_TYPE=Debug ..`
