#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    entity_0 = 22;                           // Tag.BODY
    char entity_1[82];                       // Tag.BODY
    if(entity_2 < entity_0){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 19;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_2] = 'G';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_2;                    // Tag.POINTER_DEC
    int entity_6;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char *entity_4 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_7[87];                       // Tag.BODY
    char entity_3[1];                        // Tag.BODY
    entity_6 = 41;                           // Tag.BODY
    entity_8 = 63;                           // Tag.BODY
    entity_7[entity_6] = '8';                // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_8] = '0';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER