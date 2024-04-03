# shooty-shapes

Player:
  - Player is a shape defined in the config file.
  - Spawns in center and respawns in the center upon death.
  - W A S D movement.
  - Confined to the bounds of the window.
  - Shoots a bullet towards the mouse on left click. Bullet specs read in from config file.

Special ability
 - Special move fired on right click.
  - Has multiple entities.
  - Has a unique graphic.
  - Introduced via a new component.
  - Cooldown timer.
  - Not read from the config file.

Enemies
  - Spawn randomly on the screen every x frame. X is defined in the config file.
  - Must not overlap the bounds of the screen upon spawning.
  - Shape must have random number of vertices between a min and max from the config file.
  - Shape radius specified in config file.
  - Random colour.
  - Random speed between a min and max from the config file.
  - Bounces off the bounds of the screen.
  - Upon collision of plater or bullet, destroy. Then, spawn N small enemies in its place. 
    N is the number of vertices of the original enemy. Each small enemy must have the same
    number of vertices and colour of the original enemy. Travel outwards at fixed intervals
    equal to (360 / vertices). E.g. 6 sided enemy, 6 smaller enemies will travel outwards
    in intervals of (360/6) = 60 degrees. 

Score
  - Each time an enemy spawns, it is given a score component of N*100 where N is the vertices.
    Small enemies get double this.
  - If bullet kills enemy, the game score is increased by that number.
  - Score counter displayed in top left with specs defined in the config file.

Drawing
  - Render system entities should be given a slow rotation for looks.
  - Special effects which do not alter game play for looks.
  - Entity lifespan should have its alpha value reduced depending on its time left.

Config file
 - When reading, the initial token will define what we add.
 - Window W H FL FS
 - Font F S R G 
 - Player SR CR S FR FG FB OR OG OB OT V
 - Enemy SR CR SMIN SMAX OR OG OB OT VMIN VMAX L SI
 - Bullet SR CR S FR FG FB OR OG OB OT V L
