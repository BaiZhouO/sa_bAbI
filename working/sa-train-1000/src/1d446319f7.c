#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    entity_5 = 76;                                       // Tag.BODY
    char entity_4[50];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_1 = 11;                                       // Tag.BODY
    char entity_0[24];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_0[entity_5] = 'f';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = rand();                                   // Tag.BODY
    if (entity_3 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 90;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 62; entity_8 < entity_3; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_8] = 'H';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_8;                                // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_9 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER