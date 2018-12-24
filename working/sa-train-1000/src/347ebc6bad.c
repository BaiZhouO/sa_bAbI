#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    char entity_0[79];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_9[57];                       // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    entity_5 = 38;                           // Tag.BODY
    entity_4 = 70;                           // Tag.BODY
    if(entity_2 < entity_5){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 33;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_4] = 'H';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0[entity_2] = 'g';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER