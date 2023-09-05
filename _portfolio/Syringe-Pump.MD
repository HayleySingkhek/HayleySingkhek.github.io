---
title: "DIY Syringe Pump"
excerpt: "A programmable syringe pump to produce desired volumetric flow rates from 1 uL to 10 mL per minute."
header:
  image: /assets/img/Render of Pump.png
  teaser: /assets/img/real life pump.png
gallery:
  - image_path: /assets/img/real life pump.png
   
---


# Features
  * DIY syringe pump that can be programmed to a specific volumetric flow rate to fit the needs of the user. By changing one variable in the code, the pump will be able to adjust the rate at which liquid is pushed out.
  * This pump is compatible with syringe sizes from 5 mL to 20 mL without any additional assembly
  * Flow rates available from (0.012 - 20) mL/min 
  * High accuracy of flow
  * Latching button to start and stop the pump
  * A switch to stop pump once the limit is reached
  * Flow rates can be customized by changing one global variable
  * Works with integer and decimal flow rates

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e33a7298cdc6937a6?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


# Arduino Code
HayleySingkhek.github.io/assets/img/Pump_Code_GH.ino



| Off the Shelf Items Used | 
| -------- | 
| 1 x 250 mm Lead Screw w/ 2 mm pitch and 2 mm lead | 
| 1 x 1/4" x 8 mm Flexible Coupling | 
| 2 x 200 mm Linear Rod with 8 mm diameter |
| 2 x LM8UU Linear Bearing for 8 mm diameter rod |
| 1 x 2040 Aluminum Extrusion 1' Length |
| 1 x Nema 17 Stepper Motor |
| 1 x Mean Well AC-DC Power Supply Quad Output 5V 12V 24V 4 Amp |
| 1 x Arduino Uno |
| 1 x A4988 Stepper Driver |
| 1 x Small Breadboard |
| 1 x Panel Mount Latching Push Buttons |
| 1 x Line Switch |
| 1 x RGB Common Cathode LED |


| 3D Printed Parts | 
| -------- | 
| Enclosure with Lid |
| Carriage and Mounting piece |
| 2 x End Supports |
| 1 x Motor Mounting Plate |


# Operation 
  * To operate the pump, fill the syringe with the desired liquid after plugging the machine in and change the setSpeed variable in Arduino, resulting in the desired volumetric flow rate. Use the button to start the pump and the LED to visually confirm the status of the pump. When the desired amount of liquid has been dispensed, or when the syringe is empty, the pump will automatically stop running. 


{% include gallery caption="DIY Syringe Pump" %}
