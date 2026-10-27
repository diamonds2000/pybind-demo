from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parent / "build" / "force"))
from Force import *


force1 = Force("MyForce-1")

force2 = Force("MyForce-2")

ForceList = ForceList()
ForceList.addForce(force1)
ForceList.addForce(force2)
print([f.name for f in ForceList.forces()])