
Diagram.json:



{
"version": 1,
"author": "Anonymous maker", "editor": "wokwi",
"parts": [
{ "type": "wokwi-esp32-devkit-v1", "id": "esp", "top": 26.98, "left": -
75.23, "attrs": {} },
{
"type": "wokwi-led",
"id": "led1",
"top": -31.31,
"left": 61.33,
"attrs": { "color": "red" }
},
 
{
"type": "wokwi-led",
"id": "led2",
"top": -33.55,
"left": 105.39,
"attrs": { "color": "yellow" }
},
{
"type": "wokwi-led",
"id": "led3",
"top": -32.44,
"left": 159.91,
"attrs": { "color": "limegreen" }
},
{
"type": "wokwi-photoresistor-sensor", "id": "ldr1",
"top": -57.28,
"left": -126.89,
"attrs": {}
},
{
"type": "wokwi-resistor", "id": "r1",
"top": 111.97,
"left": 40.92,
"attrs": { "value": "1000" }
},
{
"type": "wokwi-resistor", "id": "r2",
"top": 158.38,
"left": 151.48,
"attrs": { "value": "1000" }
},
{
"type": "wokwi-resistor", "id": "r3",
"top": 142.67,
"left": 95.25,
"attrs": { "value": "1000" }
},
{
"type": "wokwi-pir-motion-sensor", "id": "pir1",
"top": -53.6,
"left": -208.98,
"attrs": {}
 
}
],
"connections": [
[ "esp:TX0", "$serialMonitor:RX", "", [] ],
[ "esp:RX0", "$serialMonitor:TX", "", [] ],
[ "led1:C", "esp:GND.1", "black", [ "v118.68", "h-2.37" ] ],
[ "led2:C", "esp:GND.1", "black", [ "v120.92", "h-100.49" ] ],
[ "led3:C", "esp:GND.1", "black", [ "v118.69", "h-152.77" ] ],
[ "esp:D32", "ldr1:AO", "green", [ "h-15.43", "v-84.75", "h131.44", "v-26.88", "h1.02" ] ],

[	"esp:D4", "ldr1:DO", "orange", [ "h31.66", "v-168.39", "h-10.93" ] ],
[	"ldr1:GND", "esp:GND.1", "black", [ "h4.95", "v206.93" ] ],
[	"esp:3V3", "ldr1:VCC", "blue", [ "v2.96", "h37.63", "v-232.25" ] ],
[	"led1:A", "r1:2", "green", [ "v48.34", "h15.15" ] ],
[	"led2:A", "r3:2", "green", [ "v68.3", "h19.52", "v-2.53" ] ],
[	"led3:A", "r2:2", "green", [ "v91.39", "h24.62" ] ],
[	"esp:D5", "r1:1", "green", [ "h0" ] ],
[	"esp:D2", "r3:1", "green", [ "h0" ] ],
[	"esp:D15", "r2:1", "green", [ "h0" ] ],
[	"pir1:GND", "esp:GND.2", "black", [ "v145.15", "h12.3" ] ],
[	"esp:3V3", "pir1:VCC", "green", [ "v17.38", "h36.08", "v29.33", "h-
228.94" ] ],
[ "esp:D12", "pir1:OUT", "green", [ "h-92.27", "v-5.31" ] ]
],
"dependencies": {}
}
