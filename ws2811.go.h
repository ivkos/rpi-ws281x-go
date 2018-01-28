// Copyright 2018 Jacques Supcik / HEIA-FR
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// This header file is a wrapper for the rpi_ws281x library:
// https://github.com/jgarff/rpi_ws281x
 

#pragma once
#ifndef WS2811_GO_H_
#define WS2811_GO_H_

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <ws2811.h>

// ws2811_leds returns a reference (address) of the LEDs array of a channel.
extern ws2811_led_t* ws2811_leds(const ws2811_t* ws2811, int chan);

// ws2811_leds returns a reference (address) of the LEDs array of a channel.
extern int ws2811_leds_count(const ws2811_t* ws2811, int chan);

#endif // WS2811_GO_H_