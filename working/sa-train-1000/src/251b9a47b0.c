#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    entity_0 = 64;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_9[67];                                   // Tag.BODY
    for(entity_6 = 67; entity_6 < entity_0; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_6] = 's';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_6;                                // Tag.POINTER_DEC
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char *entity_2 = (char *)(entity_4 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_5[56];                                   // Tag.BODY
    char entity_1[75];                                   // Tag.BODY
    entity_7 = 8;                                        // Tag.BODY
    entity_3 = 48;                                       // Tag.BODY
    entity_1[entity_7] = 'o';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_3] = 'P';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER