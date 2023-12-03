---
title: "MicroFluidic Mixing Device"
excerpt: "Thorough mixes of small volumes of liquid"
header: 
  teaser: assets/img/mold.jpeg
gallery:
  - url: assets/img/mold.jpeg
    image_path: assets/img/mold.jpeg
    alt: "mold for microfluidic device"
  - url: /assets/img/mold3D.jpeg
    image_path: assets/img/mold3D.jpeg
    alt: "angled view of mold to see the 3D elements"
---

The microfluidic mixing device is used to thoroughly mix small volumes of liquid. 

# CAD Model

# Project Description

We designed a mold for a microfluidic mixing device. It takes injections of two liquids and mixes them together for an output on the other side. The emphasis is on small quantities of liquid to be thoroughly mixed. This is useful for medical diagnostics tools that have an interest in high throughput of samples and smaller samples taken from patients. 

Our path design is short path length for high throughput but still gets high quality mixtures using shaped channels. The overall path is 2.5 mm tall and 2 mm wide. An aspect ratio of more than 3:1 is in danger of breaking off during the mold process. 

We chose channel shapes based on ___ paper. This paper describes the mixing efficiency of many channel designs. First, there is a zig zag path to combine the two inlets. The ratio of path width to length between peaks was 4 to maximize efficiency. Next, we wanted a 3D mixing element because the paper showed that those are highly effective. However, many of those designs would not be removable from the mold. We went with semicircle cutouts to create vertical mixing after the horizontal mixing. Finally, the parallelogram barrier is used before the outlet. 

The mold was printed and thoroughly washed and cured. Before the cast can be made, the mold must be thoroughly coated with parylene. Once the parylene coating is in place the PDMS can be cast and set. Once the PDMS is completely set, remove the cast from the mold and plasma bond it to a glass slide. 

Vat photopolymerization (VPP) was chosen for the mold because of the high resolution that this print technology allows. The minimum feature size in the printer used is 85 μm and the XY and Z resolution are both 25 μm. The path needs to be small because there are small quantities of liquids being mixed, so high resolution is essential to print the mold. 

The main drawback of this printing technique is that the VPP resin and PDMS cannot interact. The monomers and photo initiators from the resin will prevent the PDMS from setting. The parylene coating is required to prevent this reaction from occurring. If there is any disturbance in this coating, it can ruin the cast. 
