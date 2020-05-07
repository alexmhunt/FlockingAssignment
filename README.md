# Attack of the Boids
A simple implementation of the Boids/Flocking algorithm in Unreal Engine 4 (UE4) for IMGD4000 Assignment 1: Agent-Based Simulation.

Demo: https://youtu.be/YxnMPj9T-f8

Play as a brightly-colored cube and try to avoid the flock of murderous, cube-flesh hungry Boids for as long as you can!

To play, clone the repo using Git LFS, open the project in UE4, and click on the "Play" button above the viewport.
Controls: WASD to move around, look around using the mouse. If a Boid touches you, you lose some health. If your health hits zero, the game ends.



Developed by Alex Hunt.

All Boids algorithm code implemented in C++. Health, all HUD elements, and collision implemented in Blueprints.

Based off Conrad Parker's Boids pseudocode (http://www.kfish.org/boids/pseudocode.html).
