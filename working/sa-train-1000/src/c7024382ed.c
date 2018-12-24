#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    entity_6 = 27;                           // Tag.BODY
    char entity_7[86];                       // Tag.BODY
    if(entity_8 < entity_6){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 75;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_8] = 'B';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_8;                    // Tag.POINTER_DEC
    int entity_0;                            // Tag.BODY
    entity_0 = 14;                           // Tag.BODY
    char entity_2[78];                       // Tag.BODY
    char *entity_3 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_2[entity_0] = 'v';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER