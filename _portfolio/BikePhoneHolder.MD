---
title: "Bike Phone Holder"
excerpt: "This device holds a phone in place while riding a bike. Great to use for directions!"
header: 
  teaser: assets/img/assembledBPH.jpeg
gallery:
  - url: assets/img/assembledBPH.jpeg
    image_path: assets/img/assembledBPH.jpeg
    alt: "assembled bike phone holder"
  - url: assets/img/lockBPH.jpeg
    image_path: assets/img/lockBPH.jpeg
    alt: "separated into two halves to view the lock mechanism"
  - url: assets/img/backBPH.jpeg
    image_path: assets/img/backBPH.jpeg
    alt: "two halves flipped over"
---



The bike phone holder was created for additive manufacturing class at Vanderbilt University using the top-down modeling approach. Learn more about it below! 

{% include gallery caption="This is a sample gallery with different views of the assembled device and each of the parts." %}

# CAD Model 

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e2ddcd9cad9ad7619?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Top-Down Modeling Technique

Previously when designing an assembly with multiple parts, I have placed each part in an individual file, heavily parametrized the design, and then derived those parameters across the files. Once the individual parts were all made, I would assemble them in one file. This approach allows for trading parts in and out of the assembly easily. However, it can be difficult to manage the parameters across files and make sure the parts fit together and update to fit changes. The workflow is slowed down by switching back and forth between files. 

For this project, I introduced top-down modeling. This is when all the parts of an assembly are made as components within the same file. After making the first part, the next part can be built exactly where it needs to fit in order to assemble together. The project and include tools are key to success. The top-down modeling approach was used in this assignment because later designed parts can adjust to changes made to earlier designed parts because of the projected/included features. Parameters only need to be defined once and are carried throughout all parts without using derive. The parts can be visualized independently or within the assembly. 

Separate files can also be added as a component with top-down modeling. For example, I made the phone attachment first. Then I made a separate document for the attachment to the bike, added the phone attachment as a component, and designed the phone lock and attachment to the bike handles. I did this because I wanted to be sure if I needed to start over because the attachment to the handles wasn’t working, I would still have the phone attachment. 

# About This Design 

My design is made to simple and low profile. I avoided the ball-in-socket style because a round design seems difficult to lock into vertical or horizontal positions. I also disliked how they usually depend on a press fit, which can take many iterations to print just the right size. My original design ideas included pegs on the phone that could be inserted into holes in the base and a press fit circular dovetail. That circular dovetail design stuck in my head, but I didn’t want to use the press fit, so I thought of the attachment style used in the final design. I added the + cutout to the inside of the attachment to lock the phone into horizontal and vertical orientations. 

Four parts need to be printed: the lower handle attachment, upper handle attachment, phone lock, and phone straps. The latter is printed in flexible TPU filament so it can fit around the phone. The rest are printed with PLA because it is an inexpensive and durable material. 

Once all parts are printed, they must be assembled. First, add M5 heat set inserts into the two holes on the phone lock. Add two M5 8 mm screws through the holes in the phone strap into the heat set inserts to attach it to the phone lock. Next, add four M5 heat set inserts to the upper handle attachment. The lower and upper handle attachment pieces are paired around the handle and screwed together with M5 20 mm screws. Finally, the phone lock piece is slid down into the top of the upper handle attachment and rotated to the desired orientation. 
