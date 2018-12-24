#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_6[51];                       // Tag.BODY
    entity_2 = 31;                           // Tag.BODY
    if(entity_1 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 38;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_1] = 'J';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_1;                    // Tag.POINTER_DEC
    char entity_4[5];                        // Tag.BODY
    char *entity_0 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_8;                            // Tag.BODY
    entity_8 = 61;                           // Tag.BODY
    entity_4[entity_8] = 'H';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER