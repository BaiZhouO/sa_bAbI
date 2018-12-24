#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_2[77];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_9 = 0;                                        // Tag.BODY
    entity_4 = 29;                                       // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    char entity_1[27];                                   // Tag.BODY
    if (entity_6 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 44;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_4] = 'r';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_0 = 68; entity_0 < entity_6; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_0] = 'A';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_0;                                // Tag.POINTER_DEC
    int entity_7;                                        // Tag.BODY
    char *entity_8 = (char *)(entity_3 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7 = 30;                                       // Tag.BODY
    char entity_5[49];                                   // Tag.BODY
    entity_5[entity_7] = 't';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER