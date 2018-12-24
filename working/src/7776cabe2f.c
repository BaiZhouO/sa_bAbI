#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_2 = 28;                                       // Tag.BODY
    entity_8 = 77;                                       // Tag.BODY
    entity_7 = 23;                                       // Tag.BODY
    char entity_3[17];                                   // Tag.BODY
    char entity_1[99];                                   // Tag.BODY
    char entity_5[45];                                   // Tag.BODY
    for(entity_4 = 30; entity_4 < entity_2; entity_4++){ // Tag.BODY
    entity_1[entity_8] = 'n';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    entity_5[entity_7] = 'q';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_4] = 'o';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_4;                                // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_9 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER