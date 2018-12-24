#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[20];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_0 = 91;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 80;                                       // Tag.BODY
    entity_2 = 83;                                       // Tag.BODY
    char entity_1[7];                                    // Tag.BODY
    char entity_6[63];                                   // Tag.BODY
    entity_5[entity_3] = '6';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_7 = 94; entity_7 < entity_2; entity_7++){ // Tag.BODY
    entity_1[entity_0] = '2';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_6[entity_7] = '7';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_9 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER