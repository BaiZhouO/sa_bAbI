#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_9[79];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_8 = 5;                                        // Tag.BODY
    entity_5 = 44;                                       // Tag.BODY
    char entity_1[86];                                   // Tag.BODY
    for(entity_6 = 85; entity_6 < entity_5; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_6] = 'g';                            // Tag.BUFWRITE_COND_SAFE
    entity_9[entity_8] = 'K';                            // Tag.BUFWRITE_TAUT_SAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_6;                                // Tag.POINTER_DEC
    int entity_7;                                        // Tag.BODY
    char entity_2[75];                                   // Tag.BODY
    char *entity_3 = (char *)(entity_4 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7 = 66;                                       // Tag.BODY
    entity_2[entity_7] = 'm';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER