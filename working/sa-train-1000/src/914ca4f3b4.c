#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_6[93];                       // Tag.BODY
    entity_1 = 78;                           // Tag.BODY
    entity_4 = 77;                           // Tag.BODY
    if(entity_4 < entity_1){                 // Tag.BODY
    entity_4 = 83;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 75;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_4] = 'O';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_2;                            // Tag.BODY
    entity_2 = 37;                           // Tag.BODY
    char entity_7[24];                       // Tag.BODY
    entity_7[entity_2] = 'p';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER