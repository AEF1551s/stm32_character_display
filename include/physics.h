#if !defined(PHYSICS_H)
#define PHYSICS_H

#include <stdint.h>
#include <lcd_char_disp.h>
#include <particle_char_generator.h>

struct position
{
    uint8_t x; // 0 - 79
    uint8_t y; // 0 - 17
};
struct velocity
{
    uint8_t x;
    uint8_t y;
};
struct acceleration
{
    uint8_t x;
    uint8_t y;
};
struct particle
{
    struct position pos;
    struct velocity vel;
    struct acceleration acc;
};
struct relative_position
{
    struct position char_position;  // 0-15
    struct position pixel_position; // 0-39
    uint8_t char_seq; // 0-31
};

// Only supports single particles
// TODO: Add multiple particles
static struct particle *particle_array[1];
static uint32_t particle_count = 0;

void spawn_particle(struct particle *particle);

static struct relative_position char_pos_from_absolute(struct position *position); // Gets char box positon and pixel position from absolute coordinates
#endif                                                                             // PHYSICS_H