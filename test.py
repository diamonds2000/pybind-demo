from Force import *
from Model import *

model = Model("My Model")

force1 = SCForce("MyForce-1")
force1.magnitude = 10.0

force2 = MCForce("MyForce-2")
force2.componentX = 1.0
force2.componentY = 2.0
force2.componentZ = 5.0

model.addForce(force1)
model.addForce(force2)

force_list = model.getForces()
for f in force_list.forces():
    print(f.name, " type of: ", f.type)
    print("  Magnitude: ", f.magnitude)
        