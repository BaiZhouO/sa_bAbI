#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 42;                                       // Tag.BODY
    char entity_8[51];                                   // Tag.BODY
    if (entity_7 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 75;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 60; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_5] = 'm';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_3 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER