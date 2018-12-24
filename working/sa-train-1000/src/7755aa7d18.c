#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_1;                                       // Tag.BODY
    char entity_8[5];                                   // Tag.BODY
    entity_1 = rand();                                  // Tag.BODY
    int entity_7;                                       // Tag.BODY
    int entity_9;                                       // Tag.BODY
    entity_7 = 43;                                      // Tag.BODY
    if (entity_1 < entity_7){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_1 = 23;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_9 = 9; entity_9 < entity_1; entity_9++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_8[entity_9] = 't';                           // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                                      // Tag.POINTER_DEC
    entity_6 = &entity_9;                               // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_6 + 1);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER