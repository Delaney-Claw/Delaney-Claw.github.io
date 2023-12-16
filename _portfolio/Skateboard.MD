---
title: "3D Printed Electric Skateboard"
excerpt: "The skateboard deck and trucks were created to explore large format printing and generative design."
header: 
  teaser: assets/img/SBirl.jpg
gallery:
  - url: assets/img/SBtop.jpg
    image_path: assets/img/SBtop.jpg
    alt: "top of the skateboard assembled model"
  - url: /assets/img/SBbottom.jpg
    image_path: assets/img/SBbottom.jpg
    alt: "bottom of the skateboard assembled model"
  - url: /assets/img/SBcompare.jpg
    image_path: assets/img/SBcompare.jpg
    alt: "comparison between two truck designs"
  - url: /assets/img/SBtruck.jpg
    image_path: assets/img/SBtruck.jpg
    alt: "truck assembly with motor and gear system"
  - url: /assets/img/SBsimulation.jpg
    image_path: assets/img/SBsimulation.jpg
    alt: "deck deflection simulation for a 200 lbs person"
  - url: /assets/img/SBresin.jpg
    image_path: assets/img/SBresin.jpg
    alt: "assembly resin printed, small scale, top"
  - url: /assets/img/SBresin2.jpg
    image_path: assets/img/SBresin2.jpg
    alt: "assembly resin printed, small scale, bottom"
  - url: /assets/img/SBirl.jpg
    image_path: assets/img/SBirl.jpg
    alt: "completed skateboard"
  - url: /assets/img/SBassembled.jpg
    image_path: assets/img/SBassembled.jpg
    alt: "assembled printed components for skateboard motor"
---

This project was created for Additive Manufacturing at Vanderbilt University. The skateboard has many parts, and we designed two: the main deck and the wheel axle, called a truck. The deck was printed using large format 3D printing and the truck design uses generative design. Learn about these tools and the design process below! 

{% include gallery caption="This is an image gallery with images from throughout the design process." %}

# CAD Models
Assembled skateboard model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6ebf3a4111f0c9283e?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

Aluminum Truck 

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6eb81a666ef7a197e5?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

Nylon Truck 

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6eda882312e1a17209?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Skateboard Deck Design
We designed two major components of the skateboard – the deck and the trucks for the wheels. The trucks were designed using AI generating tools, which are described below. The deck was designed manually and tested in a bending simulation. 

I went for the classic skateboard shape, which is called a cruiser. It can be used for some tricks but is generally good for getting around city streets. It can maneuver without being unstable. There is no tail or nose to this skateboard because it must be printed on the large format 3D printer, which does not allow removable support material. If there were, I would do a nose angle of 20 degrees and tail angle of 19 degrees, which is based on a video by OpenSource Skateboards. 

The skateboard dimensions are based on reading Skate Warehouse and other beginner guides. They overall recommend the length of skateboards related to your height and the width related to your shoe size. My design is 31 inches long and 8 inches wide. 

The visual design on the deck matches the phone case I created for Rapid Prototyping, which has randomly placed circles that look like bubbles. This allows there to be very little deflection because the majority of the skateboard’s volume is filled with material. 

Once I had decided on the size and look of the board, it was time to test it out. I did a one-dimensional bending simulation using gravity and 890 N, which is the force of a 200-pound person riding on the skateboard. The vertical height of the skateboard is 15 mm. I started with it low with the intention of increasing it after failed simulations, but it passed simulations at this thickness because of my design. The material in the simulation was ABS, although the real print can be done using carbon fiber composite ABS. The board is fixed around two plates that hold the trucks. My simulation resulted in 1.744 mm of deflection at the maximum, located in the center. The minimum safety factor is 4.019, which is focused at the corners of the plates. The vast majority of the board has a safety factor greater than 6. 

# Generative Design in the Automotive Industry
This item was created using the generative design tool found in Fusion360. This tool takes several inputs and AI generates an item to minimize mass while satisfying the input criteria. Inputs are volumes where material must be, where material cannot be, fixed points, and forces that interact with those volumes. Given thoughtful, thorough inputs, generative design can be an extremely useful tool for streamlining the design process and improving products. 

Because the designs are generated by artificial intelligence, they are often in unique and organic shapes rather than straight lines and reduced internal geometries that are favored for filament 3D printing. SLS, or Selective Laser Sintering, is an ideal printing technology for this reason. SLS prints do not use support material. Instead, the entire print volume is filled with powder. This powder is smoothed over the bed, the laser creates that layer’s shape, and the bed moves down to get a fresh layer of powder. Organic shapes, curved surfaces, extreme overhangs, bridging, and other features that are difficult to produce with other printing types can be easily created with SLS. It can also be packed full of many parts because they can be vertical to each other in the build volume. More parts can be made at once than with other printing technologies since the parts don’t have to touch the bed (depending on the material). High throughput of parts is key to including additive technology in manufacturing, and SLS is a great way to meet these demands. 

Generative designs use a level of creativity that manual designing doesn’t typically access. The angles and shapes are unlike what humans would consider for an object. This unlocks a new set of possible solutions that human imagination doesn’t usually reach. 

An impressive benefit of generative design is the ability to reduce the quantity of pieces needed for a design. One example in the automotive industry is a seat bracket designed by General Motors. The original seat bracket design is eight small components assembled, all with simple geometries that can be achieved using traditional machining techniques. The generative design eliminated the assembly process and created one printed part that uses less material. This example is an excellent demonstration of how generative techniques can be used to redesign currently existing parts to be better for the manufacturing process and lighter weight. 

Lightweight parts are key to the future of the automotive industry. Weight is a huge design constraint in making vehicles fuel efficient, which can mean fewer gallons of gas or extending the range of an electric car. Consolidating parts from multiple components into one makes it more efficient to manufacture because it cuts assembly steps. Multiple parts also would come from multiple suppliers, and consolidating down to one part means the manufacturing has fewer concerns about supply chain issues. Eliminating human assembly also eliminates human errors that can be dangerous to the end user. 

The additive design process reduces material waste that is typically found in subtractive manufacturing. Instead of taking a large piece and wasting material by cutting it away, additive technologies eliminate this wasted material by placing only where material is needed. SLS powders can also be recycled after a sorting process to remove partially fused particles. 

Iterations can be created rapidly using generative design tools by adjusting the load cases. These can result in completely different designs and evaluate their safety rapidly, which makes the engineering design process more efficient. The generative design can also be put into other simulation scenarios for testing within Fusion360 or other simulation tools. The combination allows for engineers to eliminate ineffective designs quickly without ever needing to print or manufacture the object. 

While the example given here is an individual component of a vehicle, generative design can be used on any scale, from the smallest of engine parts to the entire body of the car. The technology developments of generative design and SLS printing go hand in hand and can help the automotive industry move into the future. 

Resources: 
[OpenSource Skateboard](https://www.youtube.com/watch?app=desktop&v=meiQGtTQUQo) \
[Skate Warehouse](https://www.skatewarehouse.co.uk/blogs/buyer-guides/buying-your-first-skateboard-a-beginners-guide) \
[Autodesk and General Motors](https://www.autodesk.com/customer-stories/general-motors-generative-design) \
[Neural Concept](https://www.neuralconcept.com/post/challenges-in-generative-design-for-automotive-ev-industry)
