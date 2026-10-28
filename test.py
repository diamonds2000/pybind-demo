from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parent / "build" / "force"))
from Force import *


force1 = SCForce("MyForce-1")
force1.magnitude = 10.0

force2 = SCForce("MyForce-2")
force2.magnitude = 20.0

force_list = ForceList()
force_list.addForce(force1)
force_list.addForce(force2)
for f in force_list.forces():
    print(f.name, " type of: ", f.type)
    if f.type == ForceType.SCForceType:
        print("  Magnitude: ", f.magnitude)