#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_8[31];                       // Tag.BODY
    entity_5 = 18;                           // Tag.BODY
    if(entity_4 < entity_5){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 98;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_4] = 'k';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_4;                    // Tag.POINTER_DEC
    char entity_3[64];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    char *entity_2 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6 = 97;                           // Tag.BODY
    entity_3[entity_6] = 'q';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER