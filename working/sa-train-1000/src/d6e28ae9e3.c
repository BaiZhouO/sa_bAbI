#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_7[44];                                   // Tag.BODY
    entity_4 = 25;                                       // Tag.BODY
    if (entity_6 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 58;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 20; entity_0 < entity_6; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_0] = 'd';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_5;                                        // Tag.BODY
    entity_5 = 51;                                       // Tag.BODY
    char entity_1[51];                                   // Tag.BODY
    entity_1[entity_5] = 'f';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER