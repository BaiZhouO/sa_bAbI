#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    entity_8 = 68;                                       // Tag.BODY
    char entity_1[81];                                   // Tag.BODY
    if (entity_3 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 78;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 51; entity_5 < entity_3; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_5] = 'k';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_5;                                // Tag.POINTER_DEC
    int entity_2;                                        // Tag.BODY
    char *entity_0 = (char *)(entity_4 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_2 = 84;                                       // Tag.BODY
    char entity_9[72];                                   // Tag.BODY
    entity_9[entity_2] = 'S';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER