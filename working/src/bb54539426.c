#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_9[4];                                    // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_5 = 15;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_8[84];                                   // Tag.BODY
    char entity_1[26];                                   // Tag.BODY
    entity_3 = 89;                                       // Tag.BODY
    entity_6 = 82;                                       // Tag.BODY
    for(entity_0 = 62; entity_0 < entity_5; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_6] = 'm';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_0] = 'u';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_9[entity_3] = 'L';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_7 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER