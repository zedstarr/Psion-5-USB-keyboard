# Psion-5-USB-keyboard
All Credit to RasmusB and others who have done this in the past...

Based on https://github.com/RasmusB/USB-Keyboard-Adapter and https://www.tindie.com/products/rasmusb/usb-keyboard-adapter-for-psion-series-5-keyboards/

I've hacked in handling of the "Fn" key and added another matrix of the special keys as printed on the front edge of the keycaps of Psion's tiny 53-key keyboard. I've also added a real nasty toggling of the LED on the adapter board to mimic CapsLock(ish). It appears there's no easy way to get the Arduino (Leonardo family) to receive the keyboard's LED status yet over USB... (Like there is in the Teensy (and other) family). There are some patches to do this for Leonardo, but I didn't get that far.

Photos/video at https://zedstarr.com/2025/02/25/psion-series-5-usb-keyboard/

