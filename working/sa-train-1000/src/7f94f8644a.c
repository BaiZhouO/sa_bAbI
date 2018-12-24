#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 16;                           // Tag.BODY
    char entity_5[33];                       // Tag.BODY
    if(entity_6 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 42;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_6] = '7';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_6;                    // Tag.POINTER_DEC
    int entity_7;                            // Tag.BODY
    entity_7 = 40;                           // Tag.BODY
    char *entity_4 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_0[77];                       // Tag.BODY
    entity_0[entity_7] = 'v';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER