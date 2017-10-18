#version 330
in vec3 out_pos;
out vec4 colourOut;
void main()
{
    float red = out_pos.x + 0.5;
    float green = (-0.5 + out_pos.x) * -1.0;
    float blue = out_pos.y;
    colourOut = vec4(red, green, blue, 1.0);
}