#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_2[12];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_1 = 35;                           // Tag.BODY
    char entity_8[48];                       // Tag.BODY
    char entity_9[91];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_3 = 88;                           // Tag.BODY
    entity_9[entity_1] = 'f';                // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = 63;                           // Tag.BODY
    if(entity_5 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 9;                            // Tag.BODY
    entity_8[entity_4] = 'k';                // Tag.BUFWRITE_TAUT_UNSAFE
    }                                        // Tag.BODY
    entity_2[entity_5] = 'M';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER