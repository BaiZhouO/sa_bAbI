#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    char entity_0[0];                        // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 70;                           // Tag.BODY
    if(entity_3 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 80;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_3] = 'E';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_3;                    // Tag.POINTER_DEC
    char entity_8[74];                       // Tag.BODY
    char *entity_1 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_9;                            // Tag.BODY
    entity_9 = 75;                           // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 82;                           // Tag.BODY
    char entity_6[98];                       // Tag.BODY
    entity_8[entity_7] = 'N';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6[entity_9] = 'K';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER