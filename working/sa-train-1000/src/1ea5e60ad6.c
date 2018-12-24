#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_6;                                       // Tag.BODY
    int entity_0;                                       // Tag.BODY
    int entity_5;                                       // Tag.BODY
    entity_6 = 74;                                      // Tag.BODY
    entity_5 = rand();                                  // Tag.BODY
    char entity_4[14];                                  // Tag.BODY
    if (entity_5 < entity_6){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_5 = 68;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_0 = 9; entity_0 < entity_5; entity_0++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_4[entity_0] = 'w';                           // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                      // Tag.POINTER_DEC
    entity_2 = &entity_0;                               // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_2 + 2);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER