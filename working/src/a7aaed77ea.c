#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    entity_3 = 25;                           // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 58;                           // Tag.BODY
    char entity_8[6];                        // Tag.BODY
    if(entity_3 < entity_6){                 // Tag.BODY
    entity_3 = 18;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 15;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_3] = 'A';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_9 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER