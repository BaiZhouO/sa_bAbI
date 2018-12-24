#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_4[98];                       // Tag.BODY
    char entity_9[21];                       // Tag.BODY
    entity_3 = 18;                           // Tag.BODY
    entity_1 = 88;                           // Tag.BODY
    entity_2 = 82;                           // Tag.BODY
    if(entity_2 < entity_3){                 // Tag.BODY
    entity_2 = 78;                           // Tag.BODY
    entity_9[entity_1] = 'S';                // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                 // Tag.BODY
    entity_2 = 5;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_2] = 'X';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER