#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    char entity_4[96];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 85;                           // Tag.BODY
    entity_7 = 49;                           // Tag.BODY
    if(entity_7 < entity_8){                 // Tag.BODY
    entity_7 = 74;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 14;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_7] = 'F';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER