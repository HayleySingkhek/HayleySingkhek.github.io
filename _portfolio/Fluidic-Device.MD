---
title: "Microfluidic Device using SLA Printed Mold"
excerpt: "To convey the high-resolution SLA can achieve, a microfluidic device mold was designed, printed, and tested."
header:
  image: /assets/img/inprocess up close picture.jpg
  teaser: /assets/img/horizontal for teaser.jpg
gallery:
  - image_path: /assets/img/as first fluid is going in .jpg
  - image_path: /assets/img/just the device.jpg
  - image_path: /assets/img/inprocess up close picture.jpg
---


# Description
   Microfluidic devices are systems that process small amounts of fluids with features whose dimensions are up to hundreds of micrometers. These devices are valuable because of the minimized input fluid volume needed, the ability to run multiple tests simultaneously, and transportability. The device having channels with a small feature size allows for less fluid to flow through, decreasing the amount of reagent needed to run a single test thereby decreasing the cost. Due to the overall small size of the device, maintaining sterility, transportation, and using multiple at the same time are all advantages that increase the efficiency of using these devices in real-life scenarios. Some direct applications of these devices are performing small-scale reactions and separations and testing for present compounds. Examples would be at-home COVID-19 tests, drug administration devices, and devices used for cell analysis. 

# Design 
   The flow that goes through these channels is laminar, meaning the viscous forces are dominant and particles follow a path, making the flow organized. Because of this flow type, the design must implement a way for the inputted fluids to mix and become a homogenous mixture after going through the device. Because of this, multiple studies have been conducted to test which shapes, obstacle types, and mixing methods result in the best product. After going through the results of these experiments, the device was designed with two of the methods implemented, one method in increased contact time and the other introducing an obstacle to further the mixing. The chosen obstacle was placed at the beginning and end of the path and the channel of repeated zigzags was in between. The idea behind this design is similar to the analogy of using a strainer to separate a mixture before passing it through a sieve to retrieve any smaller particles that seep through the strainer. The extra obstacles at the end of the channel were a precaution in case any large separations were still present. The dimensions of the device were controlled by the laser spot size of the printer, minimum resolution, and the aspect ratio that ensures the durability of printed parts. The resolution in any direction for the SLA printer used is 25 micrometers and the laser spot size is 85 micrometers. These specifications limited the minimum width of the channels to 25 micrometers and the obstacles to 85 micrometers. 

# Why use Vat Photopolymerization?
  Vat polymerization is one of the best-suited additive manufacturing technologies to create molds for these devices because of their high resolution and smooth finished surface. The high resolution allows for the micrometer channels to be printed without issue and the smooth finish assures the final product will be flat, smooth, and able to stick to another surface fully to prevent leakage. While this technology is advantageous for this use, there are still drawbacks that come with using it including cytotoxicity and replication issues due to residual uncured monomer and catalyst sequestion. The uncured resin is unable to be removed without scratching or harming the device leading to cytotoxic prints. An additional issue is the inhibition of crosslinking between elastomers, creating the replication issue. To fix both of these issues, parylene has been introduced as a solution. A nanometer-thick film is applied to the printed device creating a hydrophobic barrier that keeps water, gases, and small particles from permeation in devices. Parylene is approved by the FDA as safe for human implantation making it cytocompatible and available for being used as a mold for PDMS devices. 

# From Resin Mold to Microfluidic Device
  * Design and print the mold using a resin printer
  * After printing, wash the part with isopropyl alcohol until clean then cure it with UV
  * Upon curing, coat the mold with parylene 
  * Finally, bond the PDMS device to a glass coverslip using a plasma cleaner

# Cad Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6ee9a7c778024dcbd7?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Watch [HERE](https://youtu.be/P7nD8Pwwd_w) to see the test run!

{% include gallery caption="Microfluidic Device Testing" %}
