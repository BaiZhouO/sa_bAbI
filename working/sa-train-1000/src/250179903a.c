#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 37;                           // Tag.BODY
    char entity_2[67];                       // Tag.BODY
    entity_4 = 51;                           // Tag.BODY
    if(entity_7 < entity_4){                 // Tag.BODY
    entity_7 = 89;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 8;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_7] = 'Y';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_7;                    // Tag.POINTER_DEC
    int entity_9;                            // Tag.BODY
    entity_9 = 82;                           // Tag.BODY
    char entity_3[2];                        // Tag.BODY
    int entity_1;                            // Tag.BODY
    char *entity_8 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_6[37];                       // Tag.BODY
    entity_1 = 17;                           // Tag.BODY
    entity_3[entity_1] = 'e';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6[entity_9] = 'T';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER