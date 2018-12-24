#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_0;                                       // Tag.BODY
    int entity_3;                                       // Tag.BODY
    entity_0 = rand();                                  // Tag.BODY
    int entity_7;                                       // Tag.BODY
    char entity_6[92];                                  // Tag.BODY
    entity_3 = 53;                                      // Tag.BODY
    if (entity_0 < entity_3){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_0 = 45;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_7 = 1; entity_7 < entity_0; entity_7++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_6[entity_7] = 'b';                           // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                                      // Tag.POINTER_DEC
    entity_9 = &entity_7;                               // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_9 + 3);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER