#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    char entity_4[78];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 78;                           // Tag.BODY
    entity_5 = 47;                           // Tag.BODY
    if(entity_5 < entity_0){                 // Tag.BODY
    entity_5 = 58;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 22;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_5] = 'V';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_5;                    // Tag.POINTER_DEC
    int entity_8;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_8 = 40;                           // Tag.BODY
    char *entity_2 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_3[77];                       // Tag.BODY
    entity_7 = 26;                           // Tag.BODY
    char entity_1[88];                       // Tag.BODY
    entity_1[entity_7] = 'v';                // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_8] = 'o';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER