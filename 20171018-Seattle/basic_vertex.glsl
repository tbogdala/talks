#version 330
in vec3 position;
out vec3 out_pos;
void main()
{
    out_pos = position;
    gl_Position = vec4(position, 1.0);
}