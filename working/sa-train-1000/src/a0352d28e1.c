#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[78];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_1[70];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_6 = 3;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_7[35];                                   // Tag.BODY
    entity_4 = 25;                                       // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    entity_8 = 90;                                       // Tag.BODY
    if (entity_3 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 57;                                       // Tag.BODY
    entity_1[entity_8] = '4';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    for(entity_2 = 77; entity_2 < entity_3; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_6] = 'p';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_2] = 'b';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_2;                                // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_9 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER