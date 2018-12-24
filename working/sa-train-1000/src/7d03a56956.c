#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_0[29];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_5[36];                                   // Tag.BODY
    entity_8 = 22;                                       // Tag.BODY
    entity_7 = 57;                                       // Tag.BODY
    entity_2 = 23;                                       // Tag.BODY
    char entity_4[12];                                   // Tag.BODY
    for(entity_1 = 31; entity_1 < entity_8; entity_1++){ // Tag.BODY
    entity_0[entity_7] = 'T';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_4[entity_2] = 'o';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_1] = 'G';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                                       // Tag.POINTER_DEC
    entity_6 = &entity_1;                                // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_6 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER