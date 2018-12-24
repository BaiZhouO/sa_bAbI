#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    char entity_5[99];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_6 = 20;                           // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    entity_3 = 80;                           // Tag.BODY
    char entity_9[44];                       // Tag.BODY
    if(entity_8 < entity_6){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 96;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_8] = 'a';                // Tag.BUFWRITE_COND_SAFE
    entity_9[entity_3] = 'C';                // Tag.BUFWRITE_TAUT_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_7;                            // Tag.BODY
    char entity_1[91];                       // Tag.BODY
    entity_7 = 55;                           // Tag.BODY
    entity_1[entity_7] = 'Y';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER