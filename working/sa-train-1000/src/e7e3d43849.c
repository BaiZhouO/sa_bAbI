#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_7[51];                                   // Tag.BODY
    entity_0 = 66;                                       // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    if (entity_6 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 45;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 96; entity_5 < entity_6; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_5] = 'I';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_3 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER