#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_4[5];                        // Tag.BODY
    entity_8 = 15;                           // Tag.BODY
    char entity_0[43];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_6 = 40;                           // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    entity_0[entity_6] = 'N';                // Tag.BUFWRITE_TAUT_SAFE
    if(entity_2 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 40;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_2] = 'B';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_7 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER