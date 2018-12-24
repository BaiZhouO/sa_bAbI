#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    char entity_9[17];                       // Tag.BODY
    char entity_8[98];                       // Tag.BODY
    entity_7 = 34;                           // Tag.BODY
    entity_5 = 58;                           // Tag.BODY
    if(entity_0 < entity_5){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9[entity_7] = 'd';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 40;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_0] = 'T';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_0;                    // Tag.POINTER_DEC
    int entity_4;                            // Tag.BODY
    entity_4 = 28;                           // Tag.BODY
    char *entity_1 = (char *)(entity_6 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_2[0];                        // Tag.BODY
    entity_2[entity_4] = 'S';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER