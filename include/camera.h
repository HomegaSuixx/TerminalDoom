#pragma once

typedef struct Camera {
    float X;
    float Y;
    float Angle;
    float FOV;
    float Depth;
    float speed;
} Camera;

Camera Camera_new();