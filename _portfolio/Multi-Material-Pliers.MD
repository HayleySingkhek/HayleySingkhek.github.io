---
title: "Multi-Material Pliers"
excerpt: "Pliers designed for dual extrusion, a method of filament printing that allows more than one material to be made into a single print."
header:
  image: /assets/img/horizontal pic.jpeg
  teaser: /assets/img/horizontal pic.jpeg
gallery:
  - image_path: /assets/img/vertical pic.jpeg
  - image_path: /assets/img/clinging between tpu and pla.jpeg
---


# Project Description
For the project, the main idea emphasized is the idea of printing in place. This type of printing is very straightforward as it means that following the completion of printing, no further assembly is required. Combining this design aspect with dual extrusion filament printing broadens the possibilities for what can be printed. Utilizing these design choices allows for a final product to be made out of multiple materials for the duration of a single print. The result of this is the newfound freedom for beginner 3D printers, the freedom to create a single part that has the ability to bend while also having some sections be rigid. Applications of this unique and beneficial characteristic include creating parts that are collapsible and unfoldable, using a water-soluble material to create the supports for the part for easy removal, or parts that use a hinge-like structure for an otherwise rigid part. When printing a part that is able to collapse or fold, it is possible to print the part in its smallest form so that it fits on the build plate, but after the print is over, it is able to unfold to a size that is much larger than the build plate. This increases the amount of prints available to each printer, as a limiting factor to the size of printing is the size of one’s print bed. An example of this is a collapsible sword, similar to a kid's toy lightsaber that is able to extrude with the flick of a wrist. While the sword itself, when extended, will end up over 800 mm when it is printed at just 125 mm. 
  ** [Collaspibie Sword][sword info]

  [sword info]: https://www.thingiverse.com/thing:3639693


# How to Choose a Material for Dual Extrusion?
When choosing what materials to dual extrude with, one of the main factors that determine whether the two plastics will adhere to each other is if their surface energies are similar. Other factors that come into play include whether the two materials have similar intermolecular forces and compatible mechanical properties. The surface energy of a material is the amount of energy required to maintain the surface of said material. As a result, some of the more popular pairings for printing would be ABS with nylon, polyester, or polycarbonate. The use of PVA as a material also targets this determining factor as its surface energy is low, therefore making it a lesser choice in adhesion to most popular materials, making it a great candidate for being used as the support material.


# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e2134fbed952965ab?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


# Design 
The design chosen for these pliers centered around making the print suitable for being printed in place along with being single extruded by two printers with the two filaments for people who do not have a dual extrusion option. While the design for the pliers seems simple, through the process of iterations, there are multiple smaller details that need to be taken into account, especially since the model is made up of separate parts in different materials, in this case, PLA and 97TPU. One of the major issues when printing this design was the need for a component that would keep the handles and clippers attached to the “spring”. Since pressure would be put on the spring by the handles, a formation would need to be made such that the pressure would not make the handles fall off. The other main issue was the “spring” or the part of the plies that allowed for movement in the handles and clippers. This section was made out of an elastic material, in this case, 95TPU, and while the material is flexible, there are ways to work with and against its flexibility. Through iterations, it was observed that using thicker TPU parts limited its flexibility along with the direction in which the TPU part was placed. If trying to bend in the horizontal direction, having a slab of TPU in the same direction will inhibit the flexibility of the material, causing no spring action for the pliers. Therefore, a larger contact area between the handles, clippers, and spring was made along with making the TPU section utilize thinner pieces along with using a crossing pattern.


# Aspects that Affect Functionality
When dealing with the functionality of the pliers, the clipper design was also a main inhibitor of creating pliers that would be successful in handling through-hole resistors. A common misconception when designing the clippers is that they should protrude straight out from the spring mechanism. However, after seeing this in practice, the only way to make the pliers successful with this method is to have no material between the two clippers. In order to get around this issue, the clippers were changed so that they went towards each other at an angle to eliminate the issue of having material between the two parts. To ensure that the extra spring material between the two clippers will not get in the way, extending the length of the clippers is an additive measure that was taken. 


# Print Settings
The print settings need to be specified for the materials being printed. In this case, PLA and 95TPU are being utilized in extruders 1 and 2 respectively. For each extruder, the temperature is set to the necessary temperature for its material, 210C for PLA and 225C for 95TPU. The bed temperature is not as simple as the extruder temperatures since both materials will need to adhere to it. For this print, the bed was set to 60C which allowed for both the rigid and elastic material to have good bed adhesion. 


# Demonstration Video of Part in Use


{% include gallery caption="Multi-Material Pliers" %}
