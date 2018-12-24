#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_6[29];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    entity_8 = 76;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    if (entity_7 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 45;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 60; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_5] = 'C';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                                       // Tag.POINTER_DEC
    entity_4 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_4 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER