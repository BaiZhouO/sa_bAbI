#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_8[64];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_5[28];                       // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_9 = 49;                           // Tag.BODY
    entity_1 = 32;                           // Tag.BODY
    if(entity_7 < entity_9){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 36;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_7] = 'm';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_5[entity_1] = 'O';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER