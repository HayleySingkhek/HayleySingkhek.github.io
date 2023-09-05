---
title: "Large Format 3D Printer"
excerpt: "A 1 kg/hr pellet extruder and 1 cubic meter build envelope for printing furniture."
header:
  image: /assets/img/LF3DP-Banner-2.jpg
  teaser: /assets/img/Large-Format-3D-Printer-Thumbnail.png
gallery:
  - image_path: assets/img/Slide-3.png
  - image_path: assets/img/Slide-2.png
  - image_path: assets/img/Slide-4.png
   
---


# Features
  * DIY syringe pump that can be programmed to a specific volumetric flow rate to fit the needs of the user. This pump is compatible with syringe sizes from 5 mL to 20 mL. By changing one variable in the code, the pump will be able to adjust the rate at which liquid is pushed out.

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e33a7298cdc6937a6?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Operation 
  * To operate the pump, fill the syringe with the desired liquid after plugging the machine in and change the setSpeed variable in Arduino, resulting in the desired volumetric flow rate. Use the button to start the pump and the LED to visually confirm the status of the pump. When the desired amount of liquid has been dispensed, or when the syringe is empty, the pump will automatically stop running. 


{% include gallery caption="DIY Syringe Pump" %}
