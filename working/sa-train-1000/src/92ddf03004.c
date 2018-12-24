#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_6[67];                       // Tag.BODY
    entity_5 = 78;                           // Tag.BODY
    char entity_3[20];                       // Tag.BODY
    entity_7 = 0;                            // Tag.BODY
    entity_4 = 37;                           // Tag.BODY
    if(entity_4 < entity_5){                 // Tag.BODY
    entity_4 = 5;                            // Tag.BODY
    entity_6[entity_7] = 'K';                // Tag.BUFWRITE_TAUT_SAFE
    } else {                                 // Tag.BODY
    entity_4 = 78;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_4] = 'g';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER