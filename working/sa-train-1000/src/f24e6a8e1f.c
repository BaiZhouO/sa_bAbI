#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    char entity_5[93];                       // Tag.BODY
    entity_6 = 78;                           // Tag.BODY
    int entity_0;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    entity_0 = 18;                           // Tag.BODY
    char entity_1[0];                        // Tag.BODY
    entity_5[entity_6] = 'a';                // Tag.BUFWRITE_TAUT_SAFE
    if(entity_9 < entity_0){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 74;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_9] = 'E';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_7[92];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 61;                           // Tag.BODY
    entity_7[entity_4] = 'k';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER