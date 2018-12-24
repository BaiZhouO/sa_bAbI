#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_3[0];                        // Tag.BODY
    int entity_9;                            // Tag.BODY
    char entity_7[10];                       // Tag.BODY
    entity_2 = 45;                           // Tag.BODY
    entity_5 = 47;                           // Tag.BODY
    entity_9 = 93;                           // Tag.BODY
    if(entity_5 < entity_2){                 // Tag.BODY
    entity_5 = 38;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 88;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_5] = 'S';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_5;                    // Tag.POINTER_DEC
    entity_7[entity_9] = 'G';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_6 = (char *)(entity_4 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER