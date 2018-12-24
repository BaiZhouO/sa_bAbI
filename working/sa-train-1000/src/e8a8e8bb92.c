#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    entity_2 = 19;                           // Tag.BODY
    char entity_1[68];                       // Tag.BODY
    if(entity_9 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 72;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_9] = 'P';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_9;                    // Tag.POINTER_DEC
    int entity_5;                            // Tag.BODY
    char entity_7[49];                       // Tag.BODY
    char *entity_0 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_5 = 37;                           // Tag.BODY
    entity_7[entity_5] = 'R';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER