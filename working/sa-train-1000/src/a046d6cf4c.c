#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    char entity_3[89];                       // Tag.BODY
    char entity_0[93];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_8 = 10;                           // Tag.BODY
    entity_4 = 23;                           // Tag.BODY
    if(entity_7 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 58;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_7] = 'Z';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_1;                            // Tag.BODY
    entity_1 = 1;                            // Tag.BODY
    char entity_2[26];                       // Tag.BODY
    entity_0[entity_4] = 'F';                // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_1] = 'D';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER